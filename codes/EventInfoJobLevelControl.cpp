void EventInfoJobLevelControl___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5939989 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoJobLevelControl_TypeInfo);
    sub_21FFC50(&StringLiteral_22099/*"job_bg_{0:D2}"*/);
    byte_5939989 = 1;
  }
  v7 = StringLiteral_22099/*"job_bg_{0:D2}"*/;
  EventInfoJobLevelControl_TypeInfo->static_fields->BgImgKeyFormat = (struct System_String_o *)StringLiteral_22099/*"job_bg_{0:D2}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoJobLevelControl_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void EventInfoJobLevelControl___ctor(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  int v3; // w8
  System_Collections_Generic_List_EventInfoJobInfoComponent__c *v4; // x0
  UnityEngine_Vector3_c *v5; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v8; // x8
  float v9; // s1
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_Dictionary_int__object__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_List_object__o *v31; // x20
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_5939988 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobInfoComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoJobInfoComponent__TypeInfo);
    byte_5939988 = 1;
  }
  v3 = (unsigned __int8)byte_5931940;
  *(_QWORD *)&this->fields.pointLabelMaxWidth = 0x900000062LL;
  if ( !v3 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  v4 = System_Collections_Generic_List_EventInfoJobInfoComponent__TypeInfo;
  v5 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.efficacySumLabelOffset.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.efficacySumLabelOffset.fields.z = z;
  v8 = v5->static_fields;
  v9 = v8->zeroVector.fields.z;
  *(_QWORD *)&this->fields.pointLabelOffset.fields.x = *(_QWORD *)&v8->zeroVector.fields.x;
  this->fields.pointLabelOffset.fields.z = v9;
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v4);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoJobInfoComponent___ctor__);
  this->fields.jobInfoComponentList = (struct System_Collections_Generic_List_EventInfoJobInfoComponent__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.jobInfoComponentList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent___ctor__);
  this->fields.jobInfoComponentDictionary = (struct System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__o *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.jobInfoComponentDictionary,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v24,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData___ctor__);
  this->fields.jobLevelDataDictionary = (struct System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__o *)v24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.jobLevelDataDictionary,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData___ctor__);
  this->fields.jobLevelDataList = (struct System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *)v31;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.jobLevelDataList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoJobLevelControl__Awake(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *jobInfoTemplate; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  Il2CppObject *Master_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_5939976 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventJobMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventJobPointBonusMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939976 = 1;
  }
  EventInfoJobLevelControl__SetupJobInfoGrid(this, method);
  EventInfoJobLevelControl__CacheLabelBasePositions(this, v3);
  jobInfoTemplate = (UnityEngine_Object_o *)this->fields.jobInfoTemplate;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(jobInfoTemplate, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.jobInfoTemplate;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventJobMaster___);
  this->fields.eventJobMaster = (struct EventJobMaster_o *)Master_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventJobMaster,
    (int32_t)Master_object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventJobPointBonusMaster___);
  this->fields.eventJobPointBonusMaster = (struct EventJobPointBonusMaster_o *)v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventJobPointBonusMaster,
    (int32_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)v22;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userEventPointMaster,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void EventInfoJobLevelControl__CacheLabelBasePositions(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *efficacySumLabel; // x20
  bool v4; // w0
  __int64 v5; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *pointLabel; // x20
  bool v8; // w0

  if ( (byte_5939985 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939985 = 1;
  }
  efficacySumLabel = (UnityEngine_Object_o *)this->fields.efficacySumLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(efficacySumLabel, 0, 0);
  this->fields.hasEfficacySumLabelBaseLocalPosition = v4;
  if ( v4 )
  {
    transform = (UnityEngine_Component_o *)this->fields.efficacySumLabel;
    if ( !transform )
      goto LABEL_16;
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_16;
    this->fields.efficacySumLabelBaseLocalPosition = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)transform,
                                                       0);
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v8 = UnityEngine_Object__op_Inequality(pointLabel, 0, 0);
  this->fields.hasPointLabelBaseLocalPosition = v8;
  if ( v8 )
  {
    transform = (UnityEngine_Component_o *)this->fields.pointLabel;
    if ( transform )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0);
      if ( transform )
      {
        this->fields.pointLabelBaseLocalPosition = UnityEngine_Transform__get_localPosition(
                                                     (UnityEngine_Transform_o *)transform,
                                                     0);
        return;
      }
    }
LABEL_16:
    sub_21FFECC(transform, v5);
  }
}


void EventInfoJobLevelControl__CheckSerializeFieldSetting(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoJobLevelControl__ClearJobInfoList(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  EventInfoJobLevelControl_o **v2; // x19
  EventInfoJobLevelControl_o *v3; // x8
  int m_CancellationTokenSource; // w22
  int32_t i; // w20
  __int64 v6; // x1
  Il2CppObject *Item; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  int32_t v10; // w2
  int v11; // w9

  v2 = (EventInfoJobLevelControl_o **)this;
  if ( (byte_5939983 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobInfoComponent__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobInfoComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobInfoComponent__get_Item__);
    this = (EventInfoJobLevelControl_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939983 = 1;
  }
  v3 = v2[20];
  if ( !v3 )
    goto LABEL_21;
  m_CancellationTokenSource = (int)v3->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    for ( i = 0; i != m_CancellationTokenSource; ++i )
    {
      this = v2[20];
      if ( !this )
        goto LABEL_21;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               i,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventInfoJobInfoComponent__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      this = (EventInfoJobLevelControl_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !Item )
          goto LABEL_21;
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        UnityEngine_Object__Destroy_83246496(gameObject, 0);
      }
    }
    v3 = v2[20];
    if ( !v3 )
      goto LABEL_21;
  }
  v10 = (int32_t)v3->fields.m_CancellationTokenSource;
  v11 = HIDWORD(v3->fields.m_CancellationTokenSource) + 1;
  LODWORD(v3->fields.m_CancellationTokenSource) = 0;
  HIDWORD(v3->fields.m_CancellationTokenSource) = v11;
  if ( v10 >= 1 )
    System_Array__Clear((System_Array_o *)v3->fields.m_CachedPtr, 0, v10, 0);
  this = v2[21];
  if ( !this
    || (System_Collections_Generic_Dictionary_int__object___Clear(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__Clear__),
        (this = v2[22]) == 0) )
  {
LABEL_21:
    sub_21FFECC(this, method);
  }
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)this,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__Clear__);
}


int32_t EventInfoJobLevelControl__CompareJobLevelData(
        EventInfoJobLevelControl_o *this,
        EventInfoJobLevelControl_JobLevelData_o *left,
        EventInfoJobLevelControl_JobLevelData_o *right,
        const MethodInfo *method)
{
  int v5; // w19
  int32_t result; // w0

  if ( !left )
    return right != 0;
  if ( !right )
    return -1;
  v5 = (int)left;
  result = System_Int32__CompareTo_76925088((_DWORD)left + 40, right->fields.Position, 0);
  if ( !result )
    return System_Int32__CompareTo_76925088(v5 + 20, right->fields.JobId, 0);
  return result;
}


EventInfoJobInfoComponent_o *EventInfoJobLevelControl__CreateJobInfoComponent(
        EventInfoJobLevelControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *jobInfoTemplate; // x20
  __int64 v4; // x1
  bool v5; // w8
  EventInfoJobInfoComponent_o *result; // x0
  Il2CppObject *v7; // x20
  UnityEngine_Object_o *jobInfoRoot; // x21
  __int64 v9; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v11; // x20
  __int64 v12; // x1
  bool v13; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x2

  if ( (byte_5939980 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_EventInfoJobInfoComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939980 = 1;
  }
  jobInfoTemplate = (UnityEngine_Object_o *)this->fields.jobInfoTemplate;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(jobInfoTemplate, 0, 0);
  result = 0;
  if ( !v5 )
  {
    jobInfoRoot = (UnityEngine_Object_o *)this->fields.jobInfoRoot;
    v7 = (Il2CppObject *)this->fields.jobInfoTemplate;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(jobInfoRoot, 0, 0) )
      transform = this->fields.jobInfoRoot;
    else
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    v11 = UnityEngine_Object__Instantiate_object__59506996(
            v7,
            transform,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_EventInfoJobInfoComponent___);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0, 0);
    result = 0;
    if ( !v13 )
    {
      if ( !v11
        || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0),
            GameObjectExtensions__ResetLocalScale(gameObject, 0),
            EventInfoJobInfoComponent__InitAtlasList((EventInfoJobInfoComponent_o *)v11, this->fields.atlasList, v15),
            (result = (EventInfoJobInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)v11,
                                                       0)) == 0) )
      {
        sub_21FFECC(result, v12);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)result, 1, 0);
      return (EventInfoJobInfoComponent_o *)v11;
    }
  }
  return result;
}


System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *EventInfoJobLevelControl__CreateJobInfoList(
        EventInfoJobLevelControl_o *this,
        System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *dataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 freeCount; // x1
  struct System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__o *jobLevelDataDictionary; // x0
  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  int v12; // w0
  int v13; // w22
  unsigned int i; // w23
  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct EventUiEntity_o *eventUiEntity; // x8
  struct System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__o *v26; // x24
  int buckets; // w9
  int comparer_high; // w9
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  _BOOL8 v33; // x0
  Il2CppObject *v34; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  System_Comparison_T__o *v45; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+10h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5939986 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__EventInfoJobLevelControl_JobLevelData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__EventInfoJobLevelControl_JobLevelData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__EventInfoJobLevelControl_JobLevelData__get_Current__);
    sub_21FFC50(&Method_EventInfoJobLevelControl_CompareJobLevelData__);
    sub_21FFC50(&System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__EventInfoJobLevelControl_JobLevelData__get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    byte_5939986 = 1;
  }
  value = 0;
  memset(&v47, 0, sizeof(v47));
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData___ctor__);
  jobLevelDataDictionary = this->fields.jobLevelDataDictionary;
  if ( !jobLevelDataDictionary )
    goto LABEL_53;
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)jobLevelDataDictionary,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__Clear__);
  if ( dataList )
  {
    klass = dataList->klass;
    v9 = *(unsigned __int16 *)&dataList->klass->_2.rank;
    if ( *(_WORD *)&dataList->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__c **)p_offset - 1) != System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_2237E2C(
              dataList,
              System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo,
              0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *, _QWORD))v11)(
            dataList,
            *(_QWORD *)(v11 + 8));
    if ( v12 >= 1 )
    {
      v13 = v12;
      for ( i = 0; i != v13; ++i )
      {
        v15 = dataList->klass;
        v16 = *(unsigned __int16 *)&dataList->klass->_2.rank;
        if ( *(_WORD *)&dataList->klass->_2.rank )
        {
          v17 = &v15->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c **)v17 - 1) != System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__TypeInfo )
          {
            --v16;
            v17 += 4;
            if ( !v16 )
              goto LABEL_17;
          }
          v18 = (__int64)&v15->vtable[*v17];
        }
        else
        {
LABEL_17:
          v18 = sub_2237E2C(
                  dataList,
                  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__TypeInfo,
                  0);
        }
        jobLevelDataDictionary = (struct System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *, _QWORD, _QWORD))v18)(dataList, i, *(_QWORD *)(v18 + 8));
        if ( jobLevelDataDictionary )
        {
          eventUiEntity = this->fields.eventUiEntity;
          v26 = jobLevelDataDictionary;
          if ( !eventUiEntity
            || (buckets = (int)jobLevelDataDictionary->fields._buckets, buckets < 1)
            || buckets == eventUiEntity->fields.eventId )
          {
            freeCount = (unsigned int)jobLevelDataDictionary->fields._freeCount;
            if ( (int)freeCount <= 0 )
            {
              if ( !v5 )
                goto LABEL_53;
              items = v5->fields._items;
              v30 = Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__Add__;
              ++v5->fields._version;
              if ( !items )
                goto LABEL_53;
              size = v5->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v5,
                  (Il2CppObject *)jobLevelDataDictionary,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
              }
              else
              {
                v32 = &items->obj.klass + size;
                v5->fields._size = size + 1;
                v32[4] = (Il2CppClass *)v26;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v26, v19, v20, v21, v22, v23, v24);
              }
            }
            else
            {
              jobLevelDataDictionary = this->fields.jobLevelDataDictionary;
              if ( !jobLevelDataDictionary )
                goto LABEL_53;
              if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
                     (System_Collections_Generic_Dictionary_int__object__o *)jobLevelDataDictionary,
                     freeCount,
                     &value,
                     (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__TryGetValue__) )
              {
                if ( !value )
                  goto LABEL_38;
                comparer_high = HIDWORD(v26->fields._comparer);
                if ( (HIDWORD(value[3].klass) == 0) == (comparer_high != 0) )
                {
                  if ( comparer_high )
                  {
LABEL_38:
                    jobLevelDataDictionary = this->fields.jobLevelDataDictionary;
                    if ( !jobLevelDataDictionary )
                      goto LABEL_53;
                    System_Collections_Generic_Dictionary_int__object___set_Item(
                      (System_Collections_Generic_Dictionary_int__object__o *)jobLevelDataDictionary,
                      v26->fields._freeCount,
                      (Il2CppObject *)v26,
                      (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__set_Item__);
                  }
                }
                else if ( SHIDWORD(v26->fields._buckets) < SHIDWORD(value[1].klass) )
                {
                  goto LABEL_38;
                }
              }
              else
              {
                jobLevelDataDictionary = this->fields.jobLevelDataDictionary;
                if ( !jobLevelDataDictionary )
                  goto LABEL_53;
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)jobLevelDataDictionary,
                  v26->fields._freeCount,
                  (Il2CppObject *)v26,
                  (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__Add__);
              }
            }
          }
        }
      }
    }
    jobLevelDataDictionary = this->fields.jobLevelDataDictionary;
    if ( jobLevelDataDictionary )
    {
      System_Collections_Generic_Dictionary_int__object___GetEnumerator(
        &v47,
        (System_Collections_Generic_Dictionary_int__object__o *)jobLevelDataDictionary,
        (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobLevelControl_JobLevelData__GetEnumerator__);
      while ( 1 )
      {
        v33 = System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                &v47,
                (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__EventInfoJobLevelControl_JobLevelData__MoveNext__);
        if ( !v33 )
          break;
        if ( !v5
          || (v41 = v5->fields._items,
              v34 = v47.fields._current.fields.value,
              v42 = Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__Add__,
              ++v5->fields._version,
              !v41) )
        {
          sub_21FFECC(v33, v34);
        }
        v43 = v5->fields._size;
        if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v34,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &v41->obj.klass + v43;
          v5->fields._size = v43 + 1;
          v44[4] = (Il2CppClass *)v34;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v34, v35, v36, v37, v38, v39, v40);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
        &v47,
        (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__EventInfoJobLevelControl_JobLevelData__Dispose__);
      v45 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventInfoJobLevelControl_JobLevelData__TypeInfo);
      System_Comparison_object____ctor(
        v45,
        (Il2CppObject *)this,
        Method_EventInfoJobLevelControl_CompareJobLevelData__,
        0);
      if ( v5 )
      {
        System_Collections_Generic_List_object___Sort_71636404(
          v5,
          v45,
          (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__Sort__);
        return (System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *)v5;
      }
    }
LABEL_53:
    sub_21FFECC(jobLevelDataDictionary, freeCount);
  }
  return (System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *)v5;
}


EventInfoJobLevelControl_JobLevelData_o *EventInfoJobLevelControl__CreateJobLevelData(
        EventInfoJobLevelControl_o *this,
        EventJobEntity_o *eventJobEntity,
        UserEventJobEntity_o *userEventJobEntity,
        const MethodInfo *method)
{
  __int64 v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  __int128 v11; // q0
  int32_t v12; // w0
  UserEventJobEntity_JobInfo_o *JobInfo; // x0
  int32_t lv; // w8
  int32_t v15; // w4
  EventJobPointBonusMaster_o *eventJobPointBonusMaster; // x0
  int32_t *p_value; // x8
  EventJobPointBonusMaster_o *v18; // x0
  int32_t calcType[2]; // [xsp+0h] [xbp-40h] BYREF
  EventJobPointBonusEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5939979 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoJobLevelControl_JobLevelData_TypeInfo);
    byte_5939979 = 1;
  }
  *(_QWORD *)calcType = 0;
  entity = 0;
  v7 = sub_21FFEBC(EventInfoJobLevelControl_JobLevelData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !eventJobEntity || !v7 )
    goto LABEL_18;
  *(_QWORD *)&v11 = *(_QWORD *)&eventJobEntity->fields.eventId;
  DWORD2(v11) = eventJobEntity->fields.minLv;
  HIDWORD(v11) = DWORD2(v11);
  *(_OWORD *)(v7 + 16) = v11;
  *(_DWORD *)(v7 + 32) = eventJobEntity->fields.maxLv;
  *(_QWORD *)(v7 + 36) = *(_QWORD *)&eventJobEntity->fields.iconId;
  v12 = EventInfoJobLevelControl__DetermineDisplayState((EventInfoJobLevelControl_o *)v8, eventJobEntity, v10);
  *(_DWORD *)(v7 + 52) = v12;
  if ( userEventJobEntity )
  {
    if ( v12 == 2 )
    {
      JobInfo = UserEventJobEntity__GetJobInfo(userEventJobEntity, eventJobEntity->fields.id, 0);
      if ( JobInfo )
      {
        lv = JobInfo->fields.lv;
        *(_BYTE *)(v7 + 56) = 1;
        *(_DWORD *)(v7 + 24) = lv;
      }
    }
  }
  v15 = *(_DWORD *)(v7 + 24);
  eventJobPointBonusMaster = this->fields.eventJobPointBonusMaster;
  *(_BYTE *)(v7 + 57) = v15 >= eventJobEntity->fields.maxLv;
  if ( eventJobPointBonusMaster )
  {
    v8 = EventJobPointBonusMaster__TryGetEntity(
           eventJobPointBonusMaster,
           &entity,
           eventJobEntity->fields.eventId,
           eventJobEntity->fields.id,
           v15,
           0);
    if ( v8 )
    {
      if ( entity )
      {
        p_value = &entity->fields.value;
        *(_DWORD *)(v7 + 48) = entity->fields.calcType;
LABEL_16:
        *(_DWORD *)(v7 + 44) = *p_value;
        return (EventInfoJobLevelControl_JobLevelData_o *)v7;
      }
LABEL_18:
      sub_21FFECC(v8, v9);
    }
    v18 = this->fields.eventJobPointBonusMaster;
    if ( v18
      && EventJobPointBonusMaster__TryGetDefaultDisplayData(
           v18,
           eventJobEntity->fields.eventId,
           eventJobEntity->fields.id,
           &calcType[1],
           calcType,
           0) )
    {
      *(_DWORD *)(v7 + 48) = calcType[1];
      p_value = calcType;
      goto LABEL_16;
    }
  }
  return (EventInfoJobLevelControl_JobLevelData_o *)v7;
}


System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *EventInfoJobLevelControl__CreateJobLevelDataList(
        EventInfoJobLevelControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t eventId; // w21
  void *Master_object; // x0
  __int64 v8; // x1
  int v9; // w23
  System_Collections_Generic_List_object__o *v10; // x21
  int32_t i; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v13; // x3
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass *v23; // x1
  Il2CppClass **v24; // x0
  UserEventJobEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5939978 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventJobMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventJobEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    byte_5939978 = 1;
  }
  entity = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData___ctor__);
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity && this->fields.eventJobMaster )
  {
    eventId = eventUiEntity->fields.eventId;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventJobMaster___);
    if ( !Master_object
      || (UserEventJobMaster__TryGetEntity((UserEventJobMaster_o *)Master_object, &entity, eventId, 0),
          (Master_object = this->fields.eventJobMaster) == 0)
      || (Master_object = EventJobMaster__GetVisibleEntityListByEventId((EventJobMaster_o *)Master_object, eventId, 0)) == 0 )
    {
LABEL_20:
      sub_21FFECC(Master_object, v8);
    }
    v9 = *((_DWORD *)Master_object + 6);
    v10 = (System_Collections_Generic_List_object__o *)Master_object;
    if ( v9 >= 1 )
    {
      for ( i = 0; v9 != i; ++i )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v10,
                 i,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventJobEntity__get_Item__);
        if ( Item )
        {
          Master_object = EventInfoJobLevelControl__CreateJobLevelData(this, (EventJobEntity_o *)Item, entity, v13);
          if ( !v3 )
            goto LABEL_20;
          items = v3->fields._items;
          v21 = Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__Add__;
          ++v3->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v3->fields._size;
          v23 = (Il2CppClass *)Master_object;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              (Il2CppObject *)Master_object,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v24[4] = v23;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v23, v14, v15, v16, v17, v18, v19);
          }
        }
      }
    }
  }
  return (System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *)v3;
}


int32_t EventInfoJobLevelControl__DetermineDisplayState(
        EventInfoJobLevelControl_o *this,
        EventJobEntity_o *eventJobEntity,
        const MethodInfo *method)
{
  if ( !eventJobEntity )
    sub_21FFECC(this, 0);
  if ( EventJobEntity__IsOpen(eventJobEntity, 0) )
    return 2;
  if ( EventJobEntity__IsDisplayOpen(eventJobEntity, 0) )
    return 1;
  EventJobEntity__IsHideCondOpen(eventJobEntity, 0);
  return 0;
}


void EventInfoJobLevelControl__Initialization(
        EventInfoJobLevelControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v11; // x21

  if ( (byte_5939977 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoJobLevelControl__Initialization_b__27_0__);
    byte_5939977 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
  {
    v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_EventInfoJobLevelControl__Initialization_b__27_0__, 0);
    EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v11, 0);
  }
}


bool EventInfoJobLevelControl__IsJobCountAboveThreshold(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *jobLevelDataList; // x8

  if ( (byte_5939987 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__get_Count__);
    byte_5939987 = 1;
  }
  jobLevelDataList = this->fields.jobLevelDataList;
  return jobLevelDataList && jobLevelDataList->fields._size >= this->fields.bgSpriteChangeJobThreshold;
}


bool EventInfoJobLevelControl__IsTargetEventData(
        EventInfoJobLevelControl_o *this,
        EventInfoJobLevelControl_JobLevelData_o *data,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t EventId; // w9
  bool result; // w0

  if ( !data )
    return 0;
  eventUiEntity = this->fields.eventUiEntity;
  result = !eventUiEntity || (EventId = data->fields.EventId, EventId < 1) || EventId == eventUiEntity->fields.eventId;
  return result;
}


void EventInfoJobLevelControl__Redisplay(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *JobLevelDataList; // x0
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  if ( !this->fields.eventUiEntity )
    EventInfoJobLevelControl__ReleaseLoadedEventUI(this, method);
  JobLevelDataList = EventInfoJobLevelControl__CreateJobLevelDataList(this, method);
  EventInfoJobLevelControl__UpdateJobInfoList(
    this,
    (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)JobLevelDataList,
    v4);
  EventInfoJobLevelControl__UpdatePointLabel(this, v5);
}


void EventInfoJobLevelControl__RefreshJobInfoList(
        EventInfoJobLevelControl_o *this,
        System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *dataList,
        const MethodInfo *method)
{
  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  int v9; // w0
  const MethodInfo *v10; // x1
  int v11; // w21
  unsigned int i; // w22
  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  EventInfoJobLevelControl_JobLevelData_o *v19; // x23
  int v20; // w9
  System_Collections_Generic_List_object__o *jobInfoComponentDictionary; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *JobInfoComponent; // x24
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  EventInfoJobLevelControl_o *v26; // x0
  const MethodInfo *v27; // x3
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8

  if ( (byte_593997D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__ContainsKey__);
    sub_21FFC50(&System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobInfoComponent__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593997D = 1;
  }
  EventInfoJobLevelControl__ClearJobInfoList(this, (const MethodInfo *)dataList);
  if ( dataList )
  {
    klass = dataList->klass;
    v6 = *(unsigned __int16 *)&dataList->klass->_2.rank;
    if ( *(_WORD *)&dataList->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__c **)p_offset - 1) != System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v8 = sub_2237E2C(
             dataList,
             System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo,
             0);
    }
    v9 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *, _QWORD))v8)(
           dataList,
           *(_QWORD *)(v8 + 8));
    if ( v9 >= 1 )
    {
      v11 = v9;
      for ( i = 0; i != v11; ++i )
      {
        v13 = dataList->klass;
        v14 = *(unsigned __int16 *)&dataList->klass->_2.rank;
        if ( *(_WORD *)&dataList->klass->_2.rank )
        {
          v15 = &v13->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c **)v15 - 1) != System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__TypeInfo )
          {
            --v14;
            v15 += 4;
            if ( !v14 )
              goto LABEL_17;
          }
          v16 = (__int64)&v13->vtable[*v15];
        }
        else
        {
LABEL_17:
          v16 = sub_2237E2C(
                  dataList,
                  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__TypeInfo,
                  0);
        }
        v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *, _QWORD, _QWORD))v16)(
                dataList,
                i,
                *(_QWORD *)(v16 + 8));
        if ( v17 )
        {
          eventUiEntity = this->fields.eventUiEntity;
          v19 = (EventInfoJobLevelControl_JobLevelData_o *)v17;
          if ( !eventUiEntity || (v20 = *(_DWORD *)(v17 + 16), v20 < 1) || v20 == eventUiEntity->fields.eventId )
          {
            jobInfoComponentDictionary = (System_Collections_Generic_List_object__o *)this->fields.jobInfoComponentDictionary;
            if ( !jobInfoComponentDictionary )
              goto LABEL_38;
            if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                    (System_Collections_Generic_Dictionary_int__object__o *)jobInfoComponentDictionary,
                    v19->fields.JobId,
                    (const MethodInfo_3F68EFC *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__ContainsKey__) )
            {
              JobInfoComponent = (UnityEngine_Object_o *)EventInfoJobLevelControl__CreateJobInfoComponent(this, v10);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
              jobInfoComponentDictionary = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Equality(
                                                                                          JobInfoComponent,
                                                                                          0,
                                                                                          0);
              if ( ((unsigned __int8)jobInfoComponentDictionary & 1) == 0 )
              {
                if ( !JobInfoComponent )
                  goto LABEL_38;
                EventInfoJobInfoComponent__InitAtlasList(
                  (EventInfoJobInfoComponent_o *)JobInfoComponent,
                  this->fields.atlasList,
                  v24);
                EventInfoJobInfoComponent__UpdateDisp((EventInfoJobInfoComponent_o *)JobInfoComponent, v19, v25);
                EventInfoJobLevelControl__UpdateJobInfoComponentPosition(
                  v26,
                  (EventInfoJobInfoComponent_o *)JobInfoComponent,
                  i,
                  v27);
                jobInfoComponentDictionary = (System_Collections_Generic_List_object__o *)this->fields.jobInfoComponentList;
                if ( !jobInfoComponentDictionary )
                  goto LABEL_38;
                items = jobInfoComponentDictionary->fields._items;
                v35 = Method_System_Collections_Generic_List_EventInfoJobInfoComponent__Add__;
                ++jobInfoComponentDictionary->fields._version;
                if ( !items )
                  goto LABEL_38;
                size = jobInfoComponentDictionary->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    jobInfoComponentDictionary,
                    (Il2CppObject *)JobInfoComponent,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
                }
                else
                {
                  v37 = &items->obj.klass + size;
                  jobInfoComponentDictionary->fields._size = size + 1;
                  v37[4] = (Il2CppClass *)JobInfoComponent;
                  sub_21FFBF4(
                    (MissionNaviTransitionBoardItem_o *)(v37 + 4),
                    (int32_t)JobInfoComponent,
                    v28,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33);
                }
                jobInfoComponentDictionary = (System_Collections_Generic_List_object__o *)this->fields.jobInfoComponentDictionary;
                if ( !jobInfoComponentDictionary )
LABEL_38:
                  sub_21FFECC(jobInfoComponentDictionary, v10);
                System_Collections_Generic_Dictionary_int__object___Add(
                  (System_Collections_Generic_Dictionary_int__object__o *)jobInfoComponentDictionary,
                  v19->fields.JobId,
                  (Il2CppObject *)JobInfoComponent,
                  (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__Add__);
              }
            }
          }
        }
      }
    }
    EventInfoJobLevelControl__RepositionJobInfoGrid(this, v10);
  }
}


void EventInfoJobLevelControl__ReleaseLoadedEventUI(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( eventUiEntity )
    EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoJobLevelControl__RepositionJobInfoGrid(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *jobInfoGrid; // x20
  __int64 v4; // x1
  UIGrid_o *v5; // x0

  if ( (byte_5939982 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939982 = 1;
  }
  jobInfoGrid = (UnityEngine_Object_o *)this->fields.jobInfoGrid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(jobInfoGrid, 0, 0) )
  {
    v5 = this->fields.jobInfoGrid;
    if ( !v5 )
      sub_21FFECC(0, v4);
    UIGrid__set_repositionNow(v5, 1, 0);
  }
}


void EventInfoJobLevelControl__SetJobLevelDataList(
        EventInfoJobLevelControl_o *this,
        System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *dataList,
        const MethodInfo *method)
{
  EventInfoJobLevelControl_o *v4; // x19
  struct System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *jobLevelDataList; // x21
  const MethodInfo *size; // x2
  int v7; // w8
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_593997A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__AddRange__);
    this = (EventInfoJobLevelControl_o *)sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__Clear__);
    byte_593997A = 1;
  }
  jobLevelDataList = v4->fields.jobLevelDataList;
  if ( !jobLevelDataList )
LABEL_6:
    sub_21FFECC(this, dataList);
  size = (const MethodInfo *)(unsigned int)jobLevelDataList->fields._size;
  v7 = jobLevelDataList->fields._version + 1;
  jobLevelDataList->fields._size = 0;
  jobLevelDataList->fields._version = v7;
  if ( (int)size <= 0 )
  {
    this = (EventInfoJobLevelControl_o *)EventInfoJobLevelControl__CreateJobInfoList(v4, dataList, size);
  }
  else
  {
    System_Array__Clear((System_Array_o *)jobLevelDataList->fields._items, 0, (int32_t)size, 0);
    jobLevelDataList = v4->fields.jobLevelDataList;
    this = (EventInfoJobLevelControl_o *)EventInfoJobLevelControl__CreateJobInfoList(v4, dataList, v8);
    if ( !jobLevelDataList )
      goto LABEL_6;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)jobLevelDataList,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__AddRange__);
  EventInfoJobLevelControl__RefreshJobInfoList(
    v4,
    (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)v4->fields.jobLevelDataList,
    v9);
  EventInfoJobLevelControl__UpdateEfficacySumLabel(
    v4,
    (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)v4->fields.jobLevelDataList,
    v10);
  EventInfoJobLevelControl__UpdateBackground(
    v4,
    (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)v4->fields.jobLevelDataList,
    v11);
}


void EventInfoJobLevelControl__Setup(
        EventInfoJobLevelControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *JobLevelDataList; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( !this->fields.eventUiEntity )
    EventInfoJobLevelControl__ReleaseLoadedEventUI(this, (const MethodInfo *)entitys);
  JobLevelDataList = EventInfoJobLevelControl__CreateJobLevelDataList(this, (const MethodInfo *)entitys);
  EventInfoJobLevelControl__SetJobLevelDataList(
    this,
    (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)JobLevelDataList,
    v5);
  EventInfoJobLevelControl__UpdatePointLabel(this, v6);
}


void EventInfoJobLevelControl__SetupJobInfoGrid(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *jobInfoGrid; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UIGrid_o *v6; // x8

  if ( (byte_593997F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593997F = 1;
  }
  jobInfoGrid = (UnityEngine_Object_o *)this->fields.jobInfoGrid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Equality(jobInfoGrid, 0, 0);
  if ( !v4 )
  {
    v6 = this->fields.jobInfoGrid;
    if ( !v6 )
      sub_21FFECC(v4, v5);
    v6->fields.arrangement = 0;
    v6->fields.maxPerLine = 2;
    v6->fields.hideInactive = 1;
  }
}


bool EventInfoJobLevelControl__ShouldReplacePositionData(
        EventInfoJobLevelControl_o *this,
        EventInfoJobLevelControl_JobLevelData_o *currentData,
        EventInfoJobLevelControl_JobLevelData_o *newData,
        const MethodInfo *method)
{
  _BOOL4 v4; // w0

  if ( currentData )
  {
    if ( newData )
    {
      v4 = newData->fields.DisplayState != 0;
      if ( (currentData->fields.DisplayState == 0) != v4 )
        LOBYTE(v4) = newData->fields.JobId < currentData->fields.JobId;
    }
    else
    {
      LOBYTE(v4) = 0;
    }
  }
  else
  {
    LOBYTE(v4) = 1;
  }
  return v4;
}


void EventInfoJobLevelControl__UpdateBackground(
        EventInfoJobLevelControl_o *this,
        System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *dataList,
        const MethodInfo *method)
{
  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  bool v9; // w1
  __int64 v10; // x1
  UnityEngine_Object_o *bgSprite; // x21
  bool v12; // w0
  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w8
  UISprite_o *v19; // x20
  EventInfoJobLevelControl_c *v20; // x0
  int v21; // w23
  System_String_o **p_BgImgKeyFormat; // x8
  System_String_o *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  __int64 v26; // x1
  bool v27; // w8
  UnityEngine_Component_o *gameObject; // x0
  bool v29; // w1
  int v30; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5939984 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoJobLevelControl_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939984 = 1;
  }
  if ( dataList )
  {
    klass = dataList->klass;
    v6 = *(unsigned __int16 *)&dataList->klass->_2.rank;
    if ( *(_WORD *)&dataList->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__c **)p_offset - 1) != System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v8 = sub_2237E2C(
             dataList,
             System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo,
             0);
    }
    v9 = (*(int (__fastcall **)(System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *, _QWORD))v8)(
           dataList,
           *(_QWORD *)(v8 + 8)) >= this->fields.bgSpriteChangeJobThreshold;
  }
  else
  {
    v9 = 0;
  }
  EventInfoJobLevelControl__UpdateLabelPositions(this, v9, method);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__op_Equality(bgSprite, 0, 0);
  if ( dataList && !v12 )
  {
    v13 = dataList->klass;
    v14 = *(unsigned __int16 *)&dataList->klass->_2.rank;
    if ( *(_WORD *)&dataList->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__c **)v15 - 1) != System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_20;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_20:
      v16 = sub_2237E2C(
              dataList,
              System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo,
              0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *, _QWORD))v16)(
            dataList,
            *(_QWORD *)(v16 + 8));
    v19 = this->fields.bgSprite;
    v20 = EventInfoJobLevelControl_TypeInfo;
    if ( v18 < this->fields.bgSpriteChangeJobThreshold )
      v21 = 1;
    else
      v21 = 2;
    if ( !*(&EventInfoJobLevelControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJobLevelControl_TypeInfo, v17);
      v20 = EventInfoJobLevelControl_TypeInfo;
    }
    p_BgImgKeyFormat = &v20->static_fields->BgImgKeyFormat;
    v30 = v21;
    v23 = *p_BgImgKeyFormat;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v30);
    v25 = System_String__Format(v23, v24, 0);
    v27 = EventInfoUIBase__SetSpriteByLocalAtlas((EventInfoUIBase_o *)this, v19, v25, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.bgSprite;
    if ( v27 )
    {
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          v29 = 1;
LABEL_35:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v29, 0);
          return;
        }
      }
    }
    else if ( gameObject )
    {
      UISprite__set_spriteName((UISprite_o *)gameObject, **(System_String_o ***)(qword_594C0B8 + 184), 0);
      gameObject = (UnityEngine_Component_o *)this->fields.bgSprite;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          v29 = 0;
          goto LABEL_35;
        }
      }
    }
    sub_21FFECC(gameObject, v26);
  }
}


void EventInfoJobLevelControl__UpdateEfficacySumLabel(
        EventInfoJobLevelControl_o *this,
        System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *dataList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *efficacySumLabel; // x21
  struct EventJobPointBonusMaster_o *eventJobPointBonusMaster; // x0
  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  UILabel_o *v11; // x0
  System_String_o *v12; // x1
  int32_t v13; // w22
  bool v14; // w21
  int32_t v15; // w23
  int v16; // w0
  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  int v21; // w0
  __int64 v22; // x1
  int v23; // w24
  unsigned int v24; // w25
  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  int lookup; // w8
  struct UILabel_o *v30; // x19

  if ( (byte_593997E & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593997E = 1;
  }
  efficacySumLabel = (UnityEngine_Object_o *)this->fields.efficacySumLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, dataList);
  if ( !UnityEngine_Object__op_Equality(efficacySumLabel, 0, 0) )
  {
    eventJobPointBonusMaster = this->fields.eventJobPointBonusMaster;
    if ( eventJobPointBonusMaster )
    {
      if ( dataList )
      {
        klass = dataList->klass;
        v8 = *(unsigned __int16 *)&dataList->klass->_2.rank;
        if ( *(_WORD *)&dataList->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__c **)p_offset - 1) != System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo )
          {
            --v8;
            p_offset += 4;
            if ( !v8 )
              goto LABEL_12;
          }
          v10 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_12:
          v10 = sub_2237E2C(
                  dataList,
                  System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo,
                  0);
        }
        v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *, _QWORD))v10)(
                dataList,
                *(_QWORD *)(v10 + 8));
        v17 = dataList->klass;
        v14 = v16 > 0;
        v18 = *(unsigned __int16 *)&dataList->klass->_2.rank;
        if ( *(_WORD *)&dataList->klass->_2.rank )
        {
          v19 = &v17->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__c **)v19 - 1) != System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo )
          {
            --v18;
            v19 += 4;
            if ( !v18 )
              goto LABEL_20;
          }
          v20 = (__int64)&v17->vtable[*v19];
        }
        else
        {
LABEL_20:
          v20 = sub_2237E2C(
                  dataList,
                  System_Collections_Generic_ICollection_EventInfoJobLevelControl_JobLevelData__TypeInfo,
                  0);
        }
        v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *, _QWORD))v20)(
                dataList,
                *(_QWORD *)(v20 + 8));
        if ( v21 < 1 )
        {
          v13 = 0;
          v15 = 1000;
        }
        else
        {
          v23 = v21;
          v13 = 0;
          v24 = 0;
          v15 = 1000;
          do
          {
            v25 = dataList->klass;
            v26 = *(unsigned __int16 *)&dataList->klass->_2.rank;
            if ( *(_WORD *)&dataList->klass->_2.rank )
            {
              v27 = &v25->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__c **)v27 - 1) != System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__TypeInfo )
              {
                --v26;
                v27 += 4;
                if ( !v26 )
                  goto LABEL_28;
              }
              v28 = (__int64)&v25->vtable[*v27];
            }
            else
            {
LABEL_28:
              v28 = sub_2237E2C(
                      dataList,
                      System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__TypeInfo,
                      0);
            }
            eventJobPointBonusMaster = (struct EventJobPointBonusMaster_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *, _QWORD, _QWORD))v28)(
                                                                              dataList,
                                                                              v24,
                                                                              *(_QWORD *)(v28 + 8));
            if ( eventJobPointBonusMaster
              && HIDWORD(eventJobPointBonusMaster->fields._lookup) == 2
              && SLODWORD(eventJobPointBonusMaster->fields._MasterName_k__BackingField) >= 1 )
            {
              lookup = (int)eventJobPointBonusMaster->fields._lookup;
              if ( lookup == 2 )
              {
                if ( !this->fields.eventJobPointBonusMaster )
                  goto LABEL_44;
                v15 += EventJobPointBonusMaster__GetSummaryMultiplierBonusPermille(
                         this->fields.eventJobPointBonusMaster,
                         HIDWORD(eventJobPointBonusMaster->fields.list),
                         0);
              }
              else if ( lookup == 1 )
              {
                v13 += HIDWORD(eventJobPointBonusMaster->fields.list);
              }
            }
            ++v24;
          }
          while ( v24 != v23 );
        }
        eventJobPointBonusMaster = this->fields.eventJobPointBonusMaster;
        if ( !eventJobPointBonusMaster )
LABEL_44:
          sub_21FFECC(eventJobPointBonusMaster, v22);
      }
      else
      {
        v13 = 0;
        v14 = 0;
        v15 = 1000;
      }
      v30 = this->fields.efficacySumLabel;
      v12 = EventJobPointBonusMaster__FormatSummary(eventJobPointBonusMaster, v14, v13, v15, 0);
      v11 = v30;
    }
    else
    {
      v11 = this->fields.efficacySumLabel;
      v12 = **(System_String_o ***)(qword_594C0B8 + 184);
    }
    UILabelHelper__SetTextSafely(v11, v12, 0);
  }
}


void EventInfoJobLevelControl__UpdateJobInfoComponentPosition(
        EventInfoJobLevelControl_o *this,
        EventInfoJobInfoComponent_o *jobInfoComponent,
        int32_t displayIndex,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1

  if ( (byte_5939981 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939981 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, jobInfoComponent);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)jobInfoComponent, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !jobInfoComponent
      || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)jobInfoComponent, 0)) == 0 )
    {
      sub_21FFECC(transform, v7);
    }
    UnityEngine_Transform__SetSiblingIndex(transform, displayIndex, 0);
  }
}


void EventInfoJobLevelControl__UpdateJobInfoList(
        EventInfoJobLevelControl_o *this,
        System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *dataList,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *JobInfoList; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__o *jobLevelDataList; // x8
  int32_t size; // w2
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int v10; // w9
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_List_EventInfoJobInfoComponent__o *jobInfoComponentList; // x8
  int v13; // w23
  int32_t v14; // w21
  Il2CppObject *Item; // x0
  EventInfoJobLevelControl_JobLevelData_o *v16; // x22
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  EventInfoJobLevelControl_o *v19; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  EventInfoJobLevelControl_o *v24; // x0
  System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593997B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobInfoComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__get_Item__);
    byte_593997B = 1;
  }
  value = 0;
  if ( !dataList )
  {
    EventInfoJobLevelControl__ClearJobInfoList(this, (const MethodInfo *)dataList);
    EventInfoJobLevelControl__UpdateEfficacySumLabel(this, 0, v22);
    v24 = this;
    v25 = 0;
LABEL_22:
    EventInfoJobLevelControl__UpdateBackground(v24, v25, v23);
    return;
  }
  JobInfoList = (System_Collections_Generic_Dictionary_int__object__o *)EventInfoJobLevelControl__CreateJobInfoList(
                                                                          this,
                                                                          dataList,
                                                                          method);
  jobLevelDataList = this->fields.jobLevelDataList;
  if ( !jobLevelDataList )
    goto LABEL_25;
  size = jobLevelDataList->fields._size;
  v9 = JobInfoList;
  v10 = jobLevelDataList->fields._version + 1;
  jobLevelDataList->fields._size = 0;
  jobLevelDataList->fields._version = v10;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)jobLevelDataList->fields._items, 0, size, 0);
    jobLevelDataList = this->fields.jobLevelDataList;
    if ( !jobLevelDataList )
      goto LABEL_25;
  }
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)jobLevelDataList,
    (System_Collections_Generic_IEnumerable_T__o *)v9,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__AddRange__);
  jobInfoComponentList = this->fields.jobInfoComponentList;
  if ( !jobInfoComponentList || !v9 )
LABEL_25:
    sub_21FFECC(JobInfoList, v6);
  v13 = jobInfoComponentList->fields._size;
  if ( v13 != LODWORD(v9->fields._entries) )
  {
    EventInfoJobLevelControl__RefreshJobInfoList(
      this,
      (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)v9,
      v11);
    EventInfoJobLevelControl__UpdateEfficacySumLabel(
      this,
      (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)v9,
      v26);
    v24 = this;
    v25 = (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)v9;
    goto LABEL_22;
  }
  if ( v13 < 1 )
  {
LABEL_19:
    EventInfoJobLevelControl__RepositionJobInfoGrid(this, v6);
    goto LABEL_24;
  }
  v14 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)v9,
             v14,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventInfoJobLevelControl_JobLevelData__get_Item__);
    if ( !Item )
      goto LABEL_18;
    v16 = (EventInfoJobLevelControl_JobLevelData_o *)Item;
    JobInfoList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.jobInfoComponentDictionary;
    if ( !JobInfoList )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
            JobInfoList,
            v16->fields.JobId,
            &value,
            (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__EventInfoJobInfoComponent__TryGetValue__) )
      break;
    JobInfoList = (System_Collections_Generic_Dictionary_int__object__o *)value;
    if ( !value )
      goto LABEL_25;
    EventInfoJobInfoComponent__InitAtlasList((EventInfoJobInfoComponent_o *)value, this->fields.atlasList, v17);
    JobInfoList = (System_Collections_Generic_Dictionary_int__object__o *)value;
    if ( !value )
      goto LABEL_25;
    EventInfoJobInfoComponent__UpdateDisp((EventInfoJobInfoComponent_o *)value, v16, v18);
    EventInfoJobLevelControl__UpdateJobInfoComponentPosition(v19, (EventInfoJobInfoComponent_o *)value, v14, v20);
LABEL_18:
    if ( v13 == ++v14 )
      goto LABEL_19;
  }
  EventInfoJobLevelControl__RefreshJobInfoList(
    this,
    (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)v9,
    v17);
LABEL_24:
  EventInfoJobLevelControl__UpdateEfficacySumLabel(
    this,
    (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)v9,
    v21);
  EventInfoJobLevelControl__UpdateBackground(
    this,
    (System_Collections_Generic_IList_EventInfoJobLevelControl_JobLevelData__o *)v9,
    v27);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoJobLevelControl__UpdateLabelPositions(
        EventInfoJobLevelControl_o *this,
        bool useExtraOffset,
        const MethodInfo *method)
{
  UnityEngine_Component_o *efficacySumLabel; // x0
  float x; // s8
  float y; // s9
  UnityEngine_Transform_o *v8; // x21
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *p_efficacySumLabelOffset; // x8
  float *p_y; // x9
  float *p_z; // x10
  float v13; // s8
  float v14; // s9
  UnityEngine_Transform_o *v15; // x21
  float v16; // s10
  struct UnityEngine_Vector3_StaticFields *p_pointLabelOffset; // x8
  float *v18; // x9
  float *v19; // x10
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.hasEfficacySumLabelBaseLocalPosition
    || !this->fields.hasPointLabelBaseLocalPosition
    && (EventInfoJobLevelControl__CacheLabelBasePositions(this, (const MethodInfo *)useExtraOffset),
        this->fields.hasEfficacySumLabelBaseLocalPosition) )
  {
    efficacySumLabel = (UnityEngine_Component_o *)this->fields.efficacySumLabel;
    if ( !efficacySumLabel )
      goto LABEL_23;
    efficacySumLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(efficacySumLabel, 0);
    x = this->fields.efficacySumLabelBaseLocalPosition.fields.x;
    y = this->fields.efficacySumLabelBaseLocalPosition.fields.y;
    v8 = (UnityEngine_Transform_o *)efficacySumLabel;
    z = this->fields.efficacySumLabelBaseLocalPosition.fields.z;
    if ( useExtraOffset )
    {
      p_efficacySumLabelOffset = (struct UnityEngine_Vector3_StaticFields *)&this->fields.efficacySumLabelOffset;
      p_y = &this->fields.efficacySumLabelOffset.fields.y;
      p_z = &this->fields.efficacySumLabelOffset.fields.z;
    }
    else
    {
      if ( !byte_5931940 )
      {
        efficacySumLabel = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      p_efficacySumLabelOffset = UnityEngine_Vector3_TypeInfo->static_fields;
      p_y = &p_efficacySumLabelOffset->zeroVector.fields.y;
      p_z = &p_efficacySumLabelOffset->zeroVector.fields.z;
    }
    if ( !v8 )
      goto LABEL_23;
    v20.fields.z = z + *p_z;
    v20.fields.y = y + *p_y;
    v20.fields.x = x + p_efficacySumLabelOffset->zeroVector.fields.x;
    UnityEngine_Transform__set_localPosition(v8, v20, 0);
  }
  if ( this->fields.hasPointLabelBaseLocalPosition )
  {
    efficacySumLabel = (UnityEngine_Component_o *)this->fields.pointLabel;
    if ( efficacySumLabel )
    {
      efficacySumLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(efficacySumLabel, 0);
      v14 = this->fields.pointLabelBaseLocalPosition.fields.x;
      v13 = this->fields.pointLabelBaseLocalPosition.fields.y;
      v15 = (UnityEngine_Transform_o *)efficacySumLabel;
      v16 = this->fields.pointLabelBaseLocalPosition.fields.z;
      if ( useExtraOffset )
      {
        p_pointLabelOffset = (struct UnityEngine_Vector3_StaticFields *)&this->fields.pointLabelOffset;
        v18 = &this->fields.pointLabelOffset.fields.y;
        v19 = &this->fields.pointLabelOffset.fields.z;
      }
      else
      {
        if ( !byte_5931940 )
        {
          efficacySumLabel = (UnityEngine_Component_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        p_pointLabelOffset = UnityEngine_Vector3_TypeInfo->static_fields;
        v18 = &p_pointLabelOffset->zeroVector.fields.y;
        v19 = &p_pointLabelOffset->zeroVector.fields.z;
      }
      if ( v15 )
      {
        v21.fields.x = v14 + p_pointLabelOffset->zeroVector.fields.x;
        v21.fields.z = v16 + *v19;
        v21.fields.y = v13 + *v18;
        UnityEngine_Transform__set_localPosition(v15, v21, 0);
        return;
      }
    }
LABEL_23:
    sub_21FFECC(efficacySumLabel, useExtraOffset);
  }
}


void EventInfoJobLevelControl__UpdatePointLabel(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pointLabel; // x20
  __int64 v4; // x1
  UserEventPointMaster_o *userEventPointMaster; // x20
  System_String_o *v6; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  int64_t EventPointTotal; // x21
  UILabel_o *v9; // x20
  __int64 v10; // x1
  System_String_o *v11; // x22
  BalanceConfig_c *v12; // x8
  int64_t UserPointEventMax; // x23
  Il2CppObject *v14; // x0
  int64_t v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593997C & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5858/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_593997C = 1;
  }
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(pointLabel, 0, 0) && this->fields.eventUiEntity )
  {
    userEventPointMaster = this->fields.userEventPointMaster;
    if ( userEventPointMaster )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
      if ( !byte_5931D52 )
      {
        sub_21FFC50(&NetworkManager_TypeInfo);
        byte_5931D52 = 1;
      }
      v6 = (System_String_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
        v6 = (System_String_o *)NetworkManager_TypeInfo;
      }
      eventUiEntity = this->fields.eventUiEntity;
      if ( !eventUiEntity )
        goto LABEL_27;
      EventPointTotal = UserEventPointMaster__GetEventPointTotal(
                          userEventPointMaster,
                          *(_QWORD *)(*(_QWORD *)&v6[7].fields + 64LL),
                          eventUiEntity->fields.eventId,
                          -1,
                          0);
    }
    else
    {
      EventPointTotal = 0;
    }
    v9 = this->fields.pointLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5858/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v12 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v12 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v12->static_fields->UserPointEventMax;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10);
    v15 = System_Math__Min_76940304(EventPointTotal, UserPointEventMax, 0);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v15);
    v6 = System_String__Format(v11, v14, 0);
    if ( v9 )
    {
      UILabel__set_text(v9, v6, 0);
      v6 = (System_String_o *)this->fields.pointLabel;
      if ( v6 )
      {
        UILabel__SetCondensedScale((UILabel_o *)v6, this->fields.pointLabelMaxWidth, 0, 0);
        return;
      }
    }
LABEL_27:
    sub_21FFECC(v6, v4);
  }
}


void EventInfoJobLevelControl___Initialization_b__27_0(EventInfoJobLevelControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_21FFECC(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
}


void EventInfoJobLevelControl_JobLevelData___ctor(
        EventInfoJobLevelControl_JobLevelData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}