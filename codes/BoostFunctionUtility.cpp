void __fastcall BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  if ( (byte_4A56E9C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_BoostFunctionUtility___ctor__);
    byte_4A56E9C = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3739C30 *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
}


BoostEntity_array *__fastcall BoostFunctionUtility__GetSupportRequestAllowed(
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
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A56E9A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BoostMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoostEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BoostEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56E9A = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, 0LL);
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
        sub_1B88814(Instance, v8);
      v13 = *((_QWORD *)v11 + (int)v12 + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v13 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, *(_DWORD *)(v13 + 20), 1, 0LL);
      if ( !Instance )
        break;
      v14 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v14, 0LL);
      if ( !Instance )
        break;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v26,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v27 = v26;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v27,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v27.fields._current )
          sub_1B8880C(0LL, v15);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v27.fields._current, 0LL);
        if ( !Entity )
          sub_1B8880C(QuestTargetValues, QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0LL);
        if ( IsMatchIndividuality )
        {
          if ( !v6 )
            sub_1B8880C(IsMatchIndividuality, v18);
          items = v6->fields._items;
          v22 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v6->fields._version;
          if ( !items )
            sub_1B8880C(IsMatchIndividuality, v18);
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v13,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v13;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 4), v13, v19, v20);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v27,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_34;
    }
LABEL_36:
    sub_1B8880C(Instance, v8);
  }
LABEL_34:
  if ( !v6 )
    goto LABEL_36;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v6,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


bool __fastcall BoostFunctionUtility__IsDisplayBoostSupportRequest(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  BoostEntity_array *SupportRequestAllowed; // x0
  __int64 v7; // x1
  int max_length; // w8
  BoostEntity_array *v9; // x19
  bool v10; // w20
  int v11; // w21
  BoostEntity_o *v12; // x24

  if ( (byte_4A56E9B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    this = (BoostFunctionUtility_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56E9B = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !SupportRequestAllowed )
    goto LABEL_13;
  max_length = SupportRequestAllowed->max_length;
  v9 = SupportRequestAllowed;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1B88814(SupportRequestAllowed, v7);
      v12 = v9->m_Items[v11];
      SupportRequestAllowed = (BoostEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !SupportRequestAllowed )
        break;
      SupportRequestAllowed = (BoostEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)SupportRequestAllowed,
                                                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( !v12 || !SupportRequestAllowed )
        break;
      SupportRequestAllowed = (BoostEntity_array *)CommonReleaseMaster__IsOpen(
                                                     (CommonReleaseMaster_o *)SupportRequestAllowed,
                                                     v12->fields.commonReleaseId,
                                                     0LL,
                                                     0,
                                                     0LL);
      if ( ((unsigned __int8)SupportRequestAllowed & 1) == 0 )
      {
        max_length = v9->max_length;
        v10 = ++v11 < max_length;
        if ( v11 < max_length )
          continue;
      }
      return v10;
    }
LABEL_13:
    sub_1B8880C(SupportRequestAllowed, v7);
  }
  return v10;
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
    sub_1B8880C(this, commonConsumeEntity);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1B88814(this, commonConsumeEntity);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C882C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C87D4;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = index;
  v15 = result;
  if ( (byte_4A56E9D & 1) == 0 )
  {
    sub_1B885B0(&BoostFunctionUtility_BoostResultKind_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A56E9D = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             BoostFunctionUtility_BoostResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&index,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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