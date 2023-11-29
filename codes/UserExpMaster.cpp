void __fastcall UserExpMaster___ctor(UserExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F96A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__, method);
    byte_40F96A7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    59,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserExpEntity_o *__fastcall UserExpMaster__getEntityFromLevel(
        UserExpMaster_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_40F96A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, *(_QWORD *)&lv);
    byte_40F96A8 = 1;
  }
  return (UserExpEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              lv,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
}


int32_t __fastcall UserExpMaster__getLevel(
        UserExpMaster_o *this,
        int64_t exp,
        int32_t start_lv,
        const MethodInfo *method)
{
  UserExpMaster_o *v6; // x21
  int32_t LevelMax; // w0
  int32_t v8; // w22
  WarEntity_o *Entity; // x0
  int32_t v10; // w23

  v6 = this;
  if ( (byte_40F96AA & 1) == 0 )
  {
    this = (UserExpMaster_o *)sub_B16FFC(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, exp);
    byte_40F96AA = 1;
  }
  LevelMax = UserExpMaster__getLevelMax(this, (const MethodInfo *)exp);
  if ( LevelMax >= start_lv )
  {
    v8 = LevelMax;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
               start_lv,
               (const MethodInfo_266F388 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( Entity )
    {
      v10 = start_lv + 1;
      do
      {
        start_lv = Entity->fields.id;
        if ( (__int64)Entity->fields.age > exp )
          break;
        if ( v10 > v8 )
          break;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
                   v10++,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      }
      while ( Entity );
    }
  }
  return start_lv;
}


int32_t __fastcall UserExpMaster__getLevelMax(UserExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F96A9 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8674, method);
    byte_40F96A9 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_8674, 0LL);
}