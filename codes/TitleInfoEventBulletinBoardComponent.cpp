void __fastcall TitleInfoEventBulletinBoardComponent___ctor(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  this->fields.rubyRelativePositionY = 12.0;
  *(_QWORD *)&this->fields.spaceBetweenMessages = 0x42AA000040A00000LL;
  *(_OWORD *)&this->fields.wipeIconFadeOutStartTime = xmmword_328E950;
  this->fields.wipeIconCrossFadeTime = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        float setPos,
        bool isNotRandom,
        bool isSetUp,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *baseLabel; // x22
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *msg; // x1
  UnityEngine_GameObject_o *v12; // x23
  ScriptLineMessage_o *v13; // x22
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x9
  EventBulletinBoardEntity_BulletinBoardInfo_o *v16; // x8
  int32_t NextMessageId; // w24
  const MethodInfo *v18; // x2
  struct UISprite_o *baseIcon; // x8
  float mWidth; // s0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  System_Collections_IEnumerator_o *v23; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B43E7 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
    sub_B52984(&Method_System_Collections_Generic_List_ScriptLineMessage__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B43E7 = 1;
  }
  baseLabel = this->fields.baseLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)baseLabel,
                                                          (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_23;
  v12 = Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
  if ( !Component_srcLineSprite )
    goto LABEL_23;
  v13 = (ScriptLineMessage_o *)Component_srcLineSprite;
  ScriptLineMessage__Init((ScriptLineMessage_o *)Component_srcLineSprite, 0LL);
  if ( isNotRandom )
  {
    switchInfo = this->fields.switchInfo;
    if ( switchInfo )
    {
      switchCount = this->fields.switchCount;
      if ( (unsigned int)switchCount >= switchInfo->max_length )
      {
        v31 = sub_B52A88(Component_srcLineSprite);
        sub_B52A28(v31, 0LL);
      }
      v16 = switchInfo->m_Items[switchCount];
      if ( v16 )
      {
        msg = (const MethodInfo *)v16->fields.msg;
        NextMessageId = -1;
        goto LABEL_18;
      }
    }
LABEL_23:
    sub_B52A5C(Component_srcLineSprite, msg);
  }
  NextMessageId = TitleInfoEventBulletinBoardComponent__GetNextMessageId(this, msg);
  Component_srcLineSprite = (UnityEngine_GameObject_o *)TitleInfoEventBulletinBoardComponent__GetMessage(
                                                          this,
                                                          NextMessageId,
                                                          v18);
  msg = (const MethodInfo *)Component_srcLineSprite;
  if ( this->fields.isDispBaseIcon )
  {
    baseIcon = this->fields.baseIcon;
    if ( !baseIcon )
      goto LABEL_23;
    mWidth = (float)baseIcon->fields.mWidth;
  }
  else
  {
    mWidth = 0.0;
  }
  setPos = mWidth + setPos;
LABEL_18:
  ((void (__fastcall *)(ScriptLineMessage_o *, const MethodInfo *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v13->klass->vtable._7_SetText.method)(
    v13,
    msg,
    0LL,
    0LL,
    0LL,
    0LL,
    v13->klass[1]._1.image);
  UnityEngine_GameObject__SetActive(v12, 1, 0LL);
  GameObjectExtensions__SetParent(v12, (UnityEngine_Component_o *)this->fields.scrollerPanel, 0LL);
  v32.fields.y = v13->fields.rubyLineHeight;
  v32.fields.x = 0.0;
  v32.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(v12, v32, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v12, one, 0LL);
  GameObjectExtensions__SetLocalPositionX(v12, setPos, 0LL);
  TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(this, v13, v21);
  Component_srcLineSprite = (UnityEngine_GameObject_o *)this->fields.labels;
  if ( !Component_srcLineSprite )
    goto LABEL_23;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ScriptLineMessage__Add__);
  if ( !isNotRandom && this->fields.isDispWipeIcon )
  {
    v23 = TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(this, NextMessageId, isSetUp, v22);
    started = UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
    this->fields.coroutine = started;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.coroutine,
      (System_Int32_array **)started,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *lineMessage,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v4; // x19
  float y; // w8
  TitleInfoEventBulletinBoardComponent_o *v6; // x20
  unsigned int v7; // w22
  __int64 v8; // x24
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *v10; // x21
  UnityEngine_GameObject_o *v11; // x21
  __int64 v12; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42B43EA & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B43EA = 1;
  }
  if ( v4->fields.rubyRelativePositionY != 0.0 )
  {
    if ( !lineMessage )
      goto LABEL_24;
    this = (TitleInfoEventBulletinBoardComponent_o *)ScriptLineMessage__GetDispLabelArray(lineMessage, 0LL);
    if ( !this )
      goto LABEL_24;
    y = this->fields.TerminalLocalPos.fields.y;
    v6 = this;
    if ( SLODWORD(y) >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= LODWORD(y) )
        {
          v12 = sub_B52A88(this);
          sub_B52A28(v12, 0LL);
        }
        v8 = *((_QWORD *)&v6->fields.EventLocalPos.fields.x + (int)v7);
        if ( !v8 )
          break;
        v9 = *(UnityEngine_Object_o **)(v8 + 16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v10 = *(UnityEngine_Object_o **)(v8 + 24);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = *(TitleInfoEventBulletinBoardComponent_o **)(v8 + 24);
            if ( !this )
              break;
            this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
            if ( !*(_QWORD *)(v8 + 16) )
              break;
            v11 = (UnityEngine_GameObject_o *)this;
            this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Component__get_transform(
                                                               *(UnityEngine_Component_o **)(v8 + 16),
                                                               0LL);
            if ( !this )
              break;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(v11, localPosition.fields.y + v4->fields.rubyRelativePositionY, 0LL);
          }
        }
        y = v6->fields.TerminalLocalPos.fields.y;
        if ( (int)++v7 >= SLODWORD(y) )
          return;
      }
LABEL_24:
      sub_B52A5C(this, lineMessage);
    }
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  int v4; // w20
  const MethodInfo *v5; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v6; // [xsp+0h] [xbp-70h] BYREF
  int v7; // [xsp+2Ch] [xbp-44h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v8; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42B43ED & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_42B43ED = 1;
  }
  memset(&v8, 0, 32);
  v7 = 0;
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v6,
    showStatusDic,
    (const MethodInfo_2EF86F4 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v8.fields.dictionary = *(_OWORD *)&v6.fields.dictionary;
  v8.fields.current = v6.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v8,
            (const MethodInfo_28855E8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( !BYTE4(v8.fields.current.fields.key) )
    {
      v6.fields.getEnumeratorRetType = 62;
      v7 = 1;
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        &v8,
        (const MethodInfo_2885738 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      v7 = 0;
      return;
    }
  }
  v6.fields.getEnumeratorRetType = 62;
  v7 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v8,
    (const MethodInfo_2885738 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v7 = 0;
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v6,
    showStatusDic,
    (const MethodInfo_2EF86F4 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v8.fields.dictionary = *(_OWORD *)&v6.fields.dictionary;
  v8.fields.current = v6.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v8,
            (const MethodInfo_28855E8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
    EventRewardSaveData__SetBulletInBoardMessageState(
      this->fields.eventId,
      (int32_t)v8.fields.current.fields.key,
      0,
      0LL);
  v6.fields.getEnumeratorRetType = 131;
  v4 = ++v7;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v8,
    (const MethodInfo_2885738 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  if ( v4 )
  {
    if ( *((_DWORD *)&v6.fields.current.fields.value + v4 + 1) == 131 )
      v7 = v4 - 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
LABEL_18:
    sub_B52A5C(showStatusDic, method);
  System_Collections_Generic_Dictionary_int__bool___Clear(
    showStatusDic,
    (const MethodInfo_2EF8344 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  TitleInfoEventBulletinBoardComponent__ResetShowStatus(this, v5);
}


void __fastcall TitleInfoEventBulletinBoardComponent__DeleteLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *label,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42B43E2 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B43E2 = 1;
  }
  if ( !label )
    sub_B52A5C(this, label);
  ScriptLineMessage__DeleteLabels(label, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
}


System_String_o *__fastcall TitleInfoEventBulletinBoardComponent__GetMessage(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  System_String_o **p_monitor; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *monitor; // x1
  __int64 v17; // x0
  __int64 v18; // x1
  _DWORD *v19; // x8
  __int64 v20; // x8
  System_String_o *v21; // x19
  char v22; // w20
  __int64 v23; // x0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B43EF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    byte_42B43EF = 1;
  }
  memset(&v25, 0, sizeof(v25));
  result = (System_String_o *)this->fields.messages;
  if ( result )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)result,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    v25 = v24;
    do
    {
      v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v25,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v6 )
      {
        v22 = 0;
        v21 = 0LL;
        goto LABEL_16;
      }
      current = v25.fields.current;
      if ( !v25.fields.current )
        sub_B52A5C(v6, v7);
    }
    while ( LODWORD(v25.fields.current[1].klass) != id );
    p_monitor = (System_String_o **)&v25.fields.current[1].monitor;
    if ( System_String__IsNullOrEmpty((System_String_o *)v25.fields.current[1].monitor, 0LL)
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[2].monitor, 0LL) )
    {
      this->fields.isSwitchWipe = 1;
      monitor = (struct EventBulletinBoardEntity_BulletinBoardInfo_array *)current[2].monitor;
      this->fields.switchInfo = monitor;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.switchInfo,
        (System_Int32_array **)monitor,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v19 = current[2].monitor;
      if ( !v19 )
        sub_B52A5C(v17, v18);
      if ( !v19[6] )
      {
        v23 = sub_B52A88(v17);
        sub_B52A28(v23, 0LL);
      }
      v20 = *((_QWORD *)v19 + 4);
      if ( !v20 )
        sub_B52A5C(v17, v18);
      p_monitor = (System_String_o **)(v20 + 32);
    }
    v21 = *p_monitor;
    v22 = 2;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( ((v22 + 2) & 3) != 0 )
      return 0LL;
    else
      return v21;
  }
  return result;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextMessageId(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  bool v10; // zf
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x23
  TitleInfoEventBulletinBoardComponent_o *v12; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x24
  System_Func_TSource__bool__o *v14; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x0
  TitleInfoEventBulletinBoardComponent___c_c *v16; // x0
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__57_0; // x22
  Il2CppObject *v19; // x23
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v29; // x22
  WeightRate_int__o *v30; // x21
  int size; // w8
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v32; // x8
  int32_t buff; // w23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int v36; // w19
  int32_t v37; // w0
  int32_t v38; // w0
  int32_t eventId; // w0
  const MethodInfo *v40; // x3
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *v42; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+10h] [xbp-C0h] BYREF
  int v44; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42B43EE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_B52984(&Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__);
    sub_B52984(&Method_System_Func_EventBulletinBoardEntity__bool___ctor__);
    sub_B52984(&System_Func_EventBulletinBoardEntity__bool__TypeInfo);
    sub_B52984(&Method_System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity___ctor__);
    sub_B52984(&System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
    sub_B52984(&Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__);
    sub_B52984(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__);
    sub_B52984(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo);
    sub_B52984(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__);
    sub_B52984(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo);
    sub_B52984(&TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    sub_B52984(&Method_WeightRate_int___ctor__);
    sub_B52984(&Method_WeightRate_int__getData__);
    sub_B52984(&Method_WeightRate_int__getData___68552472);
    sub_B52984(&Method_WeightRate_int__getTotalWeight__);
    sub_B52984(&Method_WeightRate_int__setWeight__);
    sub_B52984(&WeightRate_int__TypeInfo);
    byte_42B43EE = 1;
  }
  memset(&v46, 0, 32);
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  v42 = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *)sub_B52A54(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo);
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0___ctor(v42, 0LL);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v3);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_51;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v43,
    showStatusDic,
    (const MethodInfo_2EF86F4 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v46.fields.dictionary = *(_OWORD *)&v43.fields.dictionary;
  v46.fields.current = v43.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v46,
            (const MethodInfo_28855E8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    v7 = sub_B52A54(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo);
    TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1___ctor(
      (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)v7,
      0LL);
    if ( !v7 )
      sub_B52A5C(v8, v9);
    v10 = ((__int64)v46.fields.current.fields.key & 0xFF00000000LL) == 0;
    *(_QWORD *)(v7 + 16) = v46.fields.current.fields.key;
    if ( v10 )
    {
      messages = this->fields.messages;
      v12 = this;
      v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v13,
        (Il2CppObject *)v7,
        Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__,
        (const MethodInfo_2BC90BC *)Method_System_Func_EventBulletinBoardEntity__bool___ctor__);
      v14 = (System_Func_TSource__bool__o *)v13;
      this = v12;
      v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)messages,
                                                                     v14,
                                                                     (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
      if ( !v4 )
        sub_B52A5C(v15, v15);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v4,
        v15,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    }
  }
  v43.fields.getEnumeratorRetType = 123;
  v44 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v46,
    (const MethodInfo_2885738 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v44 = 0;
  v16 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  if ( (BYTE3(TitleInfoEventBulletinBoardComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventBulletinBoardComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    v16 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__57_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B52A54(System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__57_0,
      v19,
      Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__,
      (const MethodInfo_2BD41BC *)Method_System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity___ctor__);
    v20 = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    v20->__9__57_0 = (struct System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__o *)_9__57_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v20->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Linq_Enumerable__Aggregate_LastUsedDeckNumberManager_LastUsedInfo_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                                          (System_Func_TSource__TSource__TSource__o *)_9__57_0,
                                                                          (const MethodInfo_1A52220 *)Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
  if ( !showStatusDic )
    goto LABEL_51;
  if ( !v42 )
    goto LABEL_51;
  v42->fields.minDispOrderNum = showStatusDic->fields.count;
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v42,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__,
    (const MethodInfo_2BC90BC *)Method_System_Func_EventBulletinBoardEntity__bool___ctor__);
  v28 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v4,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
  v29 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v28,
                                                                                         (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  v30 = (WeightRate_int__o *)sub_B52A54(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v30, (const MethodInfo_2C1C5B0 *)Method_WeightRate_int___ctor__);
  if ( !v29 )
    goto LABEL_51;
  size = v29->fields._size;
  if ( size >= 2 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v43,
      v29,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    v45.fields.current = v43.fields.current.fields.key;
    *(_OWORD *)&v45.fields.list = *(_OWORD *)&v43.fields.dictionary;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v45,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v34 )
        break;
      if ( !v45.fields.current )
        sub_B52A5C(v34, v35);
      if ( !v30 )
        sub_B52A5C(v34, v35);
      WeightRate_int___setWeight(
        v30,
        HIDWORD(v45.fields.current[2].klass),
        (int32_t)v45.fields.current[1].klass,
        (const MethodInfo_2C1B778 *)Method_WeightRate_int__setWeight__);
    }
    v43.fields.getEnumeratorRetType = 276;
    v36 = ++v44;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v45,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( v36 && *((_DWORD *)&v43.fields.current.fields.value + v36 + 1) == 276 )
      v44 = v36 - 1;
    if ( !v30 )
      goto LABEL_51;
    v37 = UnityEngine_Random__Range_35650740(0, v30->fields.totalweight, 0LL);
    showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)WeightRate_int___getData(
                                                                            v30,
                                                                            v37,
                                                                            (const MethodInfo_2C1BBFC *)Method_WeightRate_int__getData__);
    buff = (int)showStatusDic;
  }
  else
  {
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v32 = v29->fields._items->m_Items[0];
    if ( !v32 )
      goto LABEL_51;
    buff = (int32_t)v32->fields.buff;
  }
  if ( this->fields.isLastSeed )
  {
    showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                                            (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    if ( (int)showStatusDic >= 2 && buff == this->fields.lastMessageId )
    {
      if ( !v30 )
        goto LABEL_51;
      v38 = UnityEngine_Random__Range_35650740(0, v30->fields.totalweight, 0LL);
      buff = WeightRate_int___getData_46251528(
               v30,
               v38,
               this->fields.lastMessageId,
               (const MethodInfo_2C1BE08 *)Method_WeightRate_int__getData___68552472);
    }
    eventId = this->fields.eventId;
    this->fields.isLastSeed = 0;
    EventRewardSaveData__SetBulletInBoardLastMessageId(eventId, 0, 0LL);
  }
  if ( !v4 )
LABEL_51:
    sub_B52A5C(showStatusDic, v5);
  if ( v4->fields._size == 1 )
  {
    this->fields.isLastSeed = 1;
    this->fields.lastMessageId = buff;
    EventRewardSaveData__SetBulletInBoardLastMessageId(buff, 0, 0LL);
  }
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, buff, 1, 0LL);
  TitleInfoEventBulletinBoardComponent__SetShowStatus(this, buff, 1, v40);
  return buff;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextRandomIdx(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *randomQue; // x0
  System_Collections_Generic_List_T__o **p_randomQue; // x20
  System_Collections_Generic_List_T__o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_T__o *v7; // x22
  int size; // w8
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int32_t v10; // w21
  int v11; // w22
  System_Collections_Generic_List_int__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_T__o *v20; // x19

  if ( (byte_42B43F1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    byte_42B43F1 = 1;
  }
  p_randomQue = (System_Collections_Generic_List_T__o **)&this->fields.randomQue;
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___RemoveAt(
      randomQue,
      0,
      (const MethodInfo_3058C68 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v7 = *p_randomQue;
    if ( !*p_randomQue )
      goto LABEL_22;
    size = v7->fields._size;
    if ( size <= 1 )
    {
      if ( !size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      messages = this->fields.messages;
      if ( !messages )
LABEL_22:
        sub_B52A5C(v5, v6);
      v10 = 0;
      v11 = (int)v7->fields._items->m_Items[0];
      while ( v10 < messages->fields._size )
      {
        if ( v11 != v10 )
        {
          v5 = *p_randomQue;
          if ( !*p_randomQue )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)v5,
            v10,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          messages = this->fields.messages;
        }
        ++v10;
        if ( !messages )
          goto LABEL_22;
      }
      v5 = TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
             *p_randomQue,
             1,
             (const MethodInfo_1F7C044 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    }
  }
  else
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.randomQue = v12;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.randomQue,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v19);
  }
  v20 = *p_randomQue;
  if ( !*p_randomQue )
    goto LABEL_22;
  if ( !v20->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  return (int32_t)v20->fields._items->m_Items[0];
}


void __fastcall TitleInfoEventBulletinBoardComponent__Init(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t dispType,
        int32_t eventId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *v11; // x22
  UnityEngine_Component_o *bulletinBg; // x0
  __int64 v13; // x1
  struct UIPanel_o *scrollerPanel; // x8
  float z; // s0
  System_String_o *baseIconName; // x22
  UISprite_o *baseIcon; // x23
  System_String_o *wipeIconFrameName; // x22
  UISprite_o *wipeIconFrame; // x23
  System_Collections_Generic_Dictionary_int__bool__o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t BulletInBoardLastMessageId; // w0
  const MethodInfo *v28; // x2
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B43E3 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    byte_42B43E3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v29 = TitleInfoEventBulletinBoardComponent__localPosByDispType(this, dispType, v10);
  GameObjectExtensions__SetLocalPosition(gameObject, v29, 0LL);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v11, one, 0LL);
  scrollerPanel = this->fields.scrollerPanel;
  if ( !scrollerPanel )
    goto LABEL_18;
  z = scrollerPanel->fields.mClipRange.fields.z;
  this->fields.left = z * -0.5;
  this->fields.right = z * 0.5;
  baseIcon = this->fields.baseIcon;
  baseIconName = this->fields.baseIconName;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseIcon, baseIconName, 0LL);
  AtlasManager__SetBanner(this->fields.bulletinBg, this->fields.bulletinBgName, 0LL);
  AtlasManager__SetBanner(this->fields.bulletinTitle, this->fields.bulletinTitleName, 0LL);
  if ( this->fields.isDispWipeIcon )
  {
    wipeIconFrame = this->fields.wipeIconFrame;
    wipeIconFrameName = this->fields.wipeIconFrameName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetBanner(wipeIconFrame, wipeIconFrameName, 0LL);
  }
  bulletinBg = (UnityEngine_Component_o *)this->fields.baseIcon;
  if ( !bulletinBg
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))bulletinBg->klass[2]._1.typeMetadataHandle)(
          bulletinBg,
          bulletinBg->klass[2]._1.interopData),
        (bulletinBg = (UnityEngine_Component_o *)this->fields.bulletinBg) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))bulletinBg->klass[2]._1.typeMetadataHandle)(
          bulletinBg,
          bulletinBg->klass[2]._1.interopData),
        (bulletinBg = (UnityEngine_Component_o *)this->fields.bulletinTitle) == 0LL)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))bulletinBg->klass[2]._1.typeMetadataHandle)(
          bulletinBg,
          bulletinBg->klass[2]._1.interopData),
        (bulletinBg = (UnityEngine_Component_o *)this->fields.baseIcon) == 0LL)
    || (bulletinBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bulletinBg, 0LL)) == 0LL )
  {
LABEL_18:
    sub_B52A5C(bulletinBg, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bulletinBg, this->fields.isDispBaseIcon, 0LL);
  this->fields.eventId = eventId;
  v20 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v20,
    (const MethodInfo_2EF75B8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.showStatusDic = v20;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.showStatusDic,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  BulletInBoardLastMessageId = EventRewardSaveData__GetBulletInBoardLastMessageId(this->fields.eventId, 0LL);
  this->fields.lastMessageId = BulletInBoardLastMessageId;
  this->fields.isLastSeed = BulletInBoardLastMessageId > 0;
  TitleInfoEventBulletinBoardComponent__LoadAssetData(this, callBack, v28);
}


System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_1F7C044 *method)
{
  int32_t v6; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  unsigned int v9; // w23
  unsigned int v10; // w24
  unsigned int v11; // w25
  unsigned int v12; // w0

  if ( !list )
    sub_B52A5C(0LL, withoutFirst);
  v6 = ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)();
  v7 = withoutFirst;
  if ( v6 > v7 )
  {
    v8 = v6;
    v9 = v7;
    do
    {
      v10 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
              list,
              v9);
      v11 = UnityEngine_Random__Range_35650740(v7, v8, 0LL);
      v12 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
              list,
              v11);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, _QWORD))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v9,
        v12);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, _QWORD))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v11,
        v10);
      ++v9;
    }
    while ( v8 != v9 );
  }
  return list;
}


