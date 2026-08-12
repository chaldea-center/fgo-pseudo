void BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  if ( (byte_596BDDC & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_BoostFunctionUtility___ctor__);
    byte_596BDDC = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_47A304C *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
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
  unsigned int v12; // w25
  __int64 v13; // x22
  System_Int32_array *v14; // x23
  __int128 v15; // q0
  __int64 v16; // x1
  System_Int32_array *QuestTargetValues; // x0
  _BOOL8 IsMatchIndividuality; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596BDDA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_BoostMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596BDDA = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_35;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_35;
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_2213CE4(Instance);
      v13 = *((_QWORD *)v11 + (int)v12 + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v13 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, *(_DWORD *)(v13 + 24), 1, 0);
      if ( !Instance )
        break;
      v14 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v14, 0);
      if ( !Instance )
        break;
      System_Collections_Generic_List_object___GetEnumerator(
        &v31,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v15 = *(_OWORD *)&v31.fields._list;
      v31.fields._list = 0;
      *(_QWORD *)&v31.fields._index = &v32;
      *(_OWORD *)&v32.fields._list = v15;
      v32.fields._current = v31.fields._current;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v32,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v32.fields._current )
          sub_2213CDC(0, v16);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v32.fields._current, 0);
        if ( !Entity )
          sub_2213CDC(QuestTargetValues, QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0);
        if ( IsMatchIndividuality )
        {
          if ( !v6
            || (items = v6->fields._items,
                v27 = Method_System_Collections_Generic_List_BoostEntity__Add__,
                ++v6->fields._version,
                !items) )
          {
            sub_2213CDC(IsMatchIndividuality, v19);
          }
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v13,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v13;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 4), v13, v20, v21, v22, v23, v24, v25);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v32,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_33;
    }
LABEL_35:
    sub_2213CDC(Instance, v8);
  }
LABEL_33:
  if ( !v6 )
    goto LABEL_35;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


bool BoostFunctionUtility__IsDisplayBoostSupportRequest(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  BoostEntity_array *SupportRequestAllowed; // x19
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int max_length; // w8
  bool v12; // w22
  CommonReleaseMaster_o *v13; // x20
  __int64 v14; // x23
  BoostEntity_o *v15; // x21
  bool IsOpen; // w0
  int32_t hideCommonReleaseId; // w1
  bool v18; // w21

  if ( (byte_596BDDB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    this = (BoostFunctionUtility_o *)sub_2213A60(&DataManager_TypeInfo);
    byte_596BDDB = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
      if ( (unsigned int)v14 >= max_length )
        sub_2213CE4(Master_object);
      v15 = SupportRequestAllowed->m_Items[v14];
      if ( !v15 || !v13 )
        break;
      IsOpen = CommonReleaseMaster__IsOpen(v13, v15->fields.commonReleaseId, 0, 0, 0);
      hideCommonReleaseId = v15->fields.hideCommonReleaseId;
      v18 = IsOpen;
      Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v13, hideCommonReleaseId, 0, 0, 0);
      if ( !v18 || ((unsigned __int8)Master_object & 1) != 0 )
      {
        max_length = SupportRequestAllowed->max_length;
        v12 = (int)++v14 < max_length;
        if ( (int)v14 < max_length )
          continue;
      }
      return v12;
    }
LABEL_15:
    sub_2213CDC(Master_object, v10);
  }
  return v12;
}


bool BoostFunctionUtility__IsEnoughUserItem(
        BoostFunctionUtility_o *this,
        CommonConsumeEntity_o *commonConsumeEntity,
        UserItemEntity_array *userItemEntityList,
        const MethodInfo *method)
{
  int max_length; // w8
  int v5; // w10
  UserItemEntity_o *v6; // x11

  if ( !userItemEntityList )
LABEL_11:
    sub_2213CDC(this, commonConsumeEntity);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_2213CE4(this);
    if ( !commonConsumeEntity )
      goto LABEL_11;
    v6 = userItemEntityList->m_Items[v5];
    if ( !v6 )
      goto LABEL_11;
    if ( commonConsumeEntity->fields.objectId == v6->fields.itemId )
      return commonConsumeEntity->fields.num <= v6->fields.num;
    if ( (max_length & ~(max_length >> 31)) == ++v5 )
      return 0;
  }
}


void BoostFunctionUtility_CallbackFunc___ctor(
        BoostFunctionUtility_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2003BD4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2003B7C;
}


System_IAsyncResult_o *BoostFunctionUtility_CallbackFunc__BeginInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = index;
  if ( (byte_596BDDD & 1) == 0 )
  {
    sub_2213A60(&BoostFunctionUtility_BoostResultKind_TypeInfo);
    byte_596BDDD = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(BoostFunctionUtility_BoostResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return sub_2213A14(this, v10, callback, object);
}


void BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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