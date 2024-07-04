void __fastcall SpotAddMaster___ctor(SpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E312F & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__, method);
    byte_48E312F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    217,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
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

  if ( (byte_48E312D & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__, *(_QWORD *)&spotId);
    byte_48E312D = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&overrideType);
  return (SpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
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
  __int64 v10; // x1
  __int64 v11; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v14; // w23
  void *v15; // x25
  int32_t v16; // w24
  Il2CppObject *Item; // x0
  Il2CppObject *v18; // x26
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w27
  int32_t monitor; // w29
  int64_t klass_low; // x28
  bool IsOpen; // w0
  __int64 v24; // x10
  int32_t v26; // [xsp+Ch] [xbp-74h]
  int32_t *v27; // [xsp+10h] [xbp-70h]
  int klass_high; // [xsp+1Ch] [xbp-64h]

  v7 = type;
  if ( (byte_48E3130 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B00CCC(&CondType_TypeInfo, v10);
    sub_1B00CCC(&SpotAddEntity_TypeInfo, v11);
    byte_48E3130 = 1;
  }
  *data = -1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0LL;
    v16 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v16,
               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        methodPtr_low = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == v7
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v26 = v7;
          v27 = data;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL);
          data = v27;
          v7 = v26;
          if ( IsOpen )
          {
            list = this->fields.list;
            if ( !list )
              break;
            klass_high = HIDWORD(v18[1].klass);
            list = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     v16,
                     (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( !list )
              break;
            v15 = list;
            v24 = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)v24
              || *(SpotAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v24 - 8) != SpotAddEntity_TypeInfo )
            {
              break;
            }
            *v27 = *((_DWORD *)list + 7);
          }
        }
      }
      if ( v14 == ++v16 )
        return v15 != 0LL;
    }
LABEL_25:
    sub_1B00F28(list, *(_QWORD *)&type);
  }
  v15 = 0LL;
  return v15 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotAddMaster__OverwriteNamePanelOffset(
        SpotAddMaster_o *this,
        int32_t spotId,
        int32_t *ofsX,
        int32_t *ofsY,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  int v16; // w20
  Il2CppObject *Item; // x0
  Il2CppObject *v18; // x25
  __int64 methodPtr_low; // x10
  int monitor; // w8
  int32_t *v21; // x20
  int32_t v22; // w26
  int32_t v23; // w28
  int64_t v24; // x27
  int v25; // w9
  int32_t *v26; // x20
  int32_t monitor_high; // w26
  int32_t v28; // w28
  int64_t klass_low; // x27
  int klass_high; // w9
  int32_t *v31; // [xsp+0h] [xbp-70h]
  int32_t *v32; // [xsp+0h] [xbp-70h]
  int v33; // [xsp+8h] [xbp-68h]
  int v34; // [xsp+Ch] [xbp-64h]

  if ( (byte_48E3131 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&spotId);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B00CCC(&CondType_TypeInfo, v10);
    sub_1B00CCC(&SpotAddEntity_TypeInfo, v11);
    byte_48E3131 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_29:
    sub_1B00F28(list, *(_QWORD *)&spotId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    v16 = -1;
    v34 = -1;
    do
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_29;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v15,
               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        methodPtr_low = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId )
        {
          monitor = (int)Item[1].monitor;
          if ( monitor == 5 )
          {
            if ( SHIDWORD(Item[1].klass) >= v34 )
            {
              v33 = v16;
              v32 = ofsX;
              v26 = ofsY;
              v28 = (int32_t)Item[2].monitor;
              monitor_high = HIDWORD(Item[2].monitor);
              klass_low = SLODWORD(Item[3].klass);
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              if ( CondType__IsOpen(v28, monitor_high, klass_low, 0, 0LL) )
              {
                klass_high = HIDWORD(v18[1].klass);
                ofsY = v26;
                *v26 = HIDWORD(v18[1].monitor);
                v34 = klass_high;
              }
              else
              {
                ofsY = v26;
              }
              ofsX = v32;
              goto LABEL_26;
            }
          }
          else
          {
            if ( monitor != 4 || SHIDWORD(Item[1].klass) < v16 )
              goto LABEL_27;
            v33 = v16;
            v21 = ofsX;
            v31 = ofsY;
            v23 = (int32_t)Item[2].monitor;
            v22 = HIDWORD(Item[2].monitor);
            v24 = SLODWORD(Item[3].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( !CondType__IsOpen(v23, v22, v24, 0, 0LL) )
            {
              ofsY = v31;
              ofsX = v21;
LABEL_26:
              v16 = v33;
              goto LABEL_27;
            }
            ofsX = v21;
            v25 = HIDWORD(v18[1].klass);
            *v21 = HIDWORD(v18[1].monitor);
            ofsY = v31;
            v16 = v25;
          }
        }
      }
LABEL_27:
      ++v15;
    }
    while ( v14 != v15 );
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

  if ( (byte_48E312E & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__, entity);
    byte_48E312E = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
}


bool __fastcall SpotAddMaster__TryGetOverwriteName(
        SpotAddMaster_o *this,
        System_String_o **spotName,
        int32_t spotId,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *v5; // x27
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_c *klass; // x22
  int32_t v16; // w23
  int32_t v17; // w24
  int klass_high; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x25
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w28
  int64_t klass_low; // x27
  bool IsOpen; // w0
  int32_t targetId; // [xsp+4h] [xbp-6Ch]
  ServantStatusBattleListViewItem_o *v28; // [xsp+8h] [xbp-68h]

  v5 = (ServantStatusBattleListViewItem_o *)spotName;
  if ( (byte_48E3132 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, spotName);
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B00CCC(&CondType_TypeInfo, v8);
    sub_1B00CCC(&SpotAddEntity_TypeInfo, v9);
    sub_1B00CCC(&StringLiteral_1/*""*/, v10);
    byte_48E3132 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_2F836B0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  klass = (ServantStatusBattleListViewItem_c *)StringLiteral_1/*""*/;
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
               (const MethodInfo_2F83740 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = Item;
        methodPtr_low = LOBYTE(SpotAddEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == 6
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v28 = v5;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            monitor_high = targetId;
          }
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL);
          v5 = v28;
          if ( IsOpen )
          {
            klass_high = HIDWORD(v20[1].klass);
            klass = (ServantStatusBattleListViewItem_c *)v20[2].klass;
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_20;
    }
LABEL_21:
    sub_1B00F28(list, spotName);
  }
  klass_high = -1;
LABEL_20:
  v5->klass = klass;
  sub_1B00C70(v5, (int32_t)klass, v13, v14);
  return klass_high >= 0;
}