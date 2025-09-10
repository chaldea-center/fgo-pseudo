void BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4C22B02 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_BoostFunctionUtility___ctor__);
    byte_4C22B02 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39D41E4 *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
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
  __int64 v10; // x2
  int v11; // w8
  void *v12; // x21
  unsigned int v13; // w26
  __int64 v14; // x22
  System_Int32_array *v15; // x23
  __int64 v16; // x1
  System_Int32_array *QuestTargetValues; // x0
  _BOOL8 IsMatchIndividuality; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C22B00 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_BoostMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22B00 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_36;
  v11 = *((_DWORD *)Instance + 6);
  v12 = Instance;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
        sub_1C2D6F4(Instance, v8, v10);
      v14 = *((_QWORD *)v12 + (int)v13 + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v14 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, *(_DWORD *)(v14 + 24), 1, 0);
      if ( !Instance )
        break;
      v15 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v15, 0);
      if ( !Instance )
        break;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v27,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v28 = v27;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v28,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v28.fields._current )
          sub_1C2D6EC(0, v16);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v28.fields._current, 0);
        if ( !Entity )
          sub_1C2D6EC(QuestTargetValues, QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0);
        if ( IsMatchIndividuality )
        {
          if ( !v6 )
            sub_1C2D6EC(IsMatchIndividuality, v19);
          items = v6->fields._items;
          v23 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1C2D6EC(IsMatchIndividuality, v19);
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v14,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v14;
            sub_1C2D434((CGThumbnailListItem_o *)(v25 + 4), v14, v20, v21);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v28,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        goto LABEL_34;
    }
LABEL_36:
    sub_1C2D6EC(Instance, v8);
  }
LABEL_34:
  if ( !v6 )
    goto LABEL_36;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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
  __int64 v9; // x2
  int max_length; // w8
  bool v11; // w22
  CommonReleaseMaster_o *v12; // x20
  int v13; // w23
  BoostEntity_o *v14; // x21
  bool IsOpen; // w0
  int32_t hideCommonReleaseId; // w1
  bool v17; // w21

  if ( (byte_4C22B01 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    this = (BoostFunctionUtility_o *)sub_1C2D490(&DataManager_TypeInfo);
    byte_4C22B01 = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !SupportRequestAllowed )
    goto LABEL_15;
  max_length = SupportRequestAllowed->max_length;
  v11 = max_length > 0;
  if ( max_length >= 1 )
  {
    v12 = (CommonReleaseMaster_o *)Master_object;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C2D6F4(Master_object, v8, v9);
      v14 = SupportRequestAllowed->m_Items[v13];
      if ( !v14 || !v12 )
        break;
      IsOpen = CommonReleaseMaster__IsOpen(v12, v14->fields.commonReleaseId, 0, 0, 0);
      hideCommonReleaseId = v14->fields.hideCommonReleaseId;
      v17 = IsOpen;
      Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v12, hideCommonReleaseId, 0, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 || !v17 )
      {
        max_length = SupportRequestAllowed->max_length;
        v11 = ++v13 < max_length;
        if ( v13 < max_length )
          continue;
      }
      return v11;
    }
LABEL_15:
    sub_1C2D6EC(Master_object, v8);
  }
  return v11;
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
    sub_1C2D6EC(this, commonConsumeEntity);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1C2D6F4(this, commonConsumeEntity, userItemEntityList);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A6BA84;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6BA2C;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = index;
  v15 = result;
  if ( (byte_4C22B03 & 1) == 0 )
  {
    sub_1C2D490(&BoostFunctionUtility_BoostResultKind_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C22B03 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(
             BoostFunctionUtility_BoostResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&index,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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