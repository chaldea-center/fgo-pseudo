void BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4C331D1 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_BoostFunctionUtility___ctor__);
    byte_4C331D1 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39E2EEC *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
}


BoostEntity_array *BoostFunctionUtility__GetSupportRequestAllowed(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  void *Instance; // x0
  QuestPhaseEntity_o *Entity; // x20
  int v9; // w8
  void *v10; // x21
  unsigned int v11; // w26
  __int64 v12; // x22
  System_Int32_array *v13; // x23
  System_Int32_array *QuestTargetValues; // x0
  _BOOL8 IsMatchIndividuality; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C331CF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_BoostMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C331CF = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_36;
  v9 = *((_DWORD *)Instance + 6);
  v10 = Instance;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        sub_1C32E84(Instance);
      v12 = *((_QWORD *)v10 + (int)v11 + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v12 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, *(_DWORD *)(v12 + 24), 1, 0);
      if ( !Instance )
        break;
      v13 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v13, 0);
      if ( !Instance )
        break;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v23,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v24 = v23;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v24,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v24.fields._current )
          sub_1C32E7C(0);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v24.fields._current, 0);
        if ( !Entity )
          sub_1C32E7C(QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0);
        if ( IsMatchIndividuality )
        {
          if ( !v6 )
            sub_1C32E7C(IsMatchIndividuality);
          items = v6->fields._items;
          v19 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1C32E7C(IsMatchIndividuality);
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v12,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v12;
            sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), v12, v16, v17);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_34;
    }
LABEL_36:
    sub_1C32E7C(Instance);
  }
LABEL_34:
  if ( !v6 )
    goto LABEL_36;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


bool BoostFunctionUtility__IsDisplayBoostSupportRequest(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  BoostEntity_array *SupportRequestAllowed; // x19
  Il2CppObject *Master_object; // x0
  int max_length; // w8
  bool v9; // w22
  CommonReleaseMaster_o *v10; // x20
  int v11; // w23
  BoostEntity_o *v12; // x21
  bool IsOpen; // w0
  int32_t hideCommonReleaseId; // w1
  bool v15; // w21

  if ( (byte_4C331D0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    this = (BoostFunctionUtility_o *)sub_1C32C20(&DataManager_TypeInfo);
    byte_4C331D0 = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !SupportRequestAllowed )
    goto LABEL_15;
  max_length = SupportRequestAllowed->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v10 = (CommonReleaseMaster_o *)Master_object;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C32E84(Master_object);
      v12 = SupportRequestAllowed->m_Items[v11];
      if ( !v12 || !v10 )
        break;
      IsOpen = CommonReleaseMaster__IsOpen(v10, v12->fields.commonReleaseId, 0, 0, 0);
      hideCommonReleaseId = v12->fields.hideCommonReleaseId;
      v15 = IsOpen;
      Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v10, hideCommonReleaseId, 0, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 || !v15 )
      {
        max_length = SupportRequestAllowed->max_length;
        v9 = ++v11 < max_length;
        if ( v11 < max_length )
          continue;
      }
      return v9;
    }
LABEL_15:
    sub_1C32E7C(Master_object);
  }
  return v9;
}


bool BoostFunctionUtility__IsEnoughUserItem(
        BoostFunctionUtility_o *this,
        CommonConsumeEntity_o *commonConsumeEntity,
        UserItemEntity_array *userItemEntityList,
        const MethodInfo *method)
{
  int max_length; // w8
  int v5; // w9
  UserItemEntity_o *v6; // x10

  if ( !userItemEntityList )
LABEL_11:
    sub_1C32E7C(this);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C32E84(this);
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


void BoostFunctionUtility_CallbackFunc___ctor(
        BoostFunctionUtility_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A711AC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A71154;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *BoostFunctionUtility_CallbackFunc__BeginInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = index;
  v20 = result;
  if ( (byte_4C331D2 & 1) == 0 )
  {
    sub_1C32C20(&BoostFunctionUtility_BoostResultKind_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    byte_4C331D2 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             BoostFunctionUtility_BoostResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&index,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v18, callback, object);
}


void BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void BoostFunctionUtility_CallbackFunc__Invoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    index,
    this->fields.method);
}