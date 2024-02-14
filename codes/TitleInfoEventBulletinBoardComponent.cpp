void __fastcall TitleInfoEventBulletinBoardComponent___ctor(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  this->fields.rubyRelativePositionY = 12.0;
  *(_QWORD *)&this->fields.spaceBetweenMessages = 0x42AA000040A00000LL;
  *(_OWORD *)&this->fields.wipeIconFadeOutStartTime = xmmword_3216180;
  this->fields.wipeIconCrossFadeTime = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        float setPos,
        bool isNotRandom,
        bool isSetUp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_GameObject_o *baseLabel; // x22
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  UnityEngine_GameObject_o *v14; // x23
  ScriptLineMessage_o *v15; // x22
  const MethodInfo *v16; // x1
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x9
  EventBulletinBoardEntity_BulletinBoardInfo_o *v19; // x8
  UnityEngine_GameObject_o *msg; // x1
  int32_t NextMessageId; // w24
  const MethodInfo *v22; // x2
  struct UISprite_o *baseIcon; // x8
  float mWidth; // s0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  System_Collections_IEnumerator_o *v27; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42187D0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___, isNotRandom);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptLineMessage__Add__, v9);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_42187D0 = 1;
  }
  baseLabel = this->fields.baseLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)baseLabel,
                                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_23;
  v14 = Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
  if ( !Component_srcLineSprite )
    goto LABEL_23;
  v15 = (ScriptLineMessage_o *)Component_srcLineSprite;
  ScriptLineMessage__Init((ScriptLineMessage_o *)Component_srcLineSprite, 0LL);
  if ( isNotRandom )
  {
    switchInfo = this->fields.switchInfo;
    if ( switchInfo )
    {
      switchCount = this->fields.switchCount;
      if ( (unsigned int)switchCount >= switchInfo->max_length )
      {
        v35 = sub_B0D9A8(Component_srcLineSprite);
        sub_B0D948(v35, 0LL);
      }
      v19 = switchInfo->m_Items[switchCount];
      if ( v19 )
      {
        msg = (UnityEngine_GameObject_o *)v19->fields.msg;
        NextMessageId = -1;
        goto LABEL_18;
      }
    }
LABEL_23:
    sub_B0D97C(Component_srcLineSprite);
  }
  NextMessageId = TitleInfoEventBulletinBoardComponent__GetNextMessageId(this, v16);
  Component_srcLineSprite = (UnityEngine_GameObject_o *)TitleInfoEventBulletinBoardComponent__GetMessage(
                                                          this,
                                                          NextMessageId,
                                                          v22);
  msg = Component_srcLineSprite;
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
  ((void (__fastcall *)(ScriptLineMessage_o *, UnityEngine_GameObject_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v15->klass->vtable._7_SetText.method)(
    v15,
    msg,
    0LL,
    0LL,
    0LL,
    0LL,
    v15->klass[1]._1.image);
  UnityEngine_GameObject__SetActive(v14, 1, 0LL);
  GameObjectExtensions__SetParent(v14, (UnityEngine_Component_o *)this->fields.scrollerPanel, 0LL);
  v36.fields.y = v15->fields.rubyLineHeight;
  v36.fields.x = 0.0;
  v36.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(v14, v36, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v14, one, 0LL);
  GameObjectExtensions__SetLocalPositionX(v14, setPos, 0LL);
  TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(this, v15, v25);
  Component_srcLineSprite = (UnityEngine_GameObject_o *)this->fields.labels;
  if ( !Component_srcLineSprite )
    goto LABEL_23;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ScriptLineMessage__Add__);
  if ( !isNotRandom && this->fields.isDispWipeIcon )
  {
    v27 = TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(this, NextMessageId, isSetUp, v26);
    started = UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v27, 0LL);
    this->fields.coroutine = started;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.coroutine,
      (System_Int32_array **)started,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
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
  if ( (byte_42187D3 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, lineMessage);
    byte_42187D3 = 1;
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
          v12 = sub_B0D9A8(this);
          sub_B0D948(v12, 0LL);
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
      sub_B0D97C(this);
    }
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  int v10; // w20
  const MethodInfo *v11; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+0h] [xbp-70h] BYREF
  int v13; // [xsp+2Ch] [xbp-44h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42187D6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v8);
    byte_42187D6 = 1;
  }
  memset(&v14, 0, 32);
  v13 = 0;
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v12,
    showStatusDic,
    (const MethodInfo_2E624AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v14.fields.dictionary = *(_OWORD *)&v12.fields.dictionary;
  v14.fields.current = v12.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v14,
            (const MethodInfo_280C7EC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( !BYTE4(v14.fields.current.fields.key) )
    {
      v12.fields.getEnumeratorRetType = 62;
      v13 = 1;
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        &v14,
        (const MethodInfo_280C93C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      v13 = 0;
      return;
    }
  }
  v12.fields.getEnumeratorRetType = 62;
  v13 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v14,
    (const MethodInfo_280C93C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v13 = 0;
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v12,
    showStatusDic,
    (const MethodInfo_2E624AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v14.fields.dictionary = *(_OWORD *)&v12.fields.dictionary;
  v14.fields.current = v12.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v14,
            (const MethodInfo_280C7EC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
    EventRewardSaveData__SetBulletInBoardMessageState(
      this->fields.eventId,
      (int32_t)v14.fields.current.fields.key,
      0,
      0LL);
  v12.fields.getEnumeratorRetType = 131;
  v10 = ++v13;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v14,
    (const MethodInfo_280C93C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  if ( v10 )
  {
    if ( *((_DWORD *)&v12.fields.current.fields.value + v10 + 1) == 131 )
      v13 = v10 - 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
LABEL_18:
    sub_B0D97C(showStatusDic);
  System_Collections_Generic_Dictionary_int__bool___Clear(
    showStatusDic,
    (const MethodInfo_2E620FC *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  TitleInfoEventBulletinBoardComponent__ResetShowStatus(this, v11);
}


void __fastcall TitleInfoEventBulletinBoardComponent__DeleteLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *label,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42187CB & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, label);
    byte_42187CB = 1;
  }
  if ( !label )
    sub_B0D97C(this);
  ScriptLineMessage__DeleteLabels(label, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TitleInfoEventBulletinBoardComponent__GetMessage(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *result; // x0
  _BOOL8 v9; // x0
  Il2CppObject *current; // x21
  System_String_o **p_monitor; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *monitor; // x1
  __int64 v19; // x0
  _DWORD *v20; // x8
  __int64 v21; // x8
  System_String_o *v22; // x19
  char v23; // w20
  __int64 v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42187D8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, *(_QWORD *)&id);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v7);
    byte_42187D8 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  result = (System_String_o *)this->fields.messages;
  if ( result )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)result,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    v26 = v25;
    do
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v26,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v9 )
      {
        v23 = 0;
        v22 = 0LL;
        goto LABEL_16;
      }
      current = v26.fields.current;
      if ( !v26.fields.current )
        sub_B0D97C(v9);
    }
    while ( LODWORD(v26.fields.current[1].klass) != id );
    p_monitor = (System_String_o **)&v26.fields.current[1].monitor;
    if ( System_String__IsNullOrEmpty((System_String_o *)v26.fields.current[1].monitor, 0LL)
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[2].monitor, 0LL) )
    {
      this->fields.isSwitchWipe = 1;
      monitor = (struct EventBulletinBoardEntity_BulletinBoardInfo_array *)current[2].monitor;
      this->fields.switchInfo = monitor;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.switchInfo,
        (System_Int32_array **)monitor,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      v20 = current[2].monitor;
      if ( !v20 )
        sub_B0D97C(v19);
      if ( !v20[6] )
      {
        v24 = sub_B0D9A8(v19);
        sub_B0D948(v24, 0LL);
      }
      v21 = *((_QWORD *)v20 + 4);
      if ( !v21 )
        sub_B0D97C(v19);
      p_monitor = (System_String_o **)(v21 + 32);
    }
    v22 = *p_monitor;
    v23 = 2;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( ((v23 + 2) & 3) != 0 )
      return 0LL;
    else
      return v22;
  }
  return result;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextMessageId(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  const MethodInfo *v38; // x1
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x20
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x22
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  bool v49; // zf
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x23
  TitleInfoEventBulletinBoardComponent_o *v51; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x24
  System_Func_TSource__bool__o *v53; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  TitleInfoEventBulletinBoardComponent___c_c *v57; // x0
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__57_0; // x22
  Il2CppObject *v60; // x23
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v70; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v72; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  WeightRate_int__o *v75; // x21
  int size; // w8
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v77; // x8
  int32_t buff; // w23
  _BOOL8 v79; // x0
  int v80; // w19
  int32_t v81; // w0
  int32_t v82; // w0
  int32_t eventId; // w0
  const MethodInfo *v84; // x3
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *v86; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v87; // [xsp+10h] [xbp-C0h] BYREF
  int v88; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v89; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v90; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42187D7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v14);
    sub_B0D8A4(&Method_System_Func_EventBulletinBoardEntity__bool___ctor__, v15);
    sub_B0D8A4(&System_Func_EventBulletinBoardEntity__bool__TypeInfo, v16);
    sub_B0D8A4(
      &Method_System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity___ctor__,
      v17);
    sub_B0D8A4(&System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v24);
    sub_B0D8A4(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v25);
    sub_B0D8A4(&Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__, v26);
    sub_B0D8A4(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__, v27);
    sub_B0D8A4(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo, v28);
    sub_B0D8A4(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__, v29);
    sub_B0D8A4(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo, v30);
    sub_B0D8A4(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v31);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v32);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v33);
    sub_B0D8A4(&Method_WeightRate_int__getData___67924320, v34);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v35);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v36);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v37);
    byte_42187D7 = 1;
  }
  memset(&v90, 0, 32);
  memset(&v89, 0, sizeof(v89));
  v88 = 0;
  v86 = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *)sub_B0D974(
                                                                          TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo,
                                                                          method,
                                                                          v2);
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0___ctor(v86, 0LL);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v38);
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo,
                                                                                                  v39,
                                                                                                  v40);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_51;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v87,
    showStatusDic,
    (const MethodInfo_2E624AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v90.fields.dictionary = *(_OWORD *)&v87.fields.dictionary;
  v90.fields.current = v87.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v90,
            (const MethodInfo_280C7EC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    v45 = sub_B0D974(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo, v43, v44);
    TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1___ctor(
      (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)v45,
      0LL);
    if ( !v45 )
      sub_B0D97C(v46);
    v49 = ((__int64)v90.fields.current.fields.key & 0xFF00000000LL) == 0;
    *(_QWORD *)(v45 + 16) = v90.fields.current.fields.key;
    if ( v49 )
    {
      messages = this->fields.messages;
      v51 = this;
      v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_EventBulletinBoardEntity__bool__TypeInfo,
                                                                                 v47,
                                                                                 v48);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v52,
        (Il2CppObject *)v45,
        Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__,
        (const MethodInfo_26189B8 *)Method_System_Func_EventBulletinBoardEntity__bool___ctor__);
      v53 = (System_Func_TSource__bool__o *)v52;
      this = v51;
      v54 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)messages,
                                                                     v53,
                                                                     (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
      if ( !v41 )
        sub_B0D97C(v54);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v41,
        v54,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    }
  }
  v87.fields.getEnumeratorRetType = 123;
  v88 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v90,
    (const MethodInfo_280C93C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v88 = 0;
  v57 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  if ( (BYTE3(TitleInfoEventBulletinBoardComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventBulletinBoardComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    v57 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  }
  static_fields = v57->static_fields;
  _9__57_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    }
    v60 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B0D974(System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo, v55, v56);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__57_0,
      v60,
      Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__,
      (const MethodInfo_2623AB8 *)Method_System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity___ctor__);
    v61 = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    v61->__9__57_0 = (struct System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__o *)_9__57_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v61->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Linq_Enumerable__Aggregate_LastUsedDeckNumberManager_LastUsedInfo_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                                                                          (System_Func_TSource__TSource__TSource__o *)_9__57_0,
                                                                          (const MethodInfo_1717644 *)Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
  if ( !showStatusDic )
    goto LABEL_51;
  if ( !v86 )
    goto LABEL_51;
  v86->fields.minDispOrderNum = showStatusDic->fields.count;
  v70 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_EventBulletinBoardEntity__bool__TypeInfo,
                                                                             v68,
                                                                             v69);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v70,
    (Il2CppObject *)v86,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_EventBulletinBoardEntity__bool___ctor__);
  v71 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
          (System_Func_TSource__bool__o *)v70,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
  v72 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                         v71,
                                                                                         (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  v75 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v73, v74);
  WeightRate_int____ctor(v75, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  if ( !v72 )
    goto LABEL_51;
  size = v72->fields._size;
  if ( size >= 2 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v87,
      v72,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    v89.fields.current = v87.fields.current.fields.key;
    *(_OWORD *)&v89.fields.list = *(_OWORD *)&v87.fields.dictionary;
    while ( 1 )
    {
      v79 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v89,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v79 )
        break;
      if ( !v89.fields.current )
        sub_B0D97C(v79);
      if ( !v75 )
        sub_B0D97C(v79);
      WeightRate_int___setWeight(
        v75,
        HIDWORD(v89.fields.current[2].klass),
        (int32_t)v89.fields.current[1].klass,
        (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
    }
    v87.fields.getEnumeratorRetType = 276;
    v80 = ++v88;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v89,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( v80 && *((_DWORD *)&v87.fields.current.fields.value + v80 + 1) == 276 )
      v88 = v80 - 1;
    if ( !v75 )
      goto LABEL_51;
    v81 = UnityEngine_Random__Range_34969060(0, v75->fields.totalweight, 0LL);
    showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)WeightRate_int___getData(
                                                                            v75,
                                                                            v81,
                                                                            (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
    buff = (int)showStatusDic;
  }
  else
  {
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v77 = v72->fields._items->m_Items[0];
    if ( !v77 )
      goto LABEL_51;
    buff = (int32_t)v77->fields.buff;
  }
  if ( this->fields.isLastSeed )
  {
    showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v72,
                                                                            (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    if ( (int)showStatusDic >= 2 && buff == this->fields.lastMessageId )
    {
      if ( !v75 )
        goto LABEL_51;
      v82 = UnityEngine_Random__Range_34969060(0, v75->fields.totalweight, 0LL);
      buff = WeightRate_int___getData_44951760(
               v75,
               v82,
               this->fields.lastMessageId,
               (const MethodInfo_2ADE8D0 *)Method_WeightRate_int__getData___67924320);
    }
    eventId = this->fields.eventId;
    this->fields.isLastSeed = 0;
    EventRewardSaveData__SetBulletInBoardLastMessageId(eventId, 0, 0LL);
  }
  if ( !v41 )
LABEL_51:
    sub_B0D97C(showStatusDic);
  if ( v41->fields._size == 1 )
  {
    this->fields.isLastSeed = 1;
    this->fields.lastMessageId = buff;
    EventRewardSaveData__SetBulletInBoardLastMessageId(buff, 0, 0LL);
  }
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, buff, 1, 0LL);
  TitleInfoEventBulletinBoardComponent__SetShowStatus(this, buff, 1, v84);
  return buff;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextRandomIdx(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *randomQue; // x0
  System_Collections_Generic_List_T__o **p_randomQue; // x20
  System_Collections_Generic_List_T__o *v13; // x0
  System_Collections_Generic_List_T__o *v14; // x22
  int size; // w8
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int32_t v17; // w21
  int v18; // w22
  System_Collections_Generic_List_int__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  System_Collections_Generic_List_T__o *v27; // x19

  if ( (byte_42187DA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__RemoveAt__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B0D8A4(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___, v10);
    byte_42187DA = 1;
  }
  p_randomQue = (System_Collections_Generic_List_T__o **)&this->fields.randomQue;
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___RemoveAt(
      randomQue,
      0,
      (const MethodInfo_2FB1BB8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v14 = *p_randomQue;
    if ( !*p_randomQue )
      goto LABEL_22;
    size = v14->fields._size;
    if ( size <= 1 )
    {
      if ( !size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      messages = this->fields.messages;
      if ( !messages )
LABEL_22:
        sub_B0D97C(v13);
      v17 = 0;
      v18 = (int)v14->fields._items->m_Items[0];
      while ( v17 < messages->fields._size )
      {
        if ( v18 != v17 )
        {
          v13 = *p_randomQue;
          if ( !*p_randomQue )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)v13,
            v17,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          messages = this->fields.messages;
        }
        ++v17;
        if ( !messages )
          goto LABEL_22;
      }
      v13 = TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
              *p_randomQue,
              1,
              (const MethodInfo_20557E8 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    }
  }
  else
  {
    v19 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      method,
                                                      v2);
    System_Collections_Generic_List_int____ctor(
      v19,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.randomQue = v19;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.randomQue,
      (System_Int32_array **)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v26);
  }
  v27 = *p_randomQue;
  if ( !*p_randomQue )
    goto LABEL_22;
  if ( !v27->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  return (int32_t)v27->fields._items->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__Init(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t dispType,
        int32_t eventId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *v13; // x22
  UnityEngine_Component_o *bulletinBg; // x0
  struct UIPanel_o *scrollerPanel; // x8
  float z; // s0
  System_String_o *baseIconName; // x22
  UISprite_o *baseIcon; // x23
  System_String_o *wipeIconFrameName; // x22
  UISprite_o *wipeIconFrame; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_Dictionary_int__bool__o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int32_t BulletInBoardLastMessageId; // w0
  const MethodInfo *v31; // x2
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42187CC & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&dispType);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v10);
    byte_42187CC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v32 = TitleInfoEventBulletinBoardComponent__localPosByDispType(this, dispType, v12);
  GameObjectExtensions__SetLocalPosition(gameObject, v32, 0LL);
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v13, one, 0LL);
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
    sub_B0D97C(bulletinBg);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bulletinBg, this->fields.isDispBaseIcon, 0LL);
  this->fields.eventId = eventId;
  v23 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v21,
                                                                v22);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v23,
    (const MethodInfo_2E61370 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.showStatusDic = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.showStatusDic,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  BulletInBoardLastMessageId = EventRewardSaveData__GetBulletInBoardLastMessageId(this->fields.eventId, 0LL);
  this->fields.lastMessageId = BulletInBoardLastMessageId;
  this->fields.isLastSeed = BulletInBoardLastMessageId > 0;
  TitleInfoEventBulletinBoardComponent__LoadAssetData(this, callBack, v31);
}


System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_20557E8 *method)
{
  int32_t v6; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  unsigned int v9; // w23
  unsigned int v10; // w24
  unsigned int v11; // w25
  unsigned int v12; // w0

  if ( !list )
    sub_B0D97C(0LL);
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
      v11 = UnityEngine_Random__Range_34969060(v7, v8, 0LL);
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
        const MethodInfo_20558E0 *method)
{
  int32_t v6; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  unsigned int v9; // w23
  __int64 v10; // x24
  unsigned int v11; // w25
  __int64 v12; // x0

  if ( !list )
    sub_B0D97C(0LL);
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
      v11 = UnityEngine_Random__Range_34969060(v7, v8, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_o *v23; // x0
  System_String_o *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x2
  AssetLoader_LoadEndDataHandler_o *v27; // x20

  if ( (byte_42187D9 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callBack);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__, v6);
    sub_B0D8A4(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_6219/*"EventUI/Prefabs/"*/, v8);
    byte_42187D9 = 1;
  }
  v9 = sub_B0D974(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo, callBack, method);
  TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___ctor(
    (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)v9,
    0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = callBack;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callBack, v17, v18, v19, v20, v21, v22);
  v23 = System_Int32__ToString((int)this + 248, 0LL);
  v24 = System_String__Concat_43849904((System_String_o *)StringLiteral_6219/*"EventUI/Prefabs/"*/, v23, 0LL);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v25, v26);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v24, v27, 1, 0LL);
}


