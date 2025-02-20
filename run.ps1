.\BuildArtifacts\Shipping\WindowsServer\CapsaDemoServer.exe -log -port=7777

Start-Sleep -Seconds 5

.\BuildArtifacts\Shipping\Windows\CapsaDemo.exe -WINDOWED -ResX=800 -ResY=450

Start-Sleep -Seconds 2

.\BuildArtifacts\Shipping\Windows\CapsaDemo.exe -WINDOWED -ResX=800 -ResY=450