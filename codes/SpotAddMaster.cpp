void __fastcall SpotAddMaster___ctor(SpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FAD9C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__, method);
    byte_40FAD9C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    216,
    (const MethodInfo_266F73C *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
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

  if ( (byte_40FAD9A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__, *(_QWORD *)&spotId);
    byte_40FAD9A = 1;
  }
  PK = SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&overrideType);
  return (SpotAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                              PK,
                              (const MethodInfo_266F7D8 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v14; // x25
  int32_t v15; // w24
  int klass_high; // w19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v19; // x26
  __int64 v20; // x10
  int32_t monitor; // w19
  int32_t monitor_high; // w27
  int64_t klass_low; // x28
  bool IsOpen; // w0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v26; // x0
  __int64 v27; // x10
  int v29; // [xsp+8h] [xbp-68h]
  int32_t v30; // [xsp+Ch] [xbp-64h]
  int32_t *v31; // [xsp+10h] [xbp-60h]

  if ( (byte_40FAD9D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&CondType_TypeInfo, v9);
    sub_B16FFC(&SpotAddEntity_TypeInfo, v10);
    byte_40FAD9D = 1;
  }
  *data = -1;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0LL;
    v15 = 0;
    klass_high = -1;
    while ( 1 )
    {
      v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v17 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v17,
               v15,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = Item;
        v20 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == type
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v29 = klass_high;
          v30 = spotId;
          v31 = data;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL);
          data = v31;
          klass_high = v29;
          spotId = v30;
          if ( IsOpen )
          {
            v25 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
            if ( !v25 )
              break;
            klass_high = HIDWORD(v19[1].klass);
            v26 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                    v25,
                    v15,
                    (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( !v26 )
              break;
            v14 = v26;
            v27 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
              || (SpotAddEntity_c *)v26->klass->_2.typeHierarchy[v27 - 1] != SpotAddEntity_TypeInfo )
            {
              break;
            }
            *v31 = HIDWORD(v26[1].monitor);
          }
        }
      }
      if ( ++v15 >= v13 )
        return v14 != 0LL;
    }
LABEL_26:
    sub_B170D4();
  }
  v14 = 0LL;
  return v14 != 0LL;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  int v16; // w28
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v19; // x25
  __int64 v20; // x10
  int monitor; // w8
  int32_t v22; // w26
  int32_t v23; // w28
  int64_t v24; // x27
  int32_t monitor_high; // w26
  int32_t v26; // w28
  int64_t klass_low; // x27
  int v28; // [xsp+4h] [xbp-6Ch]
  int32_t *v29; // [xsp+8h] [xbp-68h]
  int32_t *v30; // [xsp+10h] [xbp-60h]
  int klass_high; // [xsp+1Ch] [xbp-54h]

  if ( (byte_40FAD9E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&spotId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&CondType_TypeInfo, v10);
    sub_B16FFC(&SpotAddEntity_TypeInfo, v11);
    byte_40FAD9E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_29:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    v16 = -1;
    klass_high = -1;
    do
    {
      v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v17 )
        goto LABEL_29;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v17,
               v15,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v19 = Item;
        v20 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v20
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId )
        {
          monitor = (int)Item[1].monitor;
          if ( monitor == 5 )
          {
            if ( SHIDWORD(Item[1].klass) >= klass_high )
            {
              v28 = v16;
              v29 = ofsX;
              v30 = ofsY;
              v26 = (int32_t)Item[2].monitor;
              monitor_high = HIDWORD(Item[2].monitor);
              klass_low = SLODWORD(Item[3].klass);
              if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              if ( CondType__IsOpen(v26, monitor_high, klass_low, 0, 0LL) )
              {
                ofsY = v30;
                klass_high = HIDWORD(v19[1].klass);
                *v30 = HIDWORD(v19[1].monitor);
              }
              else
              {
LABEL_25:
                ofsY = v30;
              }
              ofsX = v29;
              v16 = v28;
            }
          }
          else
          {
            if ( monitor != 4 || SHIDWORD(Item[1].klass) < v16 )
              goto LABEL_27;
            v28 = v16;
            v29 = ofsX;
            v30 = ofsY;
            v23 = (int32_t)Item[2].monitor;
            v22 = HIDWORD(Item[2].monitor);
            v24 = SLODWORD(Item[3].klass);
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( !CondType__IsOpen(v23, v22, v24, 0, 0LL) )
              goto LABEL_25;
            ofsX = v29;
            ofsY = v30;
            v16 = HIDWORD(v19[1].klass);
            *v29 = HIDWORD(v19[1].monitor);
          }
        }
      }
LABEL_27:
      ++v15;
    }
    while ( v15 < v14 );
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

  if ( (byte_40FAD9B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__, entity);
    byte_40FAD9B = 1;
  }
  PK = SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
}


bool __fastcall SpotAddMaster__TryGetOverwriteName(
        SpotAddMaster_o *this,
        System_String_o **spotName,
        int32_t spotId,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v5; // x28
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **klass; // x22
  int32_t v20; // w23
  int32_t v21; // w24
  int klass_high; // w19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x25
  __int64 v26; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w28
  int64_t klass_low; // x2
  bool IsOpen; // w0
  int64_t condValue; // [xsp+8h] [xbp-68h]
  int32_t targetId; // [xsp+14h] [xbp-5Ch]
  BattleServantConfConponent_o *v34; // [xsp+18h] [xbp-58h]

  v5 = (BattleServantConfConponent_o *)spotName;
  if ( (byte_40FAD9F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, spotName);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&CondType_TypeInfo, v8);
    sub_B16FFC(&SpotAddEntity_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40FAD9F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  klass = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    klass_high = -1;
    while ( 1 )
    {
      v23 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v23 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v23,
               v21,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v25 = Item;
        v26 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == 6
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v34 = v5;
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
          v5 = v34;
          if ( IsOpen )
          {
            klass_high = HIDWORD(v25[1].klass);
            klass = (System_Int32_array **)v25[2].klass;
          }
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_21;
    }
LABEL_22:
    sub_B170D4();
  }
  klass_high = -1;
LABEL_21:
  v5->klass = (BattleServantConfConponent_c *)klass;
  sub_B16F98(v5, klass, v13, v14, v15, v16, v17, v18);
  return klass_high >= 0;
}