void __fastcall TitleInfoEventBulletinBoardComponent__ResetRandomQueue(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int32_t v6; // w20

  v2 = this;
  if ( (byte_42187DB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v3);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B0D8A4(
                                                       &Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___,
                                                       v4);
    byte_42187DB = 1;
  }
  messages = v2->fields.messages;
  if ( !messages )
LABEL_8:
    sub_B0D97C(this);
  v6 = 0;
  while ( 1 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.randomQue;
    if ( v6 >= messages->fields._size )
      break;
    if ( this )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        v6,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      messages = v2->fields.messages;
      ++v6;
      if ( messages )
        continue;
    }
    goto LABEL_8;
  }
  TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
    (System_Collections_Generic_List_T__o *)this,
    0,
    (const MethodInfo_20557E8 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
}


void __fastcall TitleInfoEventBulletinBoardComponent__ResetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  _BOOL8 v9; // x0
  Il2CppObject *current; // x23
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v13; // x0
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42187D5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v7);
    byte_42187D5 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  messages = this->fields.messages;
  if ( !messages )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)messages,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v18,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v18.fields.current;
    if ( !v18.fields.current )
      sub_B0D97C(v9);
    if ( EventRewardSaveData__GetBulletInBoardMessageState(
           this->fields.eventId,
           (int32_t)v18.fields.current[1].klass,
           0LL) )
    {
      TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 1, v11);
    }
    showStatusDic = this->fields.showStatusDic;
    if ( !showStatusDic )
      sub_B0D97C(0LL);
    if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            showStatusDic,
            (int32_t)current[1].klass,
            (const MethodInfo_2E62194 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      goto LABEL_14;
    v13 = this->fields.showStatusDic;
    if ( !v13 )
      sub_B0D97C(0LL);
    if ( System_Collections_Generic_Dictionary_int__bool___get_Item(
           v13,
           (int32_t)current[1].klass,
           (const MethodInfo_2E61E5C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
    {
LABEL_14:
      v15 = this->fields.showStatusDic;
      if ( !v15 )
        sub_B0D97C(0LL);
      if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
             v15,
             (int32_t)current[1].klass,
             (const MethodInfo_2E62194 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      {
        continue;
      }
    }
    TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 0, v14);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__SetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isShow,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0

  if ( (byte_42187D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, *(_QWORD *)&id);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v8);
    byte_42187D4 = 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic
    || (showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                                                                showStatusDic,
                                                                                id,
                                                                                (const MethodInfo_2E62194 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__),
        !this->fields.showStatusDic) )
  {
    sub_B0D97C(showStatusDic);
  }
  if ( ((unsigned __int8)showStatusDic & 1) != 0 )
    System_Collections_Generic_Dictionary_int__bool___set_Item(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  else
    System_Collections_Generic_Dictionary_int__bool___Add(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_2E61F20 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
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
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UILabel_o *svtNameLabel; // x0
  const MethodInfo *v16; // x3

  if ( (byte_42187CE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, boardMessages);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_42187CE = 1;
  }
  this->fields.messages = boardMessages;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.messages,
    (System_Int32_array **)boardMessages,
    *(System_String_array ***)&eventId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventId = eventId;
  TitleInfoEventBulletinBoardComponent__resetLabelList(this, v13);
  coroutine = this->fields.coroutine;
  if ( coroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_34930796((UnityEngine_MonoBehaviour_o *)this, coroutine, 0LL);
  svtNameLabel = this->fields.svtNameLabel;
  if ( !svtNameLabel
    || (UILabel__set_text(svtNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon2) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.showStatusDic) == 0LL) )
  {
    sub_B0D97C(svtNameLabel);
  }
  System_Collections_Generic_Dictionary_int__bool___Clear(
    (System_Collections_Generic_Dictionary_int__bool__o *)svtNameLabel,
    (const MethodInfo_2E620FC *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  if ( boardMessages )
  {
    if ( boardMessages->fields._size >= 1 )
      TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        this,
        this->fields.right + *(&this->fields.setUpSpaceBetweenMessages + 1),
        0,
        1,
        v16);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isSetUp,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42187D1 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo, *(_QWORD *)&id);
    byte_42187D1 = 1;
  }
  v7 = sub_B0D974(
         TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo,
         *(_QWORD *)&id,
         isSetUp);
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51___ctor(
    (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 48) = id;
  *(_BYTE *)(v7 + 32) = isSetUp;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x23
  EventBulletinBoardEntity_BulletinBoardInfo_o *v7; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v8; // x9
  __int64 v9; // x8
  __int64 v10; // x10
  EventBulletinBoardEntity_BulletinBoardInfo_o *v11; // x9
  UISprite_o *v12; // x21
  int32_t eventId; // w20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v19; // x8
  __int64 v20; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_42187D2 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B0D8A4(&StringLiteral_18729/*"face_{0:D3}"*/, v4);
    byte_42187D2 = 1;
  }
  switchInfo = v2->fields.switchInfo;
  if ( !switchInfo )
    goto LABEL_25;
  switchCount = v2->fields.switchCount;
  if ( (unsigned int)switchCount >= switchInfo->max_length )
    goto LABEL_26;
  v7 = switchInfo->m_Items[switchCount];
  if ( !v7 )
    goto LABEL_25;
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.svtNameLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)this, v7->fields.name, 0LL);
  v8 = v2->fields.switchInfo;
  v9 = 160LL;
  if ( (switchCount & 1) != 0 )
    v9 = 168LL;
  if ( !v8 )
    goto LABEL_25;
  v10 = v2->fields.switchCount;
  if ( (unsigned int)v10 >= v8->max_length )
  {
LABEL_26:
    v20 = sub_B0D9A8(this);
    sub_B0D948(v20, 0LL);
  }
  v11 = v8->m_Items[v10];
  if ( !v11 )
    goto LABEL_25;
  v12 = *(UISprite_o **)((char *)&v2->klass + v9);
  eventId = v2->fields.eventId;
  iconId = v11->fields.iconId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v15 = System_String__Format((System_String_o *)StringLiteral_18729/*"face_{0:D3}"*/, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_27921852(eventId, v12, v15, 0LL);
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
    sub_B0D97C(this);
  }
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon;
  if ( !this )
    goto LABEL_25;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  TweenAlpha__Begin(v16, v2->fields.wipeIconCrossFadeTime, 0.0, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon2;
  if ( !this )
    goto LABEL_25;
LABEL_21:
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)TweenAlpha__Begin(v18, v2->fields.wipeIconCrossFadeTime, 1.0, 0LL);
  v19 = v2->fields.switchInfo;
  if ( !v19 )
    goto LABEL_25;
  if ( v2->fields.switchCount >= (signed int)(v19->max_length - 1) )
  {
    v2->fields.isSwitchWipe = 0;
    v2->fields.switchCount = 0;
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__Update(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  char v11; // w22
  float v12; // s0
  float v13; // s9
  _BOOL8 v14; // x0
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  float v17; // s0
  UnityEngine_GameObject_o *v18; // x0
  float LocalPositionX; // s0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  struct System_Collections_Generic_List_ScriptLineMessage__o *v22; // x20
  float right; // s0
  const MethodInfo *v24; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42187CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__, v8);
    byte_42187CA = 1;
  }
  memset(&v26, 0, sizeof(v26));
  labels = this->fields.labels;
  if ( labels )
  {
    messages = this->fields.messages;
    if ( messages )
    {
      if ( messages->fields._size < 1 )
        return;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v25,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)labels,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
      v11 = 0;
      v26 = v25;
      v12 = 0.0;
LABEL_7:
      v13 = v12;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v26,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
        if ( !v14 )
          break;
        current = v26.fields.current;
        if ( !v26.fields.current )
          sub_B0D97C(v14);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26.fields.current, 0LL);
        v17 = -(float)(UnityEngine_Time__get_deltaTime(0LL) * this->fields.spaceBetweenMessages);
        GameObjectExtensions__AddLocalPositionX(gameObject, v17, 0LL);
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(v18, 0LL);
        v12 = LocalPositionX + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)current, 0LL).fields.x;
        v11 |= v12 < this->fields.left;
        if ( v12 > v13 )
          goto LABEL_7;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v26,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
      if ( (v11 & 1) == 0 )
        goto LABEL_18;
      v22 = this->fields.labels;
      if ( v22 )
      {
        if ( !v22->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        TitleInfoEventBulletinBoardComponent__DeleteLabel(
          (TitleInfoEventBulletinBoardComponent_o *)labels,
          v22->fields._items->m_Items[0],
          v20);
        labels = this->fields.labels;
        if ( labels )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)labels,
            0,
            (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
LABEL_18:
          right = this->fields.right;
          if ( v13 < right )
          {
            if ( this->fields.isSwitchWipe )
            {
              ++this->fields.switchCount;
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(this, right, 1, 0, v21);
              TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(this, v24);
            }
            else
            {
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(
                this,
                v13 + this->fields.setUpSpaceBetweenMessages,
                0,
                0,
                v21);
            }
          }
          return;
        }
      }
    }
    sub_B0D97C(labels);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_42187CD & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, *(_QWORD *)&dispType);
    byte_42187CD = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o **p_labels; // x20
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_int__o *randomQue; // x0
  const MethodInfo *v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42187CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptLineMessage__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ScriptLineMessage___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ScriptLineMessage__TypeInfo, v10);
    byte_42187CF = 1;
  }
  memset(&v24, 0, sizeof(v24));
  p_labels = (System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.labels;
  labels = this->fields.labels;
  if ( labels )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)labels,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
      if ( !v13 )
        break;
      TitleInfoEventBulletinBoardComponent__DeleteLabel(
        (TitleInfoEventBulletinBoardComponent_o *)v13,
        (ScriptLineMessage_o *)v24.fields.current,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    if ( !*p_labels )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      *p_labels,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ScriptLineMessage__Clear__);
  }
  else
  {
    v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_ScriptLineMessage__TypeInfo,
                                                                                                    method,
                                                                                                    v2);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v15,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    *p_labels = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v15;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.labels,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___Clear(
      randomQue,
      (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v23);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x23
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  float v16; // s8
  UnityEngine_WaitForSeconds_o *v17; // x20
  bool result; // w0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  struct EventBulletinBoardEntity_o **p_ent_5__3; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_String_o *name; // x1
  struct EventBulletinBoardEntity_o *ent_5__3; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v27; // x8
  int32_t eventId; // w20
  UISprite_o *wipeIcon; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventBulletinBoardEntity_o *v33; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v34; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v35; // x8
  float wipeIconFadeOutTime; // s8
  UnityEngine_WaitForSeconds_o *v37; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v39; // x0
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4212599 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_18729/*"face_{0:D3}"*/, v8);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4212599 = 1;
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
      v27 = script->m_Items[0];
      if ( !v27 )
        goto LABEL_41;
      eventId = _4__this->fields.eventId;
      wipeIcon = _4__this->fields.wipeIcon;
      iconId = v27->fields.iconId;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      v31 = System_String__Format((System_String_o *)StringLiteral_18729/*"face_{0:D3}"*/, v30, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI_27921852(eventId, wipeIcon, v31, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( !this )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)TweenAlpha__Begin(
                                                                                           gameObject,
                                                                                           _4__this->fields.wipeIconFadeInTime,
                                                                                           1.0,
                                                                                           0LL);
      v33 = v2->fields._ent_5__3;
      if ( !v33 )
        goto LABEL_41;
      v34 = v33->fields.script;
      if ( !v34 )
        goto LABEL_41;
      if ( v34->max_length )
      {
        v35 = v34->m_Items[0];
        if ( !v35 )
          goto LABEL_41;
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.svtNameLabel;
        if ( !this )
          goto LABEL_41;
        name = v35->fields.name;
        goto LABEL_38;
      }
    }
    v39 = sub_B0D9A8(this);
    sub_B0D948(v39, 0LL);
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( this )
      {
        v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        TweenAlpha__Begin(v19, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon2;
        if ( this )
        {
          v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          TweenAlpha__Begin(v20, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
          this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v2->fields._bulletinBoardMst_5__2;
          if ( this )
          {
            p_ent_5__3 = &v2->fields._ent_5__3;
            this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                                                 (WarEntity_o **)&v2->fields._ent_5__3,
                                                                                                 v2->fields.id,
                                                                                                 (const MethodInfo_2669C30 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*p_ent_5__3 )
                goto LABEL_41;
              if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)(*p_ent_5__3)->fields.script, 0LL) )
              {
                wipeIconFadeOutTime = _4__this->fields.wipeIconFadeOutTime;
                v37 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v22, v23);
                UnityEngine_WaitForSeconds___ctor(v37, wipeIconFadeOutTime, 0LL);
                v2->fields.__2__current = (Il2CppObject *)v37;
                p__2__current = &v2->fields.__2__current;
                sub_B0D840(p__2__current, v37);
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
    sub_B0D97C(this);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
  v2->fields._bulletinBoardMst_5__2 = (struct EventBulletinBoardMaster_o *)Master_WarQuestSelectionMaster;
  sub_B0D840(&v2->fields._bulletinBoardMst_5__2, Master_WarQuestSelectionMaster);
  if ( !_4__this )
    goto LABEL_41;
  if ( v2->fields.isSetUp )
    v15 = 208LL;
  else
    v15 = 204LL;
  v16 = *(float *)((char *)&_4__this->klass + v15);
  v17 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, v13, v14);
  UnityEngine_WaitForSeconds___ctor(v17, v16, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v17;
  sub_B0D840(&v2->fields.__2__current, v17);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4212596 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v1);
    byte_4212596 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(TitleInfoEventBulletinBoardComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventBulletinBoardComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_4212597 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)sub_B0D8A4(
                                                                             &Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__,
                                                                             t);
    byte_4212597 = 1;
  }
  if ( !t )
    sub_B0D97C(this);
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
  if ( (byte_4212598 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)sub_B0D8A4(&AtlasManager_TypeInfo, assetData);
    byte_4212598 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.bulletinBoardAssetData = assetData,
        sub_B0D840(&_4__this->fields.bulletinBoardAssetData, assetData),
        (v6 = v4->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(this);
  }
  eventId = v6->fields.eventId;
  callBack = v4->fields.callBack;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_27921540(eventId, callBack, 1, 0LL);
}