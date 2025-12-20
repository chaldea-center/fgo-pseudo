void BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4D27EFA & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_BoostFunctionUtility___ctor__);
    byte_4D27EFA = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3ABAB5C *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
}


BoostEntity_array *BoostFunctionUtility__GetSupportRequestAllowed(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  void *Instance; // x0
  __int64 v8; // x1
  QuestPhaseEntity_o *Entity; // x20
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w26
  __int64 v13; // x22
  System_Int32_array *v14; // x23
  __int64 v15; // x1
  System_Int32_array *QuestTargetValues; // x0
  _BOOL8 IsMatchIndividuality; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D27EF8 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_BoostMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D27EF8 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_36;
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1C942F8(Instance);
      v13 = *((_QWORD *)v11 + (int)v12 + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v13 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, *(_DWORD *)(v13 + 24), 1, 0);
      if ( !Instance )
        break;
      v14 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v14, 0);
      if ( !Instance )
        break;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v30,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v31 = v30;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v31,
                (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v31.fields._current )
          sub_1C942F0(0, v15);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v31.fields._current, 0);
        if ( !Entity )
          sub_1C942F0(QuestTargetValues, QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0);
        if ( IsMatchIndividuality )
        {
          if ( !v6 )
            sub_1C942F0(IsMatchIndividuality, v18);
          items = v6->fields._items;
          v26 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1C942F0(IsMatchIndividuality, v18);
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v13,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v13;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v28 + 4), v13, v19, v20, v21, v22, v23, v24);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_34;
    }
LABEL_36:
    sub_1C942F0(Instance, v8);
  }
LABEL_34:
  if ( !v6 )
    goto LABEL_36;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


bool BoostFunctionUtility__IsDisplayBoostSupportRequest(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  BoostEntity_array *SupportRequestAllowed; // x19
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int max_length; // w8
  bool v10; // w22
  CommonReleaseMaster_o *v11; // x20
  int v12; // w23
  BoostEntity_o *v13; // x21
  bool IsOpen; // w0
  int32_t hideCommonReleaseId; // w1
  bool v16; // w21

  if ( (byte_4D27EF9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    this = (BoostFunctionUtility_o *)sub_1C94098(&DataManager_TypeInfo);
    byte_4D27EF9 = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !SupportRequestAllowed )
    goto LABEL_15;
  max_length = SupportRequestAllowed->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = (CommonReleaseMaster_o *)Master_object;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C942F8(Master_object);
      v13 = SupportRequestAllowed->m_Items[v12];
      if ( !v13 || !v11 )
        break;
      IsOpen = CommonReleaseMaster__IsOpen(v11, v13->fields.commonReleaseId, 0, 0, 0);
      hideCommonReleaseId = v13->fields.hideCommonReleaseId;
      v16 = IsOpen;
      Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v11, hideCommonReleaseId, 0, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 || !v16 )
      {
        max_length = SupportRequestAllowed->max_length;
        v10 = ++v12 < max_length;
        if ( v12 < max_length )
          continue;
      }
      return v10;
    }
LABEL_15:
    sub_1C942F0(Master_object, v8);
  }
  return v10;
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
    sub_1C942F0(this, commonConsumeEntity);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C942F8(this);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC220C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC21B4;
}


System_IAsyncResult_o *BoostFunctionUtility_CallbackFunc__BeginInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = index;
  v12 = result;
  if ( (byte_4D27EFB & 1) == 0 )
  {
    sub_1C94098(&BoostFunctionUtility_BoostResultKind_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    byte_4D27EFB = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(BoostFunctionUtility_BoostResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v10, callback, object);
}


void BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
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