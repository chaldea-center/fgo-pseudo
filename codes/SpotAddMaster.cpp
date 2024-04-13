void __fastcall SpotAddMaster___ctor(SpotAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9231 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9231 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    217,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotAddEntity_o *__fastcall SpotAddMaster__GetEntity(
        SpotAddMaster_o *this,
        int32_t spotId,
        int32_t priority,
        int32_t overrideType,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E922F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__,
      spotId,
      priority,
      *(_QWORD *)&overrideType);
    byte_42E922F = 1;
  }
  PK = SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&overrideType);
  return (SpotAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                              PK,
                              (const MethodInfo_23FB260 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
}


int32_t __fastcall SpotAddMaster__GetPrioredID(
        SpotAddMaster_o *this,
        int32_t type,
        int32_t spotId,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t data; // [xsp+Ch] [xbp-4h] BYREF

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
  int32_t *v5; // x27
  int32_t v6; // w28
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v19; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x25
  int32_t v21; // w24
  int klass_high; // w19
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v24; // x26
  __int64 v25; // x10
  int32_t monitor; // w19
  int32_t monitor_high; // w27
  int64_t klass_low; // x28
  bool IsOpen; // w0
  __int64 v30; // x10
  int v32; // [xsp+8h] [xbp-68h]
  int32_t v33; // [xsp+Ch] [xbp-64h]
  int32_t *v34; // [xsp+10h] [xbp-60h]

  v5 = data;
  v6 = spotId;
  if ( (byte_42E9232 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, type, spotId, data);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9, v10);
    sub_B5D5C4(&CondType_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&SpotAddEntity_TypeInfo, v14, v15, v16);
    byte_42E9232 = 1;
  }
  *v5 = -1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0LL;
    v21 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v21,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = Item;
        v25 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == v6
          && LODWORD(Item[1].monitor) == type
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v32 = klass_high;
          v33 = v6;
          v34 = v5;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL);
          v5 = v34;
          klass_high = v32;
          v6 = v33;
          if ( IsOpen )
          {
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
            if ( !list )
              break;
            klass_high = HIDWORD(v24[1].klass);
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                                 list,
                                                                                                 v21,
                                                                                                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( !list )
              break;
            v20 = list;
            v30 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v30
              || (SpotAddEntity_c *)list->klass->_2.typeHierarchy[v30 - 1] != SpotAddEntity_TypeInfo )
            {
              break;
            }
            *v34 = HIDWORD(list->fields._syncRoot);
          }
        }
      }
      if ( ++v21 >= v19 )
        return v20 != 0LL;
    }
LABEL_26:
    sub_B5D69C(list, *(_QWORD *)&type);
  }
  v20 = 0LL;
  return v20 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotAddMaster__OverwriteNamePanelOffset(
        SpotAddMaster_o *this,
        int32_t spotId,
        int32_t *ofsX,
        int32_t *ofsY,
        const MethodInfo *method)
{
  int32_t *v5; // x26
  int32_t *v6; // x27
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  int v22; // w28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v24; // x25
  __int64 v25; // x10
  int monitor; // w8
  int32_t v27; // w26
  int32_t v28; // w28
  int64_t v29; // x27
  int32_t monitor_high; // w26
  int32_t v31; // w28
  int64_t klass_low; // x27
  int v33; // [xsp+4h] [xbp-6Ch]
  int32_t *v34; // [xsp+8h] [xbp-68h]
  int32_t *v35; // [xsp+10h] [xbp-60h]
  int klass_high; // [xsp+1Ch] [xbp-54h]

  v5 = ofsY;
  v6 = ofsX;
  if ( (byte_42E9233 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      spotId,
      (_DWORD)ofsX,
      ofsY);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&CondType_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&SpotAddEntity_TypeInfo, v15, v16, v17);
    byte_42E9233 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_29:
    sub_B5D69C(list, *(_QWORD *)&spotId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    v22 = -1;
    klass_high = -1;
    do
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_29;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v21,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = Item;
        v25 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId )
        {
          monitor = (int)Item[1].monitor;
          if ( monitor == 5 )
          {
            if ( SHIDWORD(Item[1].klass) >= klass_high )
            {
              v33 = v22;
              v34 = v6;
              v35 = v5;
              v31 = (int32_t)Item[2].monitor;
              monitor_high = HIDWORD(Item[2].monitor);
              klass_low = SLODWORD(Item[3].klass);
              if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              if ( CondType__IsOpen(v31, monitor_high, klass_low, 0, 0LL) )
              {
                v5 = v35;
                klass_high = HIDWORD(v24[1].klass);
                *v35 = HIDWORD(v24[1].monitor);
              }
              else
              {
LABEL_25:
                v5 = v35;
              }
              v6 = v34;
              v22 = v33;
            }
          }
          else
          {
            if ( monitor != 4 || SHIDWORD(Item[1].klass) < v22 )
              goto LABEL_27;
            v33 = v22;
            v34 = v6;
            v35 = v5;
            v28 = (int32_t)Item[2].monitor;
            v27 = HIDWORD(Item[2].monitor);
            v29 = SLODWORD(Item[3].klass);
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( !CondType__IsOpen(v28, v27, v29, 0, 0LL) )
              goto LABEL_25;
            v6 = v34;
            v5 = v35;
            v22 = HIDWORD(v24[1].klass);
            *v34 = HIDWORD(v24[1].monitor);
          }
        }
      }
LABEL_27:
      ++v21;
    }
    while ( v21 < v20 );
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
  System_String_o *PK; // x2

  if ( (byte_42E9230 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      spotId,
      *(_QWORD *)&priority);
    byte_42E9230 = 1;
  }
  PK = SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
}


bool __fastcall SpotAddMaster__TryGetOverwriteName(
        SpotAddMaster_o *this,
        System_String_o **spotName,
        int32_t spotId,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v5; // x28
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **klass; // x22
  int32_t v28; // w23
  int32_t v29; // w24
  int klass_high; // w19
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v32; // x25
  __int64 v33; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w28
  int64_t klass_low; // x2
  bool IsOpen; // w0
  int64_t condValue; // [xsp+8h] [xbp-68h]
  int32_t targetId; // [xsp+14h] [xbp-5Ch]
  BattleServantConfConponent_o *v41; // [xsp+18h] [xbp-58h]

  v5 = (BattleServantConfConponent_o *)spotName;
  if ( (byte_42E9234 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)spotName,
      spotId,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&CondType_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&SpotAddEntity_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_1/*""*/, v16, v17, v18);
    byte_42E9234 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  klass = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( Count >= 1 )
  {
    v28 = Count;
    v29 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v29,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v32 = Item;
        v33 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v33
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v33 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == 6
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v41 = v5;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          {
            targetId = HIDWORD(Item[2].monitor);
            condValue = SLODWORD(Item[3].klass);
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            klass_low = condValue;
            monitor_high = targetId;
          }
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL);
          v5 = v41;
          if ( IsOpen )
          {
            klass_high = HIDWORD(v32[1].klass);
            klass = (System_Int32_array **)v32[2].klass;
          }
        }
      }
      if ( ++v29 >= v28 )
        goto LABEL_21;
    }
LABEL_22:
    sub_B5D69C(list, spotName);
  }
  klass_high = -1;
LABEL_21:
  v5->klass = (BattleServantConfConponent_c *)klass;
  sub_B5D560(v5, klass, v21, v22, v23, v24, v25, v26);
  return klass_high >= 0;
}