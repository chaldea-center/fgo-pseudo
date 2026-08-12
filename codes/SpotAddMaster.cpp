void SpotAddMaster___ctor(SpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59714BE & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
    byte_59714BE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    226,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SpotAddEntity_o *SpotAddMaster__GetEntity(
        SpotAddMaster_o *this,
        int32_t spotId,
        int32_t priority,
        int32_t overrideType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59714BC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
    byte_59714BC = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&overrideType);
  return (SpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_3F157EC *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__GetEntity__);
}


int32_t SpotAddMaster__GetPrioredID(
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
bool SpotAddMaster__HasPrioredData(
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
  int64_t klass_low; // x29
  int32_t monitor; // w27
  int32_t monitor_high; // w28
  int32_t *v20; // [xsp+0h] [xbp-70h]
  void *v21; // [xsp+8h] [xbp-68h]

  if ( (byte_59714BF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
    sub_2213A60(&CondType_TypeInfo);
    byte_59714BF = 1;
  }
  list = this->fields.list;
  *data = -1;
  if ( !list )
LABEL_20:
    sub_2213CDC(list, *(_QWORD *)&type);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
  if ( Count < 1 )
    return 0;
  v20 = data;
  v21 = 0;
  v11 = Count;
  v12 = 0;
  klass_high = -1;
  do
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v12,
             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
    if ( Item )
    {
      v15 = Item;
      if ( LODWORD(Item[1].klass) == spotId && LODWORD(Item[1].monitor) == type && SHIDWORD(Item[1].klass) >= klass_high )
      {
        klass_low = SLODWORD(Item[3].klass);
        monitor = (int32_t)Item[2].monitor;
        monitor_high = HIDWORD(Item[2].monitor);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&type);
        if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
        {
          list = this->fields.list;
          if ( !list )
            goto LABEL_20;
          klass_high = HIDWORD(v15[1].klass);
          list = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   v12,
                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
          if ( !list )
            goto LABEL_20;
          v21 = list;
          *v20 = *((_DWORD *)list + 7);
        }
      }
    }
    ++v12;
  }
  while ( v11 != v12 );
  return v21 != 0;
}


// local variable allocation has failed, the output may be wrong!
void SpotAddMaster__OverwriteNamePanelOffset(
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
  int64_t v16; // x28
  int32_t v17; // w26
  int32_t v18; // w27
  int32_t *v19; // x8
  int64_t klass_low; // x28
  int32_t v21; // w26
  int32_t monitor_high; // w27

  if ( (byte_59714C0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
    sub_2213A60(&CondType_TypeInfo);
    byte_59714C0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_2213CDC(list, *(_QWORD *)&spotId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
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
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
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
            klass_low = SLODWORD(Item[3].klass);
            v21 = (int32_t)Item[2].monitor;
            monitor_high = HIDWORD(Item[2].monitor);
            if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&spotId);
            if ( !CondType__IsOpen(v21, monitor_high, klass_low, 0, 0, 0) )
              goto LABEL_22;
            klass_high = HIDWORD(v14[1].klass);
            v19 = ofsY;
          }
          else
          {
            if ( monitor != 4 || SHIDWORD(Item[1].klass) < v11 )
              goto LABEL_22;
            v16 = SLODWORD(Item[3].klass);
            v17 = (int32_t)Item[2].monitor;
            v18 = HIDWORD(Item[2].monitor);
            if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&spotId);
            if ( !CondType__IsOpen(v17, v18, v16, 0, 0, 0) )
              goto LABEL_22;
            v11 = HIDWORD(v14[1].klass);
            v19 = ofsX;
          }
          *v19 = HIDWORD(v14[1].monitor);
        }
      }
LABEL_22:
      ++v10;
    }
    while ( v9 != v10 );
  }
}


// local variable allocation has failed, the output may be wrong!
bool SpotAddMaster__TryGetEntity(
        SpotAddMaster_o *this,
        SpotAddEntity_o **entity,
        int32_t spotId,
        int32_t priority,
        int32_t overrideType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59714BD & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
    byte_59714BD = 1;
  }
  PK = (Il2CppObject *)SpotAddEntity__CreatePK(spotId, priority, overrideType, *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_SpotAddMaster__SpotAddEntity__string__TryGetEntity__);
}


bool SpotAddMaster__TryGetOverwriteName(
        SpotAddMaster_o *this,
        System_String_o **spotName,
        int32_t spotId,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v5; // x24
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  MissionNaviTransitionBoardItem_c *klass; // x22
  int32_t v16; // w23
  int32_t v17; // w24
  int klass_high; // w19
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x25
  int64_t klass_low; // x28
  int32_t monitor; // w26
  int32_t monitor_high; // w27
  bool v24; // w20
  MissionNaviTransitionBoardItem_o *v26; // [xsp+8h] [xbp-68h]

  v5 = (MissionNaviTransitionBoardItem_o *)spotName;
  if ( (byte_59714C1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59714C1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_2213CDC(list, spotName);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Count__);
  klass = (MissionNaviTransitionBoardItem_c *)StringLiteral_1/*""*/;
  if ( Count < 1 )
  {
    v24 = 0;
  }
  else
  {
    v26 = v5;
    v16 = Count;
    v17 = 0;
    klass_high = -1;
    do
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_19;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v17,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_SpotAddEntity__get_Item__);
      if ( Item )
      {
        v20 = Item;
        if ( LODWORD(Item[1].klass) == spotId && LODWORD(Item[1].monitor) == 6 && SHIDWORD(Item[1].klass) >= klass_high )
        {
          klass_low = SLODWORD(Item[3].klass);
          monitor = (int32_t)Item[2].monitor;
          monitor_high = HIDWORD(Item[2].monitor);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, spotName);
          if ( CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
          {
            klass_high = HIDWORD(v20[1].klass);
            klass = (MissionNaviTransitionBoardItem_c *)v20[2].klass;
          }
        }
      }
      ++v17;
    }
    while ( v16 != v17 );
    v5 = v26;
    v24 = klass_high >= 0;
  }
  v5->klass = klass;
  sub_2213A04(v5, (int32_t)klass, v9, v10, v11, v12, v13, v14);
  return v24;
}