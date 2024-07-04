void __fastcall BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  if ( (byte_48DE7BD & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonTemplate_BoostFunctionUtility___ctor__, method);
    byte_48DE7BD = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_35FC108 *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
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
  int v22; // w8
  void *v23; // x21
  unsigned int v24; // w26
  __int64 v25; // x22
  System_Int32_array *v26; // x23
  __int64 v27; // x1
  System_Int32_array *QuestTargetValues; // x0
  _BOOL8 IsMatchIndividuality; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48DE7BB & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_BoostMaster___, *(_QWORD *)&questId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_FunctionMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BoostEntity__Add__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v15);
    sub_1B00CCC(&System_Collections_Generic_List_BoostEntity__TypeInfo, v16);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_48DE7BB = 1;
  }
  memset(&v39, 0, sizeof(v39));
  v18 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v22 = *((_DWORD *)Instance + 6);
  v23 = Instance;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= v22 )
        sub_1B00F30(Instance, v20);
      v25 = *((_QWORD *)v23 + (int)v24 + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v25 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, *(_DWORD *)(v25 + 20), 1, 0LL);
      if ( !Instance )
        break;
      v26 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v26, 0LL);
      if ( !Instance )
        break;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v38,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v39 = v38;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v39,
                (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v39.fields._current )
          sub_1B00F28(0LL, v27);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v39.fields._current, 0LL);
        if ( !Entity )
          sub_1B00F28(QuestTargetValues, QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0LL);
        if ( IsMatchIndividuality )
        {
          if ( !v18 )
            sub_1B00F28(IsMatchIndividuality, v30);
          items = v18->fields._items;
          v34 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1B00F28(IsMatchIndividuality, v30);
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v25,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v25;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v36 + 4), v25, v31, v32);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v39,
        (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      v22 = *((_DWORD *)v23 + 6);
      if ( (int)++v24 >= v22 )
        goto LABEL_34;
    }
LABEL_36:
    sub_1B00F28(Instance, v20);
  }
LABEL_34:
  if ( !v18 )
    goto LABEL_36;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v18,
                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoostFunctionUtility__IsDisplayBoostSupportRequest(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  BoostEntity_array *SupportRequestAllowed; // x0
  __int64 v8; // x1
  int max_length; // w8
  BoostEntity_array *v10; // x19
  bool v11; // w20
  int v12; // w21
  BoostEntity_o *v13; // x24

  if ( (byte_48DE7BC & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, *(_QWORD *)&questId);
    this = (BoostFunctionUtility_o *)sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_48DE7BC = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !SupportRequestAllowed )
    goto LABEL_13;
  max_length = SupportRequestAllowed->max_length;
  v10 = SupportRequestAllowed;
  v11 = max_length > 0;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1B00F30(SupportRequestAllowed, v8);
      v13 = v10->m_Items[v12];
      SupportRequestAllowed = (BoostEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SupportRequestAllowed )
        break;
      SupportRequestAllowed = (BoostEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)SupportRequestAllowed,
                                                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !v13 || !SupportRequestAllowed )
        break;
      SupportRequestAllowed = (BoostEntity_array *)CommonReleaseMaster__IsOpen(
                                                     (CommonReleaseMaster_o *)SupportRequestAllowed,
                                                     v13->fields.commonReleaseId,
                                                     0LL,
                                                     0,
                                                     0LL);
      if ( ((unsigned __int8)SupportRequestAllowed & 1) == 0 )
      {
        max_length = v10->max_length;
        v11 = ++v12 < max_length;
        if ( v12 < max_length )
          continue;
      }
      return v11;
    }
LABEL_13:
    sub_1B00F28(SupportRequestAllowed, v8);
  }
  return v11;
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
    sub_1B00F28(this, commonConsumeEntity);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B00F30(this, commonConsumeEntity);
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1944F58;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1944F00;
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
  if ( (byte_48DE7C4 & 1) == 0 )
  {
    sub_1B00CCC(&BoostFunctionUtility_BoostResultKind_TypeInfo, *(_QWORD *)&result);
    sub_1B00CCC(&int_TypeInfo, v9);
    byte_48DE7C4 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             BoostFunctionUtility_BoostResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&index,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v14, callback, object);
}


void __fastcall BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
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