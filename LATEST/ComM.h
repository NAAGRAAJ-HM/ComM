#pragma once

class class_ComM{
   public:
      void InitFunction              (void);
      void DeInitFunction            (void);
      void GetState                  (void);
      void GetStatus                 (void);
      void GetInhibitionStatus       (void);
      void RequestComMode            (void);
      void GetMaxComMode             (void);
      void GetRequestedComMode       (void);
      void GetCurrentComMode         (void);
      void PreventWakeUp             (void);
      void LimitChannelToNoComMode   (void);
      void LimitECUToNoComMode       (void);
      void ReadInhibitCounter        (void);
      void ResetInhibitCounter       (void);
      void SetECUGroupClassification (void);
      void GetVersionInfo            (void);
      void MainFunction              (void);
};

extern class_ComM ComM;

