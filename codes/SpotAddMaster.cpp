void __fastcall SpotAddMaster___ctor(SpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BBE1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
    byte_4A5BBE1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    218,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
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

  if ( (byte_4A5BBDF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
    byte_4A5BBDF = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&overrideType);
  return (SpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_311DC8C *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  void *v12; // x25
  int32_t v13; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x26
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w27
  int32_t monitor; // w29
  int64_t klass_low; // x28
  bool IsOpen; // w0
  __int64 v21; // x10
  int32_t v23; // [xsp+Ch] [xbp-74h]
  int32_t *v24; // [xsp+10h] [xbp-70h]
  int klass_high; // [xsp+1Ch] [xbp-64h]

  v7 = type;
  if ( (byte_4A5BBE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&SpotAddEntity_TypeInfo);
    byte_4A5BBE2 = 1;
  }
  *data = -1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0LL;
    v13 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = Item;
        methodPtr_low = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == v7
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v23 = v7;
          v24 = data;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL);
          data = v24;
          v7 = v23;
          if ( IsOpen )
          {
            list = this->fields.list;
            if ( !list )
              break;
            klass_high = HIDWORD(v15[1].klass);
            list = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     v13,
                     (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( !list )
              break;
            v12 = list;
            v21 = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)v21
              || *(SpotAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) != SpotAddEntity_TypeInfo )
            {
              break;
            }
            *v24 = *((_DWORD *)list + 7);
          }
        }
      }
      if ( v11 == ++v13 )
        return v12 != 0LL;
    }
LABEL_25:
    sub_1B8880C(list, *(_QWORD *)&type);
  }
  v12 = 0LL;
  return v12 != 0LL;
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
  int32_t v11; // w23
  int32_t v12; // w24
  int v13; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x25
  __int64 methodPtr_low; // x10
  int monitor; // w8
  int32_t *v18; // x20
  int32_t v19; // w26
  int32_t v20; // w28
  int64_t v21; // x27
  int v22; // w9
  int32_t *v23; // x20
  int32_t monitor_high; // w26
  int32_t v25; // w28
  int64_t klass_low; // x27
  int klass_high; // w9
  int32_t *v28; // [xsp+0h] [xbp-70h]
  int32_t *v29; // [xsp+0h] [xbp-70h]
  int v30; // [xsp+8h] [xbp-68h]
  int v31; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A5BBE3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&SpotAddEntity_TypeInfo);
    byte_4A5BBE3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_29:
    sub_1B8880C(list, *(_QWORD *)&spotId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = -1;
    v31 = -1;
    do
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_29;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = Item;
        methodPtr_low = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId )
        {
          monitor = (int)Item[1].monitor;
          if ( monitor == 5 )
          {
            if ( SHIDWORD(Item[1].klass) >= v31 )
            {
              v30 = v13;
              v29 = ofsX;
              v23 = ofsY;
              v25 = (int32_t)Item[2].monitor;
              monitor_high = HIDWORD(Item[2].monitor);
              klass_low = SLODWORD(Item[3].klass);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsOpen(v25, monitor_high, klass_low, 0, 0LL, 0LL) )
              {
                klass_high = HIDWORD(v15[1].klass);
                ofsY = v23;
                *v23 = HIDWORD(v15[1].monitor);
                v31 = klass_high;
              }
              else
              {
                ofsY = v23;
              }
              ofsX = v29;
              goto LABEL_26;
            }
          }
          else
          {
            if ( monitor != 4 || SHIDWORD(Item[1].klass) < v13 )
              goto LABEL_27;
            v30 = v13;
            v18 = ofsX;
            v28 = ofsY;
            v20 = (int32_t)Item[2].monitor;
            v19 = HIDWORD(Item[2].monitor);
            v21 = SLODWORD(Item[3].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( !CondType__IsOpen(v20, v19, v21, 0, 0LL, 0LL) )
            {
              ofsY = v28;
              ofsX = v18;
LABEL_26:
              v13 = v30;
              goto LABEL_27;
            }
            ofsX = v18;
            v22 = HIDWORD(v15[1].klass);
            *v18 = HIDWORD(v15[1].monitor);
            ofsY = v28;
            v13 = v22;
          }
        }
      }
LABEL_27:
      ++v12;
    }
    while ( v11 != v12 );
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

  if ( (byte_4A5BBE0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
    byte_4A5BBE0 = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
}


bool __fastcall SpotAddMaster__TryGetOverwriteName(
        SpotAddMaster_o *this,
        System_String_o **spotName,
        int32_t spotId,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v5; // x27
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w2
  int32_t v10; // w3
  ServantStatusBattleListViewItem_c *klass; // x22
  int32_t v12; // w23
  int32_t v13; // w24
  int klass_high; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x25
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w28
  int64_t klass_low; // x27
  bool IsOpen; // w0
  int32_t targetId; // [xsp+4h] [xbp-6Ch]
  ServantStatusBattleListViewItem_o *v24; // [xsp+8h] [xbp-68h]

  v5 = (ServantStatusBattleListViewItem_o *)spotName;
  if ( (byte_4A5BBE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&SpotAddEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BBE4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v13,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = Item;
        methodPtr_low = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == 6
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v24 = v5;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor_high = targetId;
          }
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL);
          v5 = v24;
          if ( IsOpen )
          {
            klass_high = HIDWORD(v16[1].klass);
            klass = (ServantStatusBattleListViewItem_c *)v16[2].klass;
          }
        }
      }
      if ( v12 == ++v13 )
        goto LABEL_20;
    }
LABEL_21:
    sub_1B8880C(list, spotName);
  }
  klass_high = -1;
LABEL_20:
  v5->klass = klass;
  sub_1B88554(v5, (int32_t)klass, v9, v10);
  return klass_high >= 0;
}