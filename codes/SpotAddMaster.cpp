void __fastcall SpotAddMaster___ctor(SpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438BEE4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
    byte_438BEE4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    217,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
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

  if ( (byte_438BEE2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
    byte_438BEE2 = 1;
  }
  PK = SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&overrideType);
  return (SpotAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                              PK,
                              (const MethodInfo_21FBCE4 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v10; // w23
  void *v11; // x25
  int32_t v12; // w24
  int klass_high; // w19
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v15; // x26
  __int64 v16; // x10
  int32_t monitor; // w19
  int32_t monitor_high; // w27
  int64_t klass_low; // x28
  bool IsOpen; // w0
  __int64 v21; // x10
  int v23; // [xsp+8h] [xbp-68h]
  int32_t v24; // [xsp+Ch] [xbp-64h]
  int32_t *v25; // [xsp+10h] [xbp-60h]

  if ( (byte_438BEE5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&SpotAddEntity_TypeInfo);
    byte_438BEE5 = 1;
  }
  *data = -1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    v11 = 0LL;
    v12 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v12,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = Item;
        v16 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == type
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v23 = klass_high;
          v24 = spotId;
          v25 = data;
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL);
          data = v25;
          klass_high = v23;
          spotId = v24;
          if ( IsOpen )
          {
            list = this->fields.list;
            if ( !list )
              break;
            klass_high = HIDWORD(v15[1].klass);
            list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                     (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                     v12,
                     (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
            if ( !list )
              break;
            v11 = list;
            v21 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v21
              || *(SpotAddEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) != SpotAddEntity_TypeInfo )
            {
              break;
            }
            *v25 = *((_DWORD *)list + 7);
          }
        }
      }
      if ( ++v12 >= v10 )
        return v11 != 0LL;
    }
LABEL_26:
    sub_B7769C(list, *(_QWORD *)&type);
  }
  v11 = 0LL;
  return v11 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotAddMaster__OverwriteNamePanelOffset(
        SpotAddMaster_o *this,
        int32_t spotId,
        int32_t *ofsX,
        int32_t *ofsY,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int v13; // w28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v15; // x25
  __int64 v16; // x10
  int monitor; // w8
  int32_t v18; // w26
  int32_t v19; // w28
  int64_t v20; // x27
  int32_t monitor_high; // w26
  int32_t v22; // w28
  int64_t klass_low; // x27
  int v24; // [xsp+4h] [xbp-6Ch]
  int32_t *v25; // [xsp+8h] [xbp-68h]
  int32_t *v26; // [xsp+10h] [xbp-60h]
  int klass_high; // [xsp+1Ch] [xbp-54h]

  if ( (byte_438BEE6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&SpotAddEntity_TypeInfo);
    byte_438BEE6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_29:
    sub_B7769C(list, *(_QWORD *)&spotId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = -1;
    klass_high = -1;
    do
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_29;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v12,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v15 = Item;
        v16 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId )
        {
          monitor = (int)Item[1].monitor;
          if ( monitor == 5 )
          {
            if ( SHIDWORD(Item[1].klass) >= klass_high )
            {
              v24 = v13;
              v25 = ofsX;
              v26 = ofsY;
              v22 = (int32_t)Item[2].monitor;
              monitor_high = HIDWORD(Item[2].monitor);
              klass_low = SLODWORD(Item[3].klass);
              if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CondType_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              }
              if ( CondType__IsOpen(v22, monitor_high, klass_low, 0, 0LL) )
              {
                ofsY = v26;
                klass_high = HIDWORD(v15[1].klass);
                *v26 = HIDWORD(v15[1].monitor);
              }
              else
              {
LABEL_25:
                ofsY = v26;
              }
              ofsX = v25;
              v13 = v24;
            }
          }
          else
          {
            if ( monitor != 4 || SHIDWORD(Item[1].klass) < v13 )
              goto LABEL_27;
            v24 = v13;
            v25 = ofsX;
            v26 = ofsY;
            v19 = (int32_t)Item[2].monitor;
            v18 = HIDWORD(Item[2].monitor);
            v20 = SLODWORD(Item[3].klass);
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            if ( !CondType__IsOpen(v19, v18, v20, 0, 0LL) )
              goto LABEL_25;
            ofsX = v25;
            ofsY = v26;
            v13 = HIDWORD(v15[1].klass);
            *v25 = HIDWORD(v15[1].monitor);
          }
        }
      }
LABEL_27:
      ++v12;
    }
    while ( v12 < v11 );
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

  if ( (byte_438BEE3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
    byte_438BEE3 = 1;
  }
  PK = SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
}


bool __fastcall SpotAddMaster__TryGetOverwriteName(
        SpotAddMaster_o *this,
        System_String_o **spotName,
        int32_t spotId,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v5; // x28
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **klass; // x22
  int32_t v16; // w23
  int32_t v17; // w24
  int klass_high; // w19
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v20; // x25
  __int64 v21; // x10
  int32_t monitor_high; // w1
  int32_t monitor; // w28
  int64_t klass_low; // x2
  bool IsOpen; // w0
  int64_t condValue; // [xsp+8h] [xbp-68h]
  int32_t targetId; // [xsp+14h] [xbp-5Ch]
  BattleServantConfConponent_o *v29; // [xsp+18h] [xbp-58h]

  v5 = (BattleServantConfConponent_o *)spotName;
  if ( (byte_438BEE7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&SpotAddEntity_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438BEE7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  klass = (System_Int32_array **)StringLiteral_1/*""*/;
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v17,
               (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = Item;
        v21 = *(&SpotAddEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (SpotAddEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == SpotAddEntity_TypeInfo
          && LODWORD(Item[1].klass) == spotId
          && LODWORD(Item[1].monitor) == 6
          && SHIDWORD(Item[1].klass) >= klass_high )
        {
          v29 = v5;
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
          v5 = v29;
          if ( IsOpen )
          {
            klass_high = HIDWORD(v20[1].klass);
            klass = (System_Int32_array **)v20[2].klass;
          }
        }
      }
      if ( ++v17 >= v16 )
        goto LABEL_21;
    }
LABEL_22:
    sub_B7769C(list, spotName);
  }
  klass_high = -1;
LABEL_21:
  v5->klass = (BattleServantConfConponent_c *)klass;
  sub_B77560(v5, klass, v9, v10, v11, v12, v13, v14);
  return klass_high >= 0;
}