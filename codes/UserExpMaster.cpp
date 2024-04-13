void __fastcall UserExpMaster___ctor(UserExpMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E70F2 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    60,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
}


UserExpEntity_o *__fastcall UserExpMaster__getEntityFromLevel(
        UserExpMaster_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E70F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, lv, (_DWORD)method, v3);
    byte_42E70F3 = 1;
  }
  return (UserExpEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                              lv,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
}


int32_t __fastcall UserExpMaster__getLevel(
        UserExpMaster_o *this,
        int64_t exp,
        int32_t start_lv,
        const MethodInfo *method)
{
  int32_t id; // w19
  UserExpMaster_o *v6; // x21
  int32_t LevelMax; // w0
  int32_t v8; // w22
  WarEntity_o *Entity; // x0
  int32_t v10; // w23

  id = start_lv;
  v6 = this;
  if ( (byte_42E70F5 & 1) == 0 )
  {
    this = (UserExpMaster_o *)sub_B5D5C4(
                                &Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__,
                                exp,
                                start_lv,
                                method);
    byte_42E70F5 = 1;
  }
  LevelMax = UserExpMaster__getLevelMax(this, (const MethodInfo *)exp);
  if ( LevelMax >= id )
  {
    v8 = LevelMax;
    Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
               id,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( Entity )
    {
      v10 = id + 1;
      do
      {
        id = Entity->fields.id;
        if ( (__int64)Entity->fields.age > exp )
          break;
        if ( v10 > v8 )
          break;
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)v6,
                   v10++,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      }
      while ( Entity );
    }
  }
  return id;
}


int32_t __fastcall UserExpMaster__getLevelMax(UserExpMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70F4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8793/*"MAX_USER_LV"*/, (_DWORD)method, v2, v3);
    byte_42E70F4 = 1;
  }
  return ConstantMaster__getValue((System_String_o *)StringLiteral_8793/*"MAX_USER_LV"*/, 0LL);
}