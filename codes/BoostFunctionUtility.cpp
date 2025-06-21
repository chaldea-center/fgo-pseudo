void __fastcall BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4B17DCA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_BoostFunctionUtility___ctor__, method);
    byte_4B17DCA = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38F8FF0 *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoostEntity_array *__fastcall BoostFunctionUtility__GetSupportRequestAllowed(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x19
  void *Instance; // x0
  __int64 v20; // x1
  QuestPhaseEntity_o *Entity; // x20
  __int64 v22; // x2
  int v23; // w8
  void *v24; // x21
  unsigned int v25; // w26
  __int64 v26; // x22
  System_Int32_array *v27; // x23
  __int64 v28; // x1
  System_Int32_array *QuestTargetValues; // x0
  _BOOL8 IsMatchIndividuality; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B17DC8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BoostMaster___, *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_FunctionMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoostEntity__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_BoostEntity__TypeInfo, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_4B17DC8 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v23 = *((_DWORD *)Instance + 6);
  v24 = Instance;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= v23 )
        sub_1BCB25C(Instance, v20, v22);
      v26 = *((_QWORD *)v24 + (int)v25 + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v26 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, *(_DWORD *)(v26 + 24), 1, 0LL);
      if ( !Instance )
        break;
      v27 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v27, 0LL);
      if ( !Instance )
        break;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v39,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v40 = v39;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v40,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v40.fields._current )
          sub_1BCB254(0LL, v28);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v40.fields._current, 0LL);
        if ( !Entity )
          sub_1BCB254(QuestTargetValues, QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0LL);
        if ( IsMatchIndividuality )
        {
          if ( !v18 )
            sub_1BCB254(IsMatchIndividuality, v31);
          items = v18->fields._items;
          v35 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1BCB254(IsMatchIndividuality, v31);
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v26,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v26;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v37 + 4), v26, v32, v33);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v40,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      v23 = *((_DWORD *)v24 + 6);
      if ( (int)++v25 >= v23 )
        goto LABEL_34;
    }
LABEL_36:
    sub_1BCB254(Instance, v20);
  }
LABEL_34:
  if ( !v18 )
    goto LABEL_36;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v18,
                                (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoostFunctionUtility__IsDisplayBoostSupportRequest(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  BoostEntity_array *SupportRequestAllowed; // x19
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  bool v12; // w22
  CommonReleaseMaster_o *v13; // x20
  int v14; // w23
  BoostEntity_o *v15; // x21
  bool IsOpen; // w0
  int32_t hideCommonReleaseId; // w1
  bool v18; // w21

  if ( (byte_4B17DC9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&questId);
    this = (BoostFunctionUtility_o *)sub_1BCAFF8(&DataManager_TypeInfo, v6);
    byte_4B17DC9 = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !SupportRequestAllowed )
    goto LABEL_15;
  max_length = SupportRequestAllowed->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = (CommonReleaseMaster_o *)Master_object;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1BCB25C(Master_object, v9, v10);
      v15 = SupportRequestAllowed->m_Items[v14];
      if ( !v15 || !v13 )
        break;
      IsOpen = CommonReleaseMaster__IsOpen(v13, v15->fields.commonReleaseId, 0LL, 0, 0LL);
      hideCommonReleaseId = v15->fields.hideCommonReleaseId;
      v18 = IsOpen;
      Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v13, hideCommonReleaseId, 0LL, 0, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 || !v18 )
      {
        max_length = SupportRequestAllowed->max_length;
        v12 = ++v14 < max_length;
        if ( v14 < max_length )
          continue;
      }
      return v12;
    }
LABEL_15:
    sub_1BCB254(Master_object, v9);
  }
  return v12;
}


bool __fastcall BoostFunctionUtility__IsEnoughUserItem(
        BoostFunctionUtility_o *this,
        CommonConsumeEntity_o *commonConsumeEntity,
        UserItemEntity_array *userItemEntityList,
        const MethodInfo *method)
{
  signed int max_length; // w8
  int v5; // w9
  UserItemEntity_o *v6; // x10

  if ( !userItemEntityList )
LABEL_11:
    sub_1BCB254(this, commonConsumeEntity);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BCB25C(this, commonConsumeEntity, userItemEntityList);
    if ( !commonConsumeEntity )
      goto LABEL_11;
    v6 = userItemEntityList->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( commonConsumeEntity->fields.objectId == v6->fields.itemId )
      return commonConsumeEntity->fields.num <= v6->fields.num;
    if ( max_length == ++v5 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostFunctionUtility_CallbackFunc___ctor(
        BoostFunctionUtility_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0F16C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F114;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BoostFunctionUtility_CallbackFunc__BeginInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = result;
  if ( (byte_4B17DCB & 1) == 0 )
  {
    sub_1BCAFF8(&BoostFunctionUtility_BoostResultKind_TypeInfo, *(_QWORD *)&result);
    sub_1BCAFF8(&int_TypeInfo, v9);
    byte_4B17DCB = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             BoostFunctionUtility_BoostResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&index,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v14, callback, object);
}


void __fastcall BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall BoostFunctionUtility_CallbackFunc__Invoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}