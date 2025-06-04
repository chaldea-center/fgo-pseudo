void __fastcall SpotAddMaster___ctor(SpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B02BBF & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__, method);
    byte_4B02BBF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    224,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
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

  if ( (byte_4B02BBD & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__, *(_QWORD *)&spotId);
    byte_4B02BBD = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&overrideType);
  return (SpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_32B3B28 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w23
  int32_t v14; // w24
  int klass_high; // w21
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x26
  int32_t monitor_high; // w27
  int32_t monitor; // w29
  int64_t klass_low; // x28
  int32_t *v22; // [xsp+0h] [xbp-70h]
  void *v23; // [xsp+8h] [xbp-68h]

  if ( (byte_4B02BC0 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__, *(_QWORD *)&type);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__, v9);
    sub_1BC3008(&CondType_TypeInfo, v10);
    byte_4B02BC0 = 1;
  }
  *data = -1;
  list = this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v22 = data;
    v23 = 0LL;
    v13 = Count;
    v14 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v14,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
      if ( Item )
      {
        v17 = Item;
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
            klass_high = HIDWORD(v17[1].klass);
            list = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)list,
                     v14,
                     (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
            if ( !list )
              break;
            v23 = list;
            *v22 = *((_DWORD *)list + 7);
          }
        }
      }
      if ( v13 == ++v14 )
        return v23 != 0LL;
    }
LABEL_21:
    sub_1BC3264(list, *(_QWORD *)&type);
  }
  v23 = 0LL;
  return v23 != 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SpotAddMaster__OverwriteNamePanelOffset(
        SpotAddMaster_o *this,
        int32_t spotId,
        int32_t *ofsX,
        int32_t *ofsY,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  int v13; // w20
  int klass_high; // w19
  Il2CppObject *Item; // x0
  Il2CppObject *v16; // x25
  int monitor; // w8
  int32_t v18; // w26
  int32_t v19; // w28
  int64_t v20; // x27
  int32_t v21; // w8
  int32_t *v22; // x9
  int32_t monitor_high; // w26
  int32_t v24; // w28
  int64_t klass_low; // x27

  if ( (byte_4B02BC1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__, *(_QWORD *)&spotId);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__, v7);
    sub_1BC3008(&CondType_TypeInfo, v8);
    byte_4B02BC1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_1BC3264(list, *(_QWORD *)&spotId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = -1;
    klass_high = -1;
    do
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_24;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
      if ( Item )
      {
        v16 = Item;
        if ( LODWORD(Item[1].klass) == spotId )
        {
          monitor = (int)Item[1].monitor;
          if ( monitor == 5 )
          {
            if ( SHIDWORD(Item[1].klass) < klass_high )
              goto LABEL_22;
            v24 = (int32_t)Item[2].monitor;
            monitor_high = HIDWORD(Item[2].monitor);
            klass_low = SLODWORD(Item[3].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( !CondType__IsOpen(v24, monitor_high, klass_low, 0, 0LL, 0LL) )
              goto LABEL_22;
            v21 = HIDWORD(v16[1].monitor);
            klass_high = HIDWORD(v16[1].klass);
            v22 = ofsY;
          }
          else
          {
            if ( monitor != 4 || SHIDWORD(Item[1].klass) < v13 )
              goto LABEL_22;
            v19 = (int32_t)Item[2].monitor;
            v18 = HIDWORD(Item[2].monitor);
            v20 = SLODWORD(Item[3].klass);
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            if ( !CondType__IsOpen(v19, v18, v20, 0, 0LL, 0LL) )
              goto LABEL_22;
            v21 = HIDWORD(v16[1].monitor);
            v13 = HIDWORD(v16[1].klass);
            v22 = ofsX;
          }
          *v22 = v21;
        }
      }
LABEL_22:
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

  if ( (byte_4B02BBE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__, entity);
    byte_4B02BBE = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
}


bool __fastcall SpotAddMaster__TryGetOverwriteName(
        SpotAddMaster_o *this,
        System_String_o **spotName,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_c *klass; // x22
  int32_t v15; // w23
  int32_t v16; // w24
  int klass_high; // w29
  Il2CppObject *Item; // x0
  Il2CppObject *v19; // x25
  int32_t monitor_high; // w26
  int32_t monitor; // w28
  int64_t klass_low; // x27
  CGThumbnailListItem_o *v24; // [xsp+8h] [xbp-68h]

  if ( (byte_4B02BC2 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__, spotName);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__, v7);
    sub_1BC3008(&CondType_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_1/*""*/, v9);
    byte_4B02BC2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  v24 = (CGThumbnailListItem_o *)spotName;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
  klass = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    klass_high = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v16,
               (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
      if ( Item )
      {
        v19 = Item;
        if ( LODWORD(Item[1].klass) == spotId && LODWORD(Item[1].monitor) == 6 && SHIDWORD(Item[1].klass) >= klass_high )
        {
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          klass_low = SLODWORD(Item[3].klass);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
          {
            klass_high = HIDWORD(v19[1].klass);
            klass = (CGThumbnailListItem_c *)v19[2].klass;
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_18;
    }
LABEL_19:
    sub_1BC3264(list, spotName);
  }
  klass_high = -1;
LABEL_18:
  v24->klass = klass;
  sub_1BC2FAC(v24, (int32_t)klass, v12, v13);
  return klass_high >= 0;
}