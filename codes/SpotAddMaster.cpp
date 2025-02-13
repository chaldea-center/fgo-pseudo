void __fastcall SpotAddMaster___ctor(SpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD02A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
    byte_4BDD02A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    222,
    (const MethodInfo_325E55C *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotAddEntity_o *__fastcall SpotAddMaster__GetEntity(
        SpotAddMaster_o *this,
        int32_t spotId,
        int32_t priority,
        int32_t overrideType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDD028 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
    byte_4BDD028 = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&overrideType);
  return (SpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_3260880 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
}


int32_t __fastcall SpotAddMaster__GetPrioredID(
        SpotAddMaster_o *this,
        int32_t type,
        int32_t spotId,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t data; // [xsp+Ch] [xbp-14h] BYREF

  data = 0;
  if ( SpotAddMaster__HasPrioredData(this, type, spotId, &data, method) )
    return data;
  else
    return defVal;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotAddMaster__HasPrioredData(
        SpotAddMaster_o *this,
        int32_t type,
        int32_t spotId,
        int32_t *data,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int klass_high; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x26
  int32_t monitor_high; // w27
  int32_t monitor; // w29
  int64_t klass_low; // x28
  int32_t *v20; // [xsp+0h] [xbp-70h]
  void *v21; // [xsp+8h] [xbp-68h]

  if ( (byte_4BDD02B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
    sub_1C21E38(&CondType_TypeInfo);
    byte_4BDD02B = 1;
  }
  *data = -1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v20 = data;
    v21 = 0LL;
    v11 = Count;
    v12 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
      if ( Item )
      {
        v15 = Item;
        if ( LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == type
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
          {
            list = this->fields.list;
            if ( !list )
              break;
            klass_high = HIDWORD(v15[1].klass);
            list = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     v12,
                     (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
            if ( !list )
              break;
            v21 = list;
            *v20 = *((_DWORD *)list + 7);
          }
        }
      }
      if ( v11 == ++v12 )
        return v21 != 0LL;
    }
LABEL_21:
    sub_1C22094(list, *(_QWORD *)&type);
  }
  v21 = 0LL;
  return v21 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotAddMaster__OverwriteNamePanelOffset(
        SpotAddMaster_o *this,
        int32_t spotId,
        int32_t *ofsX,
        int32_t *ofsY,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w23
  int32_t v10; // w24
  int v11; // w20
  int klass_high; // w19
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x25
  int monitor; // w8
  int32_t v16; // w26
  int32_t v17; // w28
  int64_t v18; // x27
  int32_t v19; // w8
  int32_t *v20; // x9
  int32_t monitor_high; // w26
  int32_t v22; // w28
  int64_t klass_low; // x27

  if ( (byte_4BDD02C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
    sub_1C21E38(&CondType_TypeInfo);
    byte_4BDD02C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_1C22094(list, *(_QWORD *)&spotId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = -1;
    klass_high = -1;
    do
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_24;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
      if ( Item )
      {
        v14 = Item;
        if ( LODWORD(Item[1].klass) == spotId )
        {
          monitor = (int)Item[1].monitor;
          if ( monitor == 5 )
          {
            if ( SHIDWORD(Item[1].klass) < klass_high )
              goto LABEL_22;
            v22 = (int32_t)Item[2].monitor;
            monitor_high = HIDWORD(Item[2].monitor);
            klass_low = SLODWORD(Item[3].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( !CondType__IsOpen(v22, monitor_high, klass_low, 0, 0LL, 0LL) )
              goto LABEL_22;
            v19 = HIDWORD(v14[1].monitor);
            klass_high = HIDWORD(v14[1].klass);
            v20 = ofsY;
          }
          else
          {
            if ( monitor != 4 || SHIDWORD(Item[1].klass) < v11 )
              goto LABEL_22;
            v17 = (int32_t)Item[2].monitor;
            v16 = HIDWORD(Item[2].monitor);
            v18 = SLODWORD(Item[3].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( !CondType__IsOpen(v17, v16, v18, 0, 0LL, 0LL) )
              goto LABEL_22;
            v19 = HIDWORD(v14[1].monitor);
            v11 = HIDWORD(v14[1].klass);
            v20 = ofsX;
          }
          *v20 = v19;
        }
      }
LABEL_22:
      ++v10;
    }
    while ( v9 != v10 );
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotAddMaster__TryGetEntity(
        SpotAddMaster_o *this,
        SpotAddEntity_o **entity,
        int32_t spotId,
        int32_t priority,
        int32_t overrideType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDD029 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
    byte_4BDD029 = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
}


bool __fastcall SpotAddMaster__TryGetOverwriteName(
        SpotAddMaster_o *this,
        System_String_o **spotName,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  PartyOrganizationUtility_c *klass; // x22
  int32_t v16; // w23
  int32_t v17; // w24
  int klass_high; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x25
  int32_t monitor_high; // w26
  int32_t monitor; // w28
  int64_t klass_low; // x27
  PartyOrganizationUtility_o *v25; // [xsp+8h] [xbp-68h]

  if ( (byte_4BDD02D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD02D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v25 = (PartyOrganizationUtility_o *)spotName;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
  klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v17,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
      if ( Item )
      {
        v20 = Item;
        if ( LODWORD(Item[1].klass) == spotId && LODWORD(Item[1].monitor) == 6 && SHIDWORD(Item[1].klass) >= klass_high )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
          {
            klass_high = HIDWORD(v20[1].klass);
            klass = (PartyOrganizationUtility_c *)v20[2].klass;
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_18;
    }
LABEL_19:
    sub_1C22094(list, spotName);
  }
  klass_high = -1;
LABEL_18:
  v25->klass = klass;
  sub_1C21DDC(v25, (int64_t)klass, v9, v10, v11, v12, v13, v14);
  return klass_high >= 0;
}