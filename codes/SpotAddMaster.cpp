void __fastcall SpotAddMaster___ctor(SpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188B9F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__, method);
    byte_4188B9F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    216,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
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

  if ( (byte_4188B9D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__, *(_QWORD *)&spotId);
    byte_4188B9D = 1;
  }
  PK = SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&overrideType);
  return (SpotAddEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                              PK,
                              (const MethodInfo_24E4520 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  void *v14; // x25
  int32_t v15; // w24
  int klass_high; // w19
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v18; // x26
  __int64 v19; // x10
  int32_t monitor; // w19
  int32_t monitor_high; // w27
  int64_t klass_low; // x28
  bool IsOpen; // w0
  __int64 v24; // x10
  int v26; // [xsp+8h] [xbp-68h]
  int32_t v27; // [xsp+Ch] [xbp-64h]
  int32_t *v28; // [xsp+10h] [xbp-60h]

  if ( (byte_4188BA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B2C35C(&CondType_TypeInfo, v9);
    sub_B2C35C(&SpotAddEntity_TypeInfo, v10);
    byte_4188BA0 = 1;
  }
  *data = -1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0LL;
    v15 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v15,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        v19 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == type
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v26 = klass_high;
          v27 = spotId;
          v28 = data;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL);
          data = v28;
          klass_high = v26;
          spotId = v27;
          if ( IsOpen )
          {
            list = this->fields.list;
            if ( !list )
              break;
            klass_high = HIDWORD(v18[1].klass);
            list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     v15,
                     (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( !list )
              break;
            v14 = list;
            v24 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v24
              || *(SpotAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v24 - 8) != SpotAddEntity_TypeInfo )
            {
              break;
            }
            *v28 = *((_DWORD *)list + 7);
          }
        }
      }
      if ( ++v15 >= v13 )
        return v14 != 0LL;
    }
LABEL_26:
    sub_B2C434(list, *(_QWORD *)&type);
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v18; // x25
  __int64 v19; // x10
  int monitor; // w8
  int32_t v21; // w26
  int32_t v22; // w28
  int64_t v23; // x27
  int32_t monitor_high; // w26
  int32_t v25; // w28
  int64_t klass_low; // x27
  int v27; // [xsp+4h] [xbp-6Ch]
  int32_t *v28; // [xsp+8h] [xbp-68h]
  int32_t *v29; // [xsp+10h] [xbp-60h]
  int klass_high; // [xsp+1Ch] [xbp-54h]

  if ( (byte_4188BA1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&spotId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&CondType_TypeInfo, v10);
    sub_B2C35C(&SpotAddEntity_TypeInfo, v11);
    byte_4188BA1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_29:
    sub_B2C434(list, *(_QWORD *)&spotId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    v16 = -1;
    klass_high = -1;
    do
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_29;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v15,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = Item;
        v19 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v19
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId )
        {
          monitor = (int)Item[1].monitor;
          if ( monitor == 5 )
          {
            if ( SHIDWORD(Item[1].klass) >= klass_high )
            {
              v27 = v16;
              v28 = ofsX;
              v29 = ofsY;
              v25 = (int32_t)Item[2].monitor;
              monitor_high = HIDWORD(Item[2].monitor);
              klass_low = SLODWORD(Item[3].klass);
              if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              if ( CondType__IsOpen(v25, monitor_high, klass_low, 0, 0LL) )
              {
                ofsY = v29;
                klass_high = HIDWORD(v18[1].klass);
                *v29 = HIDWORD(v18[1].monitor);
              }
              else
              {
LABEL_25:
                ofsY = v29;
              }
              ofsX = v28;
              v16 = v27;
            }
          }
          else
          {
            if ( monitor != 4 || SHIDWORD(Item[1].klass) < v16 )
              goto LABEL_27;
            v27 = v16;
            v28 = ofsX;
            v29 = ofsY;
            v22 = (int32_t)Item[2].monitor;
            v21 = HIDWORD(Item[2].monitor);
            v23 = SLODWORD(Item[3].klass);
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( !CondType__IsOpen(v22, v21, v23, 0, 0LL) )
              goto LABEL_25;
            ofsX = v28;
            ofsY = v29;
            v16 = HIDWORD(v18[1].klass);
            *v28 = HIDWORD(v18[1].monitor);
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

  if ( (byte_4188B9E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__, entity);
    byte_4188B9E = 1;
  }
  PK = SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
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
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v24; // x25
  __int64 v25; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w28
  int64_t klass_low; // x2
  bool IsOpen; // w0
  int64_t condValue; // [xsp+8h] [xbp-68h]
  int32_t targetId; // [xsp+14h] [xbp-5Ch]
  BattleServantConfConponent_o *v33; // [xsp+18h] [xbp-58h]

  v5 = (BattleServantConfConponent_o *)spotName;
  if ( (byte_4188BA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, spotName);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&CondType_TypeInfo, v8);
    sub_B2C35C(&SpotAddEntity_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4188BA2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  klass = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( Count >= 1 )
  {
    v20 = Count;
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
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = Item;
        v25 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v25
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == 6
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v33 = v5;
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
          v5 = v33;
          if ( IsOpen )
          {
            klass_high = HIDWORD(v24[1].klass);
            klass = (System_Int32_array **)v24[2].klass;
          }
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_21;
    }
LABEL_22:
    sub_B2C434(list, spotName);
  }
  klass_high = -1;
LABEL_21:
  v5->klass = (BattleServantConfConponent_c *)klass;
  sub_B2C2F8(v5, klass, v13, v14, v15, v16, v17, v18);
  return klass_high >= 0;
}