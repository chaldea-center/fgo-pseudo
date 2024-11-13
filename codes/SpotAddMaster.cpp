void __fastcall SpotAddMaster___ctor(SpotAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__, method, v2);
    byte_4B16C93 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    218,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
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

  if ( (byte_4B16C91 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__,
      *(_QWORD *)&spotId,
      *(_QWORD *)&priority);
    byte_4B16C91 = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&overrideType);
  return (SpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_31B3198 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
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
  int32_t v7; // w28
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  void *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  void *v18; // x25
  int32_t v19; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v21; // x26
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w27
  int32_t monitor; // w29
  int64_t klass_low; // x28
  bool IsOpen; // w0
  __int64 v27; // x10
  int32_t v29; // [xsp+Ch] [xbp-74h]
  int32_t *v30; // [xsp+10h] [xbp-70h]
  int klass_high; // [xsp+1Ch] [xbp-64h]

  v7 = type;
  if ( (byte_4B16C94 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&type,
      *(_QWORD *)&spotId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&SpotAddEntity_TypeInfo, v13, v14);
    byte_4B16C94 = 1;
  }
  *data = -1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0LL;
    v19 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        methodPtr_low = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == v7
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v29 = v7;
          v30 = data;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&type);
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL);
          data = v30;
          v7 = v29;
          if ( IsOpen )
          {
            list = this->fields.list;
            if ( !list )
              break;
            klass_high = HIDWORD(v21[1].klass);
            list = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     v19,
                     (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( !list )
              break;
            v18 = list;
            v27 = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)v27
              || *(SpotAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v27 - 8) != SpotAddEntity_TypeInfo )
            {
              break;
            }
            *v30 = *((_DWORD *)list + 7);
          }
        }
      }
      if ( v17 == ++v19 )
        return v18 != 0LL;
    }
LABEL_25:
    sub_1BCAA3C(list, *(_QWORD *)&type);
  }
  v18 = 0LL;
  return v18 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotAddMaster__OverwriteNamePanelOffset(
        SpotAddMaster_o *this,
        int32_t spotId,
        int32_t *ofsX,
        int32_t *ofsY,
        const MethodInfo *method)
{
  int32_t *v6; // x27
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w23
  int32_t v18; // w24
  int v19; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v21; // x25
  __int64 methodPtr_low; // x10
  int monitor; // w8
  int32_t *v24; // x20
  int32_t v25; // w26
  int32_t v26; // w28
  int64_t v27; // x27
  int v28; // w9
  int32_t *v29; // x20
  int32_t monitor_high; // w26
  int32_t v31; // w28
  int64_t klass_low; // x27
  int klass_high; // w9
  int32_t *v34; // [xsp+0h] [xbp-70h]
  int32_t *v35; // [xsp+0h] [xbp-70h]
  int v36; // [xsp+8h] [xbp-68h]
  int v37; // [xsp+Ch] [xbp-64h]

  v6 = ofsX;
  if ( (byte_4B16C95 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&spotId, ofsX);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&SpotAddEntity_TypeInfo, v13, v14);
    byte_4B16C95 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_29:
    sub_1BCAA3C(list, *(_QWORD *)&spotId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    v19 = -1;
    v37 = -1;
    do
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_29;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v18,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        methodPtr_low = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId )
        {
          monitor = (int)Item[1].monitor;
          if ( monitor == 5 )
          {
            if ( SHIDWORD(Item[1].klass) >= v37 )
            {
              v36 = v19;
              v35 = v6;
              v29 = ofsY;
              v31 = (int32_t)Item[2].monitor;
              monitor_high = HIDWORD(Item[2].monitor);
              klass_low = SLODWORD(Item[3].klass);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&spotId);
              if ( CondType__IsOpen(v31, monitor_high, klass_low, 0, 0LL, 0LL) )
              {
                klass_high = HIDWORD(v21[1].klass);
                ofsY = v29;
                *v29 = HIDWORD(v21[1].monitor);
                v37 = klass_high;
              }
              else
              {
                ofsY = v29;
              }
              v6 = v35;
              goto LABEL_26;
            }
          }
          else
          {
            if ( monitor != 4 || SHIDWORD(Item[1].klass) < v19 )
              goto LABEL_27;
            v36 = v19;
            v24 = v6;
            v34 = ofsY;
            v26 = (int32_t)Item[2].monitor;
            v25 = HIDWORD(Item[2].monitor);
            v27 = SLODWORD(Item[3].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&spotId);
            if ( !CondType__IsOpen(v26, v25, v27, 0, 0LL, 0LL) )
            {
              ofsY = v34;
              v6 = v24;
LABEL_26:
              v19 = v36;
              goto LABEL_27;
            }
            v6 = v24;
            v28 = HIDWORD(v21[1].klass);
            *v24 = HIDWORD(v21[1].monitor);
            ofsY = v34;
            v19 = v28;
          }
        }
      }
LABEL_27:
      ++v18;
    }
    while ( v17 != v18 );
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

  if ( (byte_4B16C92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__, entity, *(_QWORD *)&spotId);
    byte_4B16C92 = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotAddMaster__TryGetOverwriteName(
        SpotAddMaster_o *this,
        System_String_o **spotName,
        int32_t spotId,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v5; // x27
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  PartyOrganizationUtility_c *klass; // x22
  int32_t v24; // w23
  int32_t v25; // w24
  int klass_high; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v28; // x25
  __int64 methodPtr_low; // x10
  __int64 monitor_high; // x1
  int32_t monitor; // w28
  int64_t klass_low; // x27
  bool IsOpen; // w0
  int32_t targetId; // [xsp+4h] [xbp-6Ch]
  PartyOrganizationUtility_o *v36; // [xsp+8h] [xbp-68h]

  v5 = (PartyOrganizationUtility_o *)spotName;
  if ( (byte_4B16C96 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      spotName,
      *(_QWORD *)&spotId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&CondType_TypeInfo, v9, v10);
    sub_1BCA7E0(&SpotAddEntity_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B16C96 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v25,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v28 = Item;
        methodPtr_low = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == 6
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v36 = v5;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, monitor_high);
            LODWORD(monitor_high) = targetId;
          }
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL);
          v5 = v36;
          if ( IsOpen )
          {
            klass_high = HIDWORD(v28[1].klass);
            klass = (PartyOrganizationUtility_c *)v28[2].klass;
          }
        }
      }
      if ( v24 == ++v25 )
        goto LABEL_20;
    }
LABEL_21:
    sub_1BCAA3C(list, spotName);
  }
  klass_high = -1;
LABEL_20:
  v5->klass = klass;
  sub_1BCA784(v5, (int64_t)klass, v17, v18, v19, v20, v21, v22);
  return klass_high >= 0;
}