System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle_object_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_1F7C13C *method)
{
  int32_t v6; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  unsigned int v9; // w23
  __int64 v10; // x24
  unsigned int v11; // w25
  __int64 v12; // x0

  if ( !list )
    sub_B52A5C(0LL, withoutFirst);
  v6 = ((__int64 (*)(void))method->rgctx_data->_0_System_Collections_Generic_List_T__get_Count->methodPointer)();
  v7 = withoutFirst;
  if ( v6 > v7 )
  {
    v8 = v6;
    v9 = v7;
    do
    {
      v10 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
              list,
              v9);
      v11 = UnityEngine_Random__Range_35650740(v7, v8, 0LL);
      v12 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD))method->rgctx_data->_1_System_Collections_Generic_List_T__get_Item->methodPointer)(
              list,
              v11);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, __int64))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v9,
        v12);
      ((void (__fastcall *)(System_Collections_Generic_List_T__o *, _QWORD, __int64))method->rgctx_data->_2_System_Collections_Generic_List_T__set_Item->methodPointer)(
        list,
        v11,
        v10);
      ++v9;
    }
    while ( v8 != v9 );
  }
  return list;
}


void __fastcall TitleInfoEventBulletinBoardComponent__LoadAssetData(
        TitleInfoEventBulletinBoardComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *v20; // x0
  System_String_o *v21; // x19
  AssetLoader_LoadEndDataHandler_o *v22; // x20

  if ( (byte_42B43F0 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__);
    sub_B52984(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo);
    sub_B52984(&StringLiteral_6245/*"EventUI/Prefabs/"*/);
    byte_42B43F0 = 1;
  }
  v5 = sub_B52A54(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo);
  TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___ctor(
    (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)v5,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callBack;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)callBack, v14, v15, v16, v17, v18, v19);
  v20 = System_Int32__ToString((int)this + 248, 0LL);
  v21 = System_String__Concat_44568316((System_String_o *)StringLiteral_6245/*"EventUI/Prefabs/"*/, v20, 0LL);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v21, v22, 1, 0LL);
}


