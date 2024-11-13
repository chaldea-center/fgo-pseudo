void __fastcall BoostFunctionUtility___ctor(BoostFunctionUtility_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11D7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_BoostFunctionUtility___ctor__, method, v2);
    byte_4B11D7B = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37DF02C *)Method_SingletonTemplate_BoostFunctionUtility___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BoostEntity_array *__fastcall BoostFunctionUtility__GetSupportRequestAllowed(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x19
  void *Instance; // x0
  __int64 v32; // x1
  QuestPhaseEntity_o *Entity; // x20
  int v34; // w8
  void *v35; // x21
  unsigned int v36; // w26
  __int64 v37; // x22
  System_Int32_array *v38; // x23
  __int64 v39; // x1
  System_Int32_array *QuestTargetValues; // x0
  _BOOL8 IsMatchIndividuality; // x0
  __int64 v42; // x1
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B11D79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_BoostMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_FunctionEntity__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_BoostEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29);
    byte_4B11D79 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       *(_QWORD *)&questPhase,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_BoostMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = BoostMaster__GetAvailableEntities((BoostMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v34 = *((_DWORD *)Instance + 6);
  v35 = Instance;
  if ( v34 >= 1 )
  {
    v36 = 0;
    while ( 1 )
    {
      if ( v36 >= v34 )
        sub_1BCAA44(Instance, v32);
      v37 = *((_QWORD *)v35 + (int)v36 + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !v37 )
        break;
      if ( !Instance )
        break;
      Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, *(_DWORD *)(v37 + 24), 1, 0LL);
      if ( !Instance )
        break;
      v38 = (System_Int32_array *)*((_QWORD *)Instance + 4);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        break;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___);
      if ( !Instance )
        break;
      Instance = FunctionMaster__GetFunctionEntitiesByIds((FunctionMaster_o *)Instance, v38, 0LL);
      if ( !Instance )
        break;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v48,
        (System_Collections_Generic_List_object__o *)Instance,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_FunctionEntity__GetEnumerator__);
      v49 = v48;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v49,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__MoveNext__) )
      {
        if ( !v49.fields._current )
          sub_1BCAA3C(0LL, v39);
        QuestTargetValues = FunctionEntity__getQuestTargetValues((FunctionEntity_o *)v49.fields._current, 0LL);
        if ( !Entity )
          sub_1BCAA3C(QuestTargetValues, QuestTargetValues);
        IsMatchIndividuality = QuestPhaseEntity__IsMatchIndividuality(Entity, QuestTargetValues, 0LL);
        if ( IsMatchIndividuality )
        {
          if ( !v30 )
            sub_1BCAA3C(IsMatchIndividuality, v42);
          items = v30->fields._items;
          v44 = Method_System_Collections_Generic_List_BoostEntity__Add__;
          ++v30->fields._version;
          if ( !items )
            sub_1BCAA3C(IsMatchIndividuality, v42);
          size = v30->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)v37,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v30->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v37;
            sub_1BCA784(v46 + 4, v37);
          }
          break;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v49,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_FunctionEntity__Dispose__);
      v34 = *((_DWORD *)v35 + 6);
      if ( (int)++v36 >= v34 )
        goto LABEL_34;
    }
LABEL_36:
    sub_1BCAA3C(Instance, v32);
  }
LABEL_34:
  if ( !v30 )
    goto LABEL_36;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v30,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BoostFunctionUtility__IsDisplayBoostSupportRequest(
        BoostFunctionUtility_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  BoostEntity_array *SupportRequestAllowed; // x19
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  int max_length; // w8
  bool v13; // w22
  CommonReleaseMaster_o *v14; // x20
  int v15; // w23
  BoostEntity_o *v16; // x21
  bool IsOpen; // w0
  int32_t hideCommonReleaseId; // w1
  bool v19; // w21

  if ( (byte_4B11D7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    this = (BoostFunctionUtility_o *)sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B11D7A = 1;
  }
  SupportRequestAllowed = BoostFunctionUtility__GetSupportRequestAllowed(this, questId, questPhase, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !SupportRequestAllowed )
    goto LABEL_15;
  max_length = SupportRequestAllowed->max_length;
  v13 = max_length > 0;
  if ( max_length >= 1 )
  {
    v14 = (CommonReleaseMaster_o *)Master_object;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        sub_1BCAA44(Master_object, v11);
      v16 = SupportRequestAllowed->m_Items[v15];
      if ( !v16 || !v14 )
        break;
      IsOpen = CommonReleaseMaster__IsOpen(v14, v16->fields.commonReleaseId, 0LL, 0, 0LL);
      hideCommonReleaseId = v16->fields.hideCommonReleaseId;
      v19 = IsOpen;
      Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v14, hideCommonReleaseId, 0LL, 0, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 || !v19 )
      {
        max_length = SupportRequestAllowed->max_length;
        v13 = ++v15 < max_length;
        if ( v15 < max_length )
          continue;
      }
      return v13;
    }
LABEL_15:
    sub_1BCAA3C(Master_object, v11);
  }
  return v13;
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
    sub_1BCAA3C(this, commonConsumeEntity);
  max_length = userItemEntityList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( max_length == v5 )
      sub_1BCAA44(this, commonConsumeEntity);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A06ADC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06A84;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = index;
  v14 = result;
  if ( (byte_4B11D7C & 1) == 0 )
  {
    sub_1BCA7E0(&BoostFunctionUtility_BoostResultKind_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&index);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    byte_4B11D7C = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(BoostFunctionUtility_BoostResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall BoostFunctionUtility_CallbackFunc__EndInvoke(
        BoostFunctionUtility_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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