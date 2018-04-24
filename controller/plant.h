#ifndef plant_h
#define plant_h


class PlantClass{
  /* public variables and functions */
  public:
    // construction function
    PlantClass();

    
    // init the plant object
    bool Init(void);
    
    // refresh sensors
    void UpdateSensors(void);
    bool AdjustPlant(void);

    
    
  
  private:
    
    
};

#endif /* plant.h */
