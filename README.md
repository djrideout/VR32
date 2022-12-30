### Requires:
- Docker
### Install:
`docker build -t vr32 .`
### Build:
- CMD: `docker run -v %cd%:/vr32 --rm vr32`
- PowerShell: `docker run -v ${pwd}:/vr32 --rm vr32`
- bash: `docker run -v $(pwd):/vr32 --rm vr32`