void __fastcall TitleInfoEventBulletinBoardComponent__ResetRandomQueue(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v2; // x19
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int32_t v4; // w20

  v2 = this;
  if ( (byte_42B43F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B52984(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    byte_42B43F2 = 1;
  }
  messages = v2->fields.messages;
  if ( !messages )
LABEL_8:
    sub_B52A5C(this, method);
  v4 = 0;
  while ( 1 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.randomQue;
    if ( v4 >= messages->fields._size )
      break;
    if ( this )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        v4,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      messages = v2->fields.messages;
      ++v4;
      if ( messages )
        continue;
    }
    goto LABEL_8;
  }
  TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
    (System_Collections_Generic_List_T__o *)this,
    0,
    (const MethodInfo_1F7C044 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
}


void __fastcall TitleInfoEventBulletinBoardComponent__ResetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x23
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42B43EC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    byte_42B43EC = 1;
  }
  memset(&v16, 0, sizeof(v16));
  messages = this->fields.messages;
  if ( !messages )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)messages,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v16,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B52A5C(v4, v5);
    if ( EventRewardSaveData__GetBulletInBoardMessageState(
           this->fields.eventId,
           (int32_t)v16.fields.current[1].klass,
           0LL) )
    {
      TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 1, v8);
    }
    showStatusDic = this->fields.showStatusDic;
    if ( !showStatusDic )
      sub_B52A5C(0LL, v7);
    if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            showStatusDic,
            (int32_t)current[1].klass,
            (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      goto LABEL_14;
    v11 = this->fields.showStatusDic;
    if ( !v11 )
      sub_B52A5C(0LL, v10);
    if ( System_Collections_Generic_Dictionary_int__bool___get_Item(
           v11,
           (int32_t)current[1].klass,
           (const MethodInfo_2EF80A4 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
    {
LABEL_14:
      v13 = this->fields.showStatusDic;
      if ( !v13 )
        sub_B52A5C(0LL, v10);
      if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
             v13,
             (int32_t)current[1].klass,
             (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      {
        continue;
      }
    }
    TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 0, v12);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__SetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isShow,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0

  if ( (byte_42B43EB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    byte_42B43EB = 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic
    || (showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                                                                showStatusDic,
                                                                                id,
                                                                                (const MethodInfo_2EF83DC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__),
        !this->fields.showStatusDic) )
  {
    sub_B52A5C(showStatusDic, *(_QWORD *)&id);
  }
  if ( ((unsigned __int8)showStatusDic & 1) != 0 )
    System_Collections_Generic_Dictionary_int__bool___set_Item(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_2EF813C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  else
    System_Collections_Generic_Dictionary_int__bool___Add(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_2EF8168 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, id, isShow, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__SetUp(
        TitleInfoEventBulletinBoardComponent_o *this,
        System_Collections_Generic_List_EventBulletinBoardEntity__o *boardMessages,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v11; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UILabel_o *svtNameLabel; // x0
  const MethodInfo *v14; // x3

  if ( (byte_42B43E5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B43E5 = 1;
  }
  this->fields.messages = boardMessages;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.messages,
    (System_Int32_array **)boardMessages,
    *(System_String_array ***)&eventId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventId = eventId;
  TitleInfoEventBulletinBoardComponent__resetLabelList(this, v11);
  coroutine = this->fields.coroutine;
  if ( coroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_35612476((UnityEngine_MonoBehaviour_o *)this, coroutine, 0LL);
  svtNameLabel = this->fields.svtNameLabel;
  if ( !svtNameLabel
    || (UILabel__set_text(svtNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon2) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.showStatusDic) == 0LL) )
  {
    sub_B52A5C(svtNameLabel, coroutine);
  }
  System_Collections_Generic_Dictionary_int__bool___Clear(
    (System_Collections_Generic_Dictionary_int__bool__o *)svtNameLabel,
    (const MethodInfo_2EF8344 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  if ( boardMessages )
  {
    if ( boardMessages->fields._size >= 1 )
      TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        this,
        this->fields.right + *(&this->fields.setUpSpaceBetweenMessages + 1),
        0,
        1,
        v14);
  }
}


System_Collections_IEnumerator_o *__fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isSetUp,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42B43E8 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo);
    byte_42B43E8 = 1;
  }
  v7 = sub_B52A54(TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo);
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51___ctor(
    (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 48) = id;
  *(_BYTE *)(v7 + 32) = isSetUp;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v2; // x19
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x23
  EventBulletinBoardEntity_BulletinBoardInfo_o *v5; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v6; // x9
  __int64 v7; // x8
  __int64 v8; // x10
  EventBulletinBoardEntity_BulletinBoardInfo_o *v9; // x9
  UISprite_o *v10; // x21
  int32_t eventId; // w20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x22
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x0
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v17; // x8
  __int64 v18; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_42B43E9 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B52984(&StringLiteral_18811/*"face_{0:D3}"*/);
    byte_42B43E9 = 1;
  }
  switchInfo = v2->fields.switchInfo;
  if ( !switchInfo )
    goto LABEL_25;
  switchCount = v2->fields.switchCount;
  if ( (unsigned int)switchCount >= switchInfo->max_length )
    goto LABEL_26;
  v5 = switchInfo->m_Items[switchCount];
  if ( !v5 )
    goto LABEL_25;
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.svtNameLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)this, v5->fields.name, 0LL);
  v6 = v2->fields.switchInfo;
  v7 = 160LL;
  if ( (switchCount & 1) != 0 )
    v7 = 168LL;
  if ( !v6 )
    goto LABEL_25;
  v8 = v2->fields.switchCount;
  if ( (unsigned int)v8 >= v6->max_length )
  {
LABEL_26:
    v18 = sub_B52A88(this);
    sub_B52A28(v18, 0LL);
  }
  v9 = v6->m_Items[v8];
  if ( !v9 )
    goto LABEL_25;
  v10 = *(UISprite_o **)((char *)&v2->klass + v7);
  eventId = v2->fields.eventId;
  iconId = v9->fields.iconId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v13 = System_String__Format((System_String_o *)StringLiteral_18811/*"face_{0:D3}"*/, v12, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28377220(eventId, v10, v13, 0LL);
  if ( (switchCount & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon2;
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      TweenAlpha__Begin(gameObject, v2->fields.wipeIconCrossFadeTime, 0.0, 0LL);
      this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon;
      if ( this )
        goto LABEL_21;
    }
LABEL_25:
    sub_B52A5C(this, method);
  }
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon;
  if ( !this )
    goto LABEL_25;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  TweenAlpha__Begin(v14, v2->fields.wipeIconCrossFadeTime, 0.0, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon2;
  if ( !this )
    goto LABEL_25;
LABEL_21:
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)TweenAlpha__Begin(v16, v2->fields.wipeIconCrossFadeTime, 1.0, 0LL);
  v17 = v2->fields.switchInfo;
  if ( !v17 )
    goto LABEL_25;
  if ( v2->fields.switchCount >= (signed int)(v17->max_length - 1) )
  {
    v2->fields.isSwitchWipe = 0;
    v2->fields.switchCount = 0;
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__Update(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  char v5; // w22
  float v6; // s0
  float v7; // s9
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  float v12; // s0
  UnityEngine_GameObject_o *v13; // x0
  float LocalPositionX; // s0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_ScriptLineMessage__o *v17; // x20
  float right; // s0
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B43E1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__);
    byte_42B43E1 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  labels = this->fields.labels;
  if ( labels )
  {
    messages = this->fields.messages;
    if ( messages )
    {
      if ( messages->fields._size < 1 )
        return;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v20,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)labels,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
      v5 = 0;
      v21 = v20;
      v6 = 0.0;
LABEL_7:
      v7 = v6;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v21,
               (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
        if ( !v8 )
          break;
        current = v21.fields.current;
        if ( !v21.fields.current )
          sub_B52A5C(v8, v9);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21.fields.current, 0LL);
        v12 = -(float)(UnityEngine_Time__get_deltaTime(0LL) * this->fields.spaceBetweenMessages);
        GameObjectExtensions__AddLocalPositionX(gameObject, v12, 0LL);
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(v13, 0LL);
        v6 = LocalPositionX + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)current, 0LL).fields.x;
        v5 |= v6 < this->fields.left;
        if ( v6 > v7 )
          goto LABEL_7;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v21,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
      if ( (v5 & 1) == 0 )
        goto LABEL_18;
      v17 = this->fields.labels;
      if ( v17 )
      {
        if ( !v17->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        TitleInfoEventBulletinBoardComponent__DeleteLabel(
          (TitleInfoEventBulletinBoardComponent_o *)labels,
          v17->fields._items->m_Items[0],
          v15);
        labels = this->fields.labels;
        if ( labels )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)labels,
            0,
            (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
LABEL_18:
          right = this->fields.right;
          if ( v7 < right )
          {
            if ( this->fields.isSwitchWipe )
            {
              ++this->fields.switchCount;
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(this, right, 1, 0, v16);
              TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(this, v19);
            }
            else
            {
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(
                this,
                v7 + this->fields.setUpSpaceBetweenMessages,
                0,
                0,
                v16);
            }
          }
          return;
        }
      }
    }
    sub_B52A5C(labels, method);
  }
}


UnityEngine_Vector3_o __fastcall TitleInfoEventBulletinBoardComponent__localPosByDispType(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  char x_low; // w8
  float *p_y; // x8
  float *p_z; // x9
  float *p_messageScrollSpeed; // x10
  float v9; // s1
  float v10; // s0
  float v11; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B43E4 & 1) == 0 )
  {
    sub_B52984(&FSUtility_TypeInfo);
    byte_42B43E4 = 1;
  }
  x_low = LOBYTE(this->fields.TerminalFSLocalPos.fields.x);
  if ( x_low )
  {
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    x_low = !FSUtility__IsUnderVista(0LL);
  }
  if ( dispType == 1 )
  {
    if ( (x_low & 1) != 0 )
    {
      p_y = &this->fields.EventFSLocalPos.fields.y;
      p_z = &this->fields.EventFSLocalPos.fields.z;
      p_messageScrollSpeed = &this->fields.messageScrollSpeed;
    }
    else
    {
      p_y = &this->fields.EventLocalPos.fields.y;
      p_z = &this->fields.EventLocalPos.fields.z;
      p_messageScrollSpeed = (float *)&this->fields.enableFSPos;
    }
  }
  else if ( (x_low & 1) != 0 )
  {
    p_y = &this->fields.TerminalFSLocalPos.fields.y;
    p_z = &this->fields.TerminalFSLocalPos.fields.z;
    p_messageScrollSpeed = &this->fields.EventFSLocalPos.fields.x;
  }
  else
  {
    p_y = &this->fields.TerminalLocalPos.fields.y;
    p_z = &this->fields.TerminalLocalPos.fields.z;
    p_messageScrollSpeed = &this->fields.EventLocalPos.fields.x;
  }
  v9 = *p_z;
  v10 = *p_y;
  v11 = *p_messageScrollSpeed;
  result.fields.z = v11;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}


void __fastcall TitleInfoEventBulletinBoardComponent__resetLabelList(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o **p_labels; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_int__o *randomQue; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B43E6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ScriptLineMessage__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    sub_B52984(&System_Collections_Generic_List_ScriptLineMessage__TypeInfo);
    byte_42B43E6 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  p_labels = (System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.labels;
  labels = this->fields.labels;
  if ( labels )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)labels,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v17,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
      if ( !v5 )
        break;
      TitleInfoEventBulletinBoardComponent__DeleteLabel(
        (TitleInfoEventBulletinBoardComponent_o *)v5,
        (ScriptLineMessage_o *)v17.fields.current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    if ( !*p_labels )
      sub_B52A5C(0LL, v7);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      *p_labels,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ScriptLineMessage__Clear__);
  }
  else
  {
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ScriptLineMessage__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v8,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    *p_labels = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.labels,
      (System_Int32_array **)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___Clear(
      randomQue,
      (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v16);
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51___ctor(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__MoveNext(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *v2; // x19
  int32_t _1__state; // w8
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x23
  __int64 v5; // x8
  float v6; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  bool result; // w0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  struct EventBulletinBoardEntity_o **p_ent_5__3; // x20
  System_String_o *name; // x1
  struct EventBulletinBoardEntity_o *ent_5__3; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v15; // x8
  int32_t eventId; // w20
  UISprite_o *wipeIcon; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventBulletinBoardEntity_o *v21; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v22; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v23; // x8
  float wipeIconFadeOutTime; // s8
  UnityEngine_WaitForSeconds_o *v25; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v27; // x0
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_42AD9D6 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_B52984(&StringLiteral_18811/*"face_{0:D3}"*/);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD9D6 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_41;
    ent_5__3 = v2->fields._ent_5__3;
    if ( !ent_5__3 )
      goto LABEL_41;
    script = ent_5__3->fields.script;
    if ( !script )
      goto LABEL_41;
    if ( script->max_length )
    {
      v15 = script->m_Items[0];
      if ( !v15 )
        goto LABEL_41;
      eventId = _4__this->fields.eventId;
      wipeIcon = _4__this->fields.wipeIcon;
      iconId = v15->fields.iconId;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      v19 = System_String__Format((System_String_o *)StringLiteral_18811/*"face_{0:D3}"*/, v18, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI_28377220(eventId, wipeIcon, v19, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( !this )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)TweenAlpha__Begin(
                                                                                           gameObject,
                                                                                           _4__this->fields.wipeIconFadeInTime,
                                                                                           1.0,
                                                                                           0LL);
      v21 = v2->fields._ent_5__3;
      if ( !v21 )
        goto LABEL_41;
      v22 = v21->fields.script;
      if ( !v22 )
        goto LABEL_41;
      if ( v22->max_length )
      {
        v23 = v22->m_Items[0];
        if ( !v23 )
          goto LABEL_41;
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.svtNameLabel;
        if ( !this )
          goto LABEL_41;
        name = v23->fields.name;
        goto LABEL_38;
      }
    }
    v27 = sub_B52A88(this);
    sub_B52A28(v27, 0LL);
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( this )
      {
        v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        TweenAlpha__Begin(v9, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon2;
        if ( this )
        {
          v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          TweenAlpha__Begin(v10, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
          this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v2->fields._bulletinBoardMst_5__2;
          if ( this )
          {
            p_ent_5__3 = &v2->fields._ent_5__3;
            this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                                                 (WarEntity_o **)&v2->fields._ent_5__3,
                                                                                                 v2->fields.id,
                                                                                                 (const MethodInfo_23E2334 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*p_ent_5__3 )
                goto LABEL_41;
              if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)(*p_ent_5__3)->fields.script, 0LL) )
              {
                wipeIconFadeOutTime = _4__this->fields.wipeIconFadeOutTime;
                v25 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v25, wipeIconFadeOutTime, 0LL);
                v2->fields.__2__current = (Il2CppObject *)v25;
                p__2__current = &v2->fields.__2__current;
                sub_B52920(p__2__current);
                *((_DWORD *)p__2__current - 2) = 2;
                return 1;
              }
            }
            this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.svtNameLabel;
            if ( this )
            {
              name = (System_String_o *)StringLiteral_1/*""*/;
LABEL_38:
              UILabel__set_text((UILabel_o *)this, name, 0LL);
              return 0;
            }
          }
        }
      }
    }
LABEL_41:
    sub_B52A5C(this, method);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v2->fields._bulletinBoardMst_5__2 = (struct EventBulletinBoardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
  sub_B52920(&v2->fields._bulletinBoardMst_5__2);
  if ( !_4__this )
    goto LABEL_41;
  if ( v2->fields.isSetUp )
    v5 = 208LL;
  else
    v5 = 204LL;
  v6 = *(float *)((char *)&_4__this->klass + v5);
  v7 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v7, v6, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v7;
  sub_B52920(&v2->fields.__2__current);
  result = 1;
  v2->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_Collections_IEnumerator_Reset(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_Collections_IEnumerator_get_Current(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_IDisposable_Dispose(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventBulletinBoardComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD9D3 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    byte_42AD9D3 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventBulletinBoardComponent___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall TitleInfoEventBulletinBoardComponent___c___ctor(
        TitleInfoEventBulletinBoardComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


EventBulletinBoardEntity_o *__fastcall TitleInfoEventBulletinBoardComponent___c___GetNextMessageId_b__57_0(
        TitleInfoEventBulletinBoardComponent___c_o *this,
        EventBulletinBoardEntity_o *a,
        EventBulletinBoardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  if ( a->fields.dispOrder >= b->fields.dispOrder )
    return b;
  else
    return a;
}


void __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0___GetNextMessageId_b__1(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *this,
        EventBulletinBoardEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.dispOrder == this->fields.minDispOrderNum;
}


void __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1___GetNextMessageId_b__2(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *this,
        EventBulletinBoardEntity_o *t,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *v4; // x20

  v4 = this;
  if ( (byte_42AD9D4 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    byte_42AD9D4 = 1;
  }
  if ( !t )
    sub_B52A5C(this, t);
  return t->fields.id == v4->fields.showStatus.fields.key;
}


void __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___LoadAssetData_b__0(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *v4; // x19
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x8
  struct TitleInfoEventBulletinBoardComponent_o *v6; // x8
  int32_t eventId; // w20
  System_Action_o *callBack; // x19

  v4 = this;
  if ( (byte_42AD9D5 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)sub_B52984(&AtlasManager_TypeInfo);
    byte_42AD9D5 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.bulletinBoardAssetData = assetData,
        sub_B52920(&_4__this->fields.bulletinBoardAssetData),
        (v6 = v4->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(this, assetData);
  }
  eventId = v6->fields.eventId;
  callBack = v4->fields.callBack;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_28376908(eventId, callBack, 1, 0LL);
}