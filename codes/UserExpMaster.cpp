void __fastcall UserExpMaster___ctor(UserExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389CE1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
    byte_4389CE1 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    60,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
}


UserExpEntity_o *__fastcall UserExpMaster__getEntityFromLevel(
        UserExpMaster_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4389CE2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    byte_4389CE2 = 1;
  }
  return (UserExpEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              lv,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
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
  if ( (byte_4389CE4 & 1) == 0 )
  {
    this = (UserExpMaster_o *)sub_B775C4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    byte_4389CE4 = 1;
  }
  LevelMax = UserExpMaster__getLevelMax(this, (const MethodInfo *)exp);
  if ( LevelMax >= start_lv )
  {
    v8 = LevelMax;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
               start_lv,
               (const MethodInfo_21FB894 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
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
                   (const MethodInfo_21FB894 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      }
      while ( Entity );
    }
  }
  return start_lv;
}


int32_t __fastcall UserExpMaster__getLevelMax(UserExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4389CE3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_8864/*"MAX_USER_LV"*/);
    byte_4389CE3 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_8864/*"MAX_USER_LV"*/, 0LL);
}