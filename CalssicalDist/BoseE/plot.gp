set term postscript enhanced color 'Helvetica-Bold,16'
set output 'be.ps'
set yr [-5:5]
set xr [0.9:1.1]
set style line 1 lt 1 lw 2 lc rgb 'blue'
set style line 2 lt 1 lw 2 lc rgb 'black'
set style line 3 lt 1 lw 2 lc rgb 'red'
set title 'B-E function at different temperatures, E_F = 1 eV'
set grid
set xl 'Energy (eV)'
set yl 'f(E)' offset 1
plot 'out.dat' u 1:2 w l ti 'T = 10K' ls 1,\
 'out.dat' u 1:3 w l ti 'T = 100K' ls 2,\
 'out.dat' u 1:4 w l ti 'T = 300K' ls 3
set output
! ps2pdf be.ps
! rm be.ps


