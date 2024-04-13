void __fastcall TitleInfoEventBulletinBoardComponent___ctor(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  this->fields.rubyRelativePositionY = 12.0;
  *(_QWORD *)&this->fields.spaceBetweenMessages = 0x42AA000040A00000LL;
  *(_OWORD *)&this->fields.wipeIconFadeOutStartTime = xmmword_32B5740;
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
  char v9; // w1
  char v10; // w2
  __int64 v11; // x3
  char v12; // w1
  char v13; // w2
  __int64 v14; // x3
  char v15; // w1
  char v16; // w2
  __int64 v17; // x3
  struct UnityEngine_GameObject_o *baseLabel; // x22
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  const MethodInfo *msg; // x1
  UnityEngine_GameObject_o *v21; // x23
  ScriptLineMessage_o *v22; // x22
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x9
  EventBulletinBoardEntity_BulletinBoardInfo_o *v25; // x8
  int32_t NextMessageId; // w24
  const MethodInfo *v27; // x2
  struct UISprite_o *baseIcon; // x8
  float mWidth; // s0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  System_Collections_IEnumerator_o *v32; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x0
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECBB5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___, isNotRandom, isSetUp, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptLineMessage__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42ECBB5 = 1;
  }
  baseLabel = this->fields.baseLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)baseLabel,
                                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_srcLineSprite )
    goto LABEL_23;
  v21 = Component_srcLineSprite;
  Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Component_srcLineSprite,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
  if ( !Component_srcLineSprite )
    goto LABEL_23;
  v22 = (ScriptLineMessage_o *)Component_srcLineSprite;
  ScriptLineMessage__Init((ScriptLineMessage_o *)Component_srcLineSprite, 0LL);
  if ( isNotRandom )
  {
    switchInfo = this->fields.switchInfo;
    if ( switchInfo )
    {
      switchCount = this->fields.switchCount;
      if ( (unsigned int)switchCount >= switchInfo->max_length )
      {
        v40 = sub_B5D6C8(Component_srcLineSprite);
        sub_B5D668(v40, 0LL);
      }
      v25 = switchInfo->m_Items[switchCount];
      if ( v25 )
      {
        msg = (const MethodInfo *)v25->fields.msg;
        NextMessageId = -1;
        goto LABEL_18;
      }
    }
LABEL_23:
    sub_B5D69C(Component_srcLineSprite, msg);
  }
  NextMessageId = TitleInfoEventBulletinBoardComponent__GetNextMessageId(this, msg);
  Component_srcLineSprite = (UnityEngine_GameObject_o *)TitleInfoEventBulletinBoardComponent__GetMessage(
                                                          this,
                                                          NextMessageId,
                                                          v27);
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
  ((void (__fastcall *)(ScriptLineMessage_o *, const MethodInfo *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v22->klass->vtable._7_SetText.method)(
    v22,
    msg,
    0LL,
    0LL,
    0LL,
    0LL,
    v22->klass[1]._1.image);
  UnityEngine_GameObject__SetActive(v21, 1, 0LL);
  GameObjectExtensions__SetParent(v21, (UnityEngine_Component_o *)this->fields.scrollerPanel, 0LL);
  v41.fields.y = v22->fields.rubyLineHeight;
  v41.fields.x = 0.0;
  v41.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(v21, v41, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v21, one, 0LL);
  GameObjectExtensions__SetLocalPositionX(v21, setPos, 0LL);
  TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(this, v22, v30);
  Component_srcLineSprite = (UnityEngine_GameObject_o *)this->fields.labels;
  if ( !Component_srcLineSprite )
    goto LABEL_23;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ScriptLineMessage__Add__);
  if ( !isNotRandom && this->fields.isDispWipeIcon )
  {
    v32 = TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(this, NextMessageId, isSetUp, v31);
    started = UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v32, 0LL);
    this->fields.coroutine = started;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.coroutine,
      (System_Int32_array **)started,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *lineMessage,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TitleInfoEventBulletinBoardComponent_o *v5; // x19
  float y; // w8
  TitleInfoEventBulletinBoardComponent_o *v7; // x20
  unsigned int v8; // w22
  __int64 v9; // x24
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *v11; // x21
  UnityEngine_GameObject_o *v12; // x21
  __int64 v13; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42ECBB8 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B5D5C4(
                                                       &UnityEngine_Object_TypeInfo,
                                                       (_DWORD)lineMessage,
                                                       (_DWORD)method,
                                                       v3);
    byte_42ECBB8 = 1;
  }
  if ( v5->fields.rubyRelativePositionY != 0.0 )
  {
    if ( !lineMessage )
      goto LABEL_24;
    this = (TitleInfoEventBulletinBoardComponent_o *)ScriptLineMessage__GetDispLabelArray(lineMessage, 0LL);
    if ( !this )
      goto LABEL_24;
    y = this->fields.TerminalLocalPos.fields.y;
    v7 = this;
    if ( SLODWORD(y) >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= LODWORD(y) )
        {
          v13 = sub_B5D6C8(this);
          sub_B5D668(v13, 0LL);
        }
        v9 = *((_QWORD *)&v7->fields.EventLocalPos.fields.x + (int)v8);
        if ( !v9 )
          break;
        v10 = *(UnityEngine_Object_o **)(v9 + 16);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v11 = *(UnityEngine_Object_o **)(v9 + 24);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = *(TitleInfoEventBulletinBoardComponent_o **)(v9 + 24);
            if ( !this )
              break;
            this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
            if ( !*(_QWORD *)(v9 + 16) )
              break;
            v12 = (UnityEngine_GameObject_o *)this;
            this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Component__get_transform(
                                                               *(UnityEngine_Component_o **)(v9 + 16),
                                                               0LL);
            if ( !this )
              break;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(v12, localPosition.fields.y + v5->fields.rubyRelativePositionY, 0LL);
          }
        }
        y = v7->fields.TerminalLocalPos.fields.y;
        if ( (int)++v8 >= SLODWORD(y) )
          return;
      }
LABEL_24:
      sub_B5D69C(this, lineMessage);
    }
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  int v24; // w20
  const MethodInfo *v25; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+0h] [xbp-70h] BYREF
  int v27; // [xsp+2Ch] [xbp-44h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+30h] [xbp-40h] BYREF

  if ( (byte_42ECBBB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v20, v21, v22);
    byte_42ECBBB = 1;
  }
  memset(&v28, 0, 32);
  v27 = 0;
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v26,
    showStatusDic,
    (const MethodInfo_2F03AB0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v28.fields.dictionary = *(_OWORD *)&v26.fields.dictionary;
  v28.fields.current = v26.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v28,
            (const MethodInfo_289DCBC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( !BYTE4(v28.fields.current.fields.key) )
    {
      v26.fields.getEnumeratorRetType = 62;
      v27 = 1;
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        &v28,
        (const MethodInfo_289DE0C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      v27 = 0;
      return;
    }
  }
  v26.fields.getEnumeratorRetType = 62;
  v27 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v28,
    (const MethodInfo_289DE0C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v27 = 0;
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v26,
    showStatusDic,
    (const MethodInfo_2F03AB0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v28.fields.dictionary = *(_OWORD *)&v26.fields.dictionary;
  v28.fields.current = v26.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v28,
            (const MethodInfo_289DCBC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
    EventRewardSaveData__SetBulletInBoardMessageState(
      this->fields.eventId,
      (int32_t)v28.fields.current.fields.key,
      0,
      0LL);
  v26.fields.getEnumeratorRetType = 131;
  v24 = ++v27;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v28,
    (const MethodInfo_289DE0C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  if ( v24 )
  {
    if ( *((_DWORD *)&v26.fields.current.fields.value + v24 + 1) == 131 )
      v27 = v24 - 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
LABEL_18:
    sub_B5D69C(showStatusDic, method);
  System_Collections_Generic_Dictionary_int__bool___Clear(
    showStatusDic,
    (const MethodInfo_2F03700 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  TitleInfoEventBulletinBoardComponent__ResetShowStatus(this, v25);
}


void __fastcall TitleInfoEventBulletinBoardComponent__DeleteLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *label,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42ECBB0 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B5D5C4(
                                                       &UnityEngine_Object_TypeInfo,
                                                       (_DWORD)label,
                                                       (_DWORD)method,
                                                       v3);
    byte_42ECBB0 = 1;
  }
  if ( !label )
    sub_B5D69C(this, label);
  ScriptLineMessage__DeleteLabels(label, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


System_String_o *__fastcall TitleInfoEventBulletinBoardComponent__GetMessage(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_o *result; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x21
  System_String_o **p_monitor; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *monitor; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  _DWORD *v29; // x8
  __int64 v30; // x8
  System_String_o *v31; // x19
  char v32; // w20
  __int64 v33; // x0
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42ECBBD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__,
      id,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v12, v13, v14);
    byte_42ECBBD = 1;
  }
  memset(&v35, 0, sizeof(v35));
  result = (System_String_o *)this->fields.messages;
  if ( result )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)result,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    v35 = v34;
    do
    {
      v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v16 )
      {
        v32 = 0;
        v31 = 0LL;
        goto LABEL_16;
      }
      current = v35.fields.current;
      if ( !v35.fields.current )
        sub_B5D69C(v16, v17);
    }
    while ( LODWORD(v35.fields.current[1].klass) != id );
    p_monitor = (System_String_o **)&v35.fields.current[1].monitor;
    if ( System_String__IsNullOrEmpty((System_String_o *)v35.fields.current[1].monitor, 0LL)
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[2].monitor, 0LL) )
    {
      this->fields.isSwitchWipe = 1;
      monitor = (struct EventBulletinBoardEntity_BulletinBoardInfo_array *)current[2].monitor;
      this->fields.switchInfo = monitor;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.switchInfo,
        (System_Int32_array **)monitor,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v29 = current[2].monitor;
      if ( !v29 )
        sub_B5D69C(v27, v28);
      if ( !v29[6] )
      {
        v33 = sub_B5D6C8(v27);
        sub_B5D668(v33, 0LL);
      }
      v30 = *((_QWORD *)v29 + 4);
      if ( !v30 )
        sub_B5D69C(v27, v28);
      p_monitor = (System_String_o **)(v30 + 32);
    }
    v31 = *p_monitor;
    v32 = 2;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( ((v32 + 2) & 3) != 0 )
      return 0LL;
    else
      return v31;
  }
  return result;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextMessageId(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  const MethodInfo *v107; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v108; // x20
  __int64 v109; // x1
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  __int64 v111; // x22
  __int64 v112; // x0
  __int64 v113; // x1
  bool v114; // zf
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x23
  TitleInfoEventBulletinBoardComponent_o *v116; // x26
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v117; // x24
  System_Func_TSource__bool__o *v118; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v119; // x0
  TitleInfoEventBulletinBoardComponent___c_c *v120; // x0
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__57_0; // x22
  Il2CppObject *v123; // x23
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *v124; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v131; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v132; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v133; // x22
  WeightRate_int__o *v134; // x21
  int size; // w8
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v136; // x8
  int32_t buff; // w23
  _BOOL8 v138; // x0
  __int64 v139; // x1
  int v140; // w19
  int32_t v141; // w0
  int32_t v142; // w0
  int32_t eventId; // w0
  const MethodInfo *v144; // x3
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *v146; // [xsp+8h] [xbp-C8h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v147; // [xsp+10h] [xbp-C0h] BYREF
  int v148; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v149; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v150; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_42ECBBC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v32, v33, v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_System_Func_EventBulletinBoardEntity__bool___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Func_EventBulletinBoardEntity__bool__TypeInfo, v41, v42, v43);
    sub_B5D5C4(
      &Method_System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity___ctor__,
      v44,
      v45,
      v46);
    sub_B5D5C4(
      &System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo,
      v47,
      v48,
      v49);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v59, v60, v61);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v62, v63, v64);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v65, v66, v67);
    sub_B5D5C4(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v68, v69, v70);
    sub_B5D5C4(&Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__, v71, v72, v73);
    sub_B5D5C4(
      &Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__,
      v74,
      v75,
      v76);
    sub_B5D5C4(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo, v77, v78, v79);
    sub_B5D5C4(
      &Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__,
      v80,
      v81,
      v82);
    sub_B5D5C4(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo, v83, v84, v85);
    sub_B5D5C4(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v86, v87, v88);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v89, v90, v91);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v92, v93, v94);
    sub_B5D5C4(&Method_WeightRate_int__getData___68780024, v95, v96, v97);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v98, v99, v100);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v101, v102, v103);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v104, v105, v106);
    byte_42ECBBC = 1;
  }
  memset(&v150, 0, 32);
  memset(&v149, 0, sizeof(v149));
  v148 = 0;
  v146 = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *)sub_B5D694(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo);
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0___ctor(v146, 0LL);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v107);
  v108 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v108,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_51;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    &v147,
    showStatusDic,
    (const MethodInfo_2F03AB0 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v150.fields.dictionary = *(_OWORD *)&v147.fields.dictionary;
  v150.fields.current = v147.fields.current;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v150,
            (const MethodInfo_289DCBC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    v111 = sub_B5D694(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo);
    TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1___ctor(
      (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)v111,
      0LL);
    if ( !v111 )
      sub_B5D69C(v112, v113);
    v114 = ((__int64)v150.fields.current.fields.key & 0xFF00000000LL) == 0;
    *(_QWORD *)(v111 + 16) = v150.fields.current.fields.key;
    if ( v114 )
    {
      messages = this->fields.messages;
      v116 = this;
      v117 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v117,
        (Il2CppObject *)v111,
        Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_EventBulletinBoardEntity__bool___ctor__);
      v118 = (System_Func_TSource__bool__o *)v117;
      this = v116;
      v119 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                      (System_Collections_Generic_IEnumerable_TSource__o *)messages,
                                                                      v118,
                                                                      (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
      if ( !v108 )
        sub_B5D69C(v119, v119);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v108,
        v119,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    }
  }
  v147.fields.getEnumeratorRetType = 123;
  v148 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v150,
    (const MethodInfo_289DE0C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v148 = 0;
  v120 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  if ( (BYTE3(TitleInfoEventBulletinBoardComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventBulletinBoardComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    v120 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  }
  static_fields = v120->static_fields;
  _9__57_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( (BYTE3(v120->vtable._0_Equals.methodPtr) & 4) != 0 && !v120->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v120);
      static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    }
    v123 = (Il2CppObject *)static_fields->__9;
    _9__57_0 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B5D694(System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo);
    System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
      _9__57_0,
      v123,
      Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__,
      (const MethodInfo_2C39DD0 *)Method_System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity___ctor__);
    v124 = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    v124->__9__57_0 = (struct System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__o *)_9__57_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v124->__9__57_0,
      (System_Int32_array **)_9__57_0,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130);
  }
  showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Linq_Enumerable__Aggregate_LastUsedDeckNumberManager_LastUsedInfo_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v108,
                                                                          (System_Func_TSource__TSource__TSource__o *)_9__57_0,
                                                                          (const MethodInfo_1C96720 *)Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
  if ( !showStatusDic )
    goto LABEL_51;
  if ( !v146 )
    goto LABEL_51;
  v146->fields.minDispOrderNum = showStatusDic->fields.count;
  v131 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v131,
    (Il2CppObject *)v146,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_EventBulletinBoardEntity__bool___ctor__);
  v132 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v108,
           (System_Func_TSource__bool__o *)v131,
           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
  v133 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                          v132,
                                                                                          (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  v134 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v134, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  if ( !v133 )
    goto LABEL_51;
  size = v133->fields._size;
  if ( size >= 2 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v147,
      v133,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    v149.fields.current = v147.fields.current.fields.key;
    *(_OWORD *)&v149.fields.list = *(_OWORD *)&v147.fields.dictionary;
    while ( 1 )
    {
      v138 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v149,
               (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v138 )
        break;
      if ( !v149.fields.current )
        sub_B5D69C(v138, v139);
      if ( !v134 )
        sub_B5D69C(v138, v139);
      WeightRate_int___setWeight(
        v134,
        HIDWORD(v149.fields.current[2].klass),
        (int32_t)v149.fields.current[1].klass,
        (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
    }
    v147.fields.getEnumeratorRetType = 276;
    v140 = ++v148;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v149,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( v140 && *((_DWORD *)&v147.fields.current.fields.value + v140 + 1) == 276 )
      v148 = v140 - 1;
    if ( !v134 )
      goto LABEL_51;
    v141 = UnityEngine_Random__Range_35654020(0, v134->fields.totalweight, 0LL);
    showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)WeightRate_int___getData(
                                                                            v134,
                                                                            v141,
                                                                            (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
    buff = (int)showStatusDic;
  }
  else
  {
    if ( !size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v136 = v133->fields._items->m_Items[0];
    if ( !v136 )
      goto LABEL_51;
    buff = (int32_t)v136->fields.buff;
  }
  if ( this->fields.isLastSeed )
  {
    showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                                            (System_Collections_Generic_IEnumerable_TSource__o *)v133,
                                                                            (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    if ( (int)showStatusDic >= 2 && buff == this->fields.lastMessageId )
    {
      if ( !v134 )
        goto LABEL_51;
      v142 = UnityEngine_Random__Range_35654020(0, v134->fields.totalweight, 0LL);
      buff = WeightRate_int___getData_46109808(
               v134,
               v142,
               this->fields.lastMessageId,
               (const MethodInfo_2BF9470 *)Method_WeightRate_int__getData___68780024);
    }
    eventId = this->fields.eventId;
    this->fields.isLastSeed = 0;
    EventRewardSaveData__SetBulletInBoardLastMessageId(eventId, 0, 0LL);
  }
  if ( !v108 )
LABEL_51:
    sub_B5D69C(showStatusDic, v109);
  if ( v108->fields._size == 1 )
  {
    this->fields.isLastSeed = 1;
    this->fields.lastMessageId = buff;
    EventRewardSaveData__SetBulletInBoardLastMessageId(buff, 0, 0LL);
  }
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, buff, 1, 0LL);
  TitleInfoEventBulletinBoardComponent__SetShowStatus(this, buff, 1, v144);
  return buff;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextRandomIdx(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *randomQue; // x0
  System_Collections_Generic_List_T__o **p_randomQue; // x20
  System_Collections_Generic_List_T__o *v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_T__o *v30; // x22
  int size; // w8
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int32_t v33; // w21
  int v34; // w22
  System_Collections_Generic_List_int__o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x1
  System_Collections_Generic_List_T__o *v43; // x19

  if ( (byte_42ECBBF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__RemoveAt__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Item__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___, v23, v24, v25);
    byte_42ECBBF = 1;
  }
  p_randomQue = (System_Collections_Generic_List_T__o **)&this->fields.randomQue;
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___RemoveAt(
      randomQue,
      0,
      (const MethodInfo_30860C4 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    v30 = *p_randomQue;
    if ( !*p_randomQue )
      goto LABEL_22;
    size = v30->fields._size;
    if ( size <= 1 )
    {
      if ( !size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      messages = this->fields.messages;
      if ( !messages )
LABEL_22:
        sub_B5D69C(v28, v29);
      v33 = 0;
      v34 = (int)v30->fields._items->m_Items[0];
      while ( v33 < messages->fields._size )
      {
        if ( v34 != v33 )
        {
          v28 = *p_randomQue;
          if ( !*p_randomQue )
            goto LABEL_22;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)v28,
            v33,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          messages = this->fields.messages;
        }
        ++v33;
        if ( !messages )
          goto LABEL_22;
      }
      v28 = TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
              *p_randomQue,
              1,
              (const MethodInfo_1E71164 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    }
  }
  else
  {
    v35 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v35,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    this->fields.randomQue = v35;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.randomQue,
      (System_Int32_array **)v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v42);
  }
  v43 = *p_randomQue;
  if ( !*p_randomQue )
    goto LABEL_22;
  if ( !v43->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  return (int32_t)v43->fields._items->m_Items[0];
}


void __fastcall TitleInfoEventBulletinBoardComponent__Init(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t dispType,
        int32_t eventId,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v16; // x2
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Component_o *bulletinBg; // x0
  __int64 v19; // x1
  struct UIPanel_o *scrollerPanel; // x8
  float z; // s0
  System_String_o *baseIconName; // x22
  UISprite_o *baseIcon; // x23
  System_String_o *wipeIconFrameName; // x22
  UISprite_o *wipeIconFrame; // x23
  System_Collections_Generic_Dictionary_int__bool__o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t BulletInBoardLastMessageId; // w0
  const MethodInfo *v34; // x2
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECBB1 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, dispType, eventId, callBack);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v12, v13, v14);
    byte_42ECBB1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v35 = TitleInfoEventBulletinBoardComponent__localPosByDispType(this, dispType, v16);
  GameObjectExtensions__SetLocalPosition(gameObject, v35, 0LL);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v17, one, 0LL);
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
    sub_B5D69C(bulletinBg, v19);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bulletinBg, this->fields.isDispBaseIcon, 0LL);
  this->fields.eventId = eventId;
  v26 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v26,
    (const MethodInfo_2F02974 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.showStatusDic = v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.showStatusDic,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  BulletInBoardLastMessageId = EventRewardSaveData__GetBulletInBoardLastMessageId(this->fields.eventId, 0LL);
  this->fields.lastMessageId = BulletInBoardLastMessageId;
  this->fields.isLastSeed = BulletInBoardLastMessageId > 0;
  TitleInfoEventBulletinBoardComponent__LoadAssetData(this, callBack, v34);
}


System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_1E71164 *method)
{
  int32_t v6; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  unsigned int v9; // w23
  unsigned int v10; // w24
  unsigned int v11; // w25
  unsigned int v12; // w0

  if ( !list )
    sub_B5D69C(0LL, withoutFirst);
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
      v11 = UnityEngine_Random__Range_35654020(v7, v8, 0LL);
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
        const MethodInfo_1E7125C *method)
{
  int32_t v6; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  unsigned int v9; // w23
  __int64 v10; // x24
  unsigned int v11; // w25
  __int64 v12; // x0

  if ( !list )
    sub_B5D69C(0LL, withoutFirst);
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
      v11 = UnityEngine_Random__Range_35654020(v7, v8, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_o *v33; // x0
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x20

  if ( (byte_42ECBBE & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callBack, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__, v9, v10, v11);
    sub_B5D5C4(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_6281/*"EventUI/Prefabs/"*/, v15, v16, v17);
    byte_42ECBBE = 1;
  }
  v18 = sub_B5D694(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo);
  TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___ctor(
    (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)v18,
    0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callBack;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)callBack, v27, v28, v29, v30, v31, v32);
  v33 = System_Int32__ToString((int)this + 248, 0LL);
  v34 = System_String__Concat_44577788((System_String_o *)StringLiteral_6281/*"EventUI/Prefabs/"*/, v33, 0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v18,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v34, v35, 1, 0LL);
}


void __fastcall TitleInfoEventBulletinBoardComponent__ResetRandomQueue(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventBulletinBoardComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int32_t v12; // w20

  v4 = this;
  if ( (byte_42ECBC0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v5, v6, v7);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B5D5C4(
                                                       &Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___,
                                                       v8,
                                                       v9,
                                                       v10);
    byte_42ECBC0 = 1;
  }
  messages = v4->fields.messages;
  if ( !messages )
LABEL_8:
    sub_B5D69C(this, method);
  v12 = 0;
  while ( 1 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v4->fields.randomQue;
    if ( v12 >= messages->fields._size )
      break;
    if ( this )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        v12,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      messages = v4->fields.messages;
      ++v12;
      if ( messages )
        continue;
    }
    goto LABEL_8;
  }
  TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
    (System_Collections_Generic_List_T__o *)this,
    0,
    (const MethodInfo_1E71164 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
}


void __fastcall TitleInfoEventBulletinBoardComponent__ResetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x23
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v28; // x0
  const MethodInfo *v29; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v30; // x0
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42ECBBA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v17, v18, v19);
    byte_42ECBBA = 1;
  }
  memset(&v33, 0, sizeof(v33));
  messages = this->fields.messages;
  if ( !messages )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)messages,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v33,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v21 )
      break;
    current = v33.fields.current;
    if ( !v33.fields.current )
      sub_B5D69C(v21, v22);
    if ( EventRewardSaveData__GetBulletInBoardMessageState(
           this->fields.eventId,
           (int32_t)v33.fields.current[1].klass,
           0LL) )
    {
      TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 1, v25);
    }
    showStatusDic = this->fields.showStatusDic;
    if ( !showStatusDic )
      sub_B5D69C(0LL, v24);
    if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            showStatusDic,
            (int32_t)current[1].klass,
            (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      goto LABEL_14;
    v28 = this->fields.showStatusDic;
    if ( !v28 )
      sub_B5D69C(0LL, v27);
    if ( System_Collections_Generic_Dictionary_int__bool___get_Item(
           v28,
           (int32_t)current[1].klass,
           (const MethodInfo_2F03460 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
    {
LABEL_14:
      v30 = this->fields.showStatusDic;
      if ( !v30 )
        sub_B5D69C(0LL, v27);
      if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
             v30,
             (int32_t)current[1].klass,
             (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      {
        continue;
      }
    }
    TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 0, v29);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v33,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__SetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isShow,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0

  if ( (byte_42ECBB9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, id, isShow, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v10, v11, v12);
    byte_42ECBB9 = 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic
    || (showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                                                                showStatusDic,
                                                                                id,
                                                                                (const MethodInfo_2F03798 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__),
        !this->fields.showStatusDic) )
  {
    sub_B5D69C(showStatusDic, *(_QWORD *)&id);
  }
  if ( ((unsigned __int8)showStatusDic & 1) != 0 )
    System_Collections_Generic_Dictionary_int__bool___set_Item(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  else
    System_Collections_Generic_Dictionary_int__bool___Add(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_2F03524 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UILabel_o *svtNameLabel; // x0
  const MethodInfo *v20; // x3

  if ( (byte_42ECBB3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, (_DWORD)boardMessages, eventId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    byte_42ECBB3 = 1;
  }
  this->fields.messages = boardMessages;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.messages,
    (System_Int32_array **)boardMessages,
    *(System_String_array ***)&eventId,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventId = eventId;
  TitleInfoEventBulletinBoardComponent__resetLabelList(this, v17);
  coroutine = this->fields.coroutine;
  if ( coroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_35615756((UnityEngine_MonoBehaviour_o *)this, coroutine, 0LL);
  svtNameLabel = this->fields.svtNameLabel;
  if ( !svtNameLabel
    || (UILabel__set_text(svtNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon2) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.showStatusDic) == 0LL) )
  {
    sub_B5D69C(svtNameLabel, coroutine);
  }
  System_Collections_Generic_Dictionary_int__bool___Clear(
    (System_Collections_Generic_Dictionary_int__bool__o *)svtNameLabel,
    (const MethodInfo_2F03700 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  if ( boardMessages )
  {
    if ( boardMessages->fields._size >= 1 )
      TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        this,
        this->fields.right + *(&this->fields.setUpSpaceBetweenMessages + 1),
        0,
        1,
        v20);
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

  if ( (byte_42ECBB6 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo, id, isSetUp, method);
    byte_42ECBB6 = 1;
  }
  v7 = sub_B5D694(TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo);
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51___ctor(
    (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 48) = id;
  *(_BYTE *)(v7 + 32) = isSetUp;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventBulletinBoardComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x23
  EventBulletinBoardEntity_BulletinBoardInfo_o *v13; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v14; // x9
  __int64 v15; // x8
  __int64 v16; // x10
  EventBulletinBoardEntity_BulletinBoardInfo_o *v17; // x9
  UISprite_o *v18; // x21
  int32_t eventId; // w20
  Il2CppObject *v20; // x0
  System_String_o *v21; // x22
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v25; // x8
  __int64 v26; // x0
  int32_t iconId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42ECBB7 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_B5D5C4(&StringLiteral_18906/*"face_{0:D3}"*/, v8, v9, v10);
    byte_42ECBB7 = 1;
  }
  switchInfo = v4->fields.switchInfo;
  if ( !switchInfo )
    goto LABEL_25;
  switchCount = v4->fields.switchCount;
  if ( (unsigned int)switchCount >= switchInfo->max_length )
    goto LABEL_26;
  v13 = switchInfo->m_Items[switchCount];
  if ( !v13 )
    goto LABEL_25;
  this = (TitleInfoEventBulletinBoardComponent_o *)v4->fields.svtNameLabel;
  if ( !this )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)this, v13->fields.name, 0LL);
  v14 = v4->fields.switchInfo;
  v15 = 160LL;
  if ( (switchCount & 1) != 0 )
    v15 = 168LL;
  if ( !v14 )
    goto LABEL_25;
  v16 = v4->fields.switchCount;
  if ( (unsigned int)v16 >= v14->max_length )
  {
LABEL_26:
    v26 = sub_B5D6C8(this);
    sub_B5D668(v26, 0LL);
  }
  v17 = v14->m_Items[v16];
  if ( !v17 )
    goto LABEL_25;
  v18 = *(UISprite_o **)((char *)&v4->klass + v15);
  eventId = v4->fields.eventId;
  iconId = v17->fields.iconId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v21 = System_String__Format((System_String_o *)StringLiteral_18906/*"face_{0:D3}"*/, v20, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, v18, v21, 0LL);
  if ( (switchCount & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v4->fields.wipeIcon2;
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      TweenAlpha__Begin(gameObject, v4->fields.wipeIconCrossFadeTime, 0.0, 0LL);
      this = (TitleInfoEventBulletinBoardComponent_o *)v4->fields.wipeIcon;
      if ( this )
        goto LABEL_21;
    }
LABEL_25:
    sub_B5D69C(this, method);
  }
  this = (TitleInfoEventBulletinBoardComponent_o *)v4->fields.wipeIcon;
  if ( !this )
    goto LABEL_25;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  TweenAlpha__Begin(v22, v4->fields.wipeIconCrossFadeTime, 0.0, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)v4->fields.wipeIcon2;
  if ( !this )
    goto LABEL_25;
LABEL_21:
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)TweenAlpha__Begin(v24, v4->fields.wipeIconCrossFadeTime, 1.0, 0LL);
  v25 = v4->fields.switchInfo;
  if ( !v25 )
    goto LABEL_25;
  if ( v4->fields.switchCount >= (signed int)(v25->max_length - 1) )
  {
    v4->fields.isSwitchWipe = 0;
    v4->fields.switchCount = 0;
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__Update(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  char v25; // w22
  float v26; // s0
  float v27; // s9
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  float v32; // s0
  UnityEngine_GameObject_o *v33; // x0
  float LocalPositionX; // s0
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  struct System_Collections_Generic_List_ScriptLineMessage__o *v37; // x20
  float right; // s0
  const MethodInfo *v39; // x1
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42ECBAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__, v20, v21, v22);
    byte_42ECBAF = 1;
  }
  memset(&v41, 0, sizeof(v41));
  labels = this->fields.labels;
  if ( labels )
  {
    messages = this->fields.messages;
    if ( messages )
    {
      if ( messages->fields._size < 1 )
        return;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v40,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)labels,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
      v25 = 0;
      v41 = v40;
      v26 = 0.0;
LABEL_7:
      v27 = v26;
      while ( 1 )
      {
        v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v41,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
        if ( !v28 )
          break;
        current = v41.fields.current;
        if ( !v41.fields.current )
          sub_B5D69C(v28, v29);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v41.fields.current, 0LL);
        v32 = -(float)(UnityEngine_Time__get_deltaTime(0LL) * this->fields.spaceBetweenMessages);
        GameObjectExtensions__AddLocalPositionX(gameObject, v32, 0LL);
        v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(v33, 0LL);
        v26 = LocalPositionX + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)current, 0LL).fields.x;
        v25 |= v26 < this->fields.left;
        if ( v26 > v27 )
          goto LABEL_7;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v41,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
      if ( (v25 & 1) == 0 )
        goto LABEL_18;
      v37 = this->fields.labels;
      if ( v37 )
      {
        if ( !v37->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        TitleInfoEventBulletinBoardComponent__DeleteLabel(
          (TitleInfoEventBulletinBoardComponent_o *)labels,
          v37->fields._items->m_Items[0],
          v35);
        labels = this->fields.labels;
        if ( labels )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)labels,
            0,
            (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
LABEL_18:
          right = this->fields.right;
          if ( v27 < right )
          {
            if ( this->fields.isSwitchWipe )
            {
              ++this->fields.switchCount;
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(this, right, 1, 0, v36);
              TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(this, v39);
            }
            else
            {
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(
                this,
                v27 + this->fields.setUpSpaceBetweenMessages,
                0,
                0,
                v36);
            }
          }
          return;
        }
      }
    }
    sub_B5D69C(labels, method);
  }
}


UnityEngine_Vector3_o __fastcall TitleInfoEventBulletinBoardComponent__localPosByDispType(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char x_low; // w8
  float *p_y; // x8
  float *p_z; // x9
  float *p_messageScrollSpeed; // x10
  float v10; // s1
  float v11; // s0
  float v12; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42ECBB2 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, dispType, (_DWORD)method, v3);
    byte_42ECBB2 = 1;
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
  v10 = *p_z;
  v11 = *p_y;
  v12 = *p_messageScrollSpeed;
  result.fields.z = v12;
  result.fields.y = v10;
  result.fields.x = v11;
  return result;
}


void __fastcall TitleInfoEventBulletinBoardComponent__resetLabelList(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o **p_labels; // x20
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x2
  __int64 v30; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_int__o *randomQue; // x0
  const MethodInfo *v39; // x1
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42ECBB4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptLineMessage__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ScriptLineMessage___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_ScriptLineMessage__TypeInfo, v23, v24, v25);
    byte_42ECBB4 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  p_labels = (System_Collections_Generic_List_XWeaponTrail_Element__o **)&this->fields.labels;
  labels = this->fields.labels;
  if ( labels )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v40,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)labels,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v40,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
      if ( !v28 )
        break;
      TitleInfoEventBulletinBoardComponent__DeleteLabel(
        (TitleInfoEventBulletinBoardComponent_o *)v28,
        (ScriptLineMessage_o *)v40.fields.current,
        v29);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v40,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    if ( !*p_labels )
      sub_B5D69C(0LL, v30);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      *p_labels,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ScriptLineMessage__Clear__);
  }
  else
  {
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ScriptLineMessage__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    *p_labels = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v31;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.labels,
      (System_Int32_array **)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___Clear(
      randomQue,
      (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v39);
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
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int32_t _1__state; // w8
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x23
  __int64 v28; // x8
  float v29; // s8
  UnityEngine_WaitForSeconds_o *v30; // x20
  bool result; // w0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  struct EventBulletinBoardEntity_o **p_ent_5__3; // x20
  System_String_o *name; // x1
  struct EventBulletinBoardEntity_o *ent_5__3; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v38; // x8
  int32_t eventId; // w20
  UISprite_o *wipeIcon; // x21
  Il2CppObject *v41; // x0
  System_String_o *v42; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventBulletinBoardEntity_o *v44; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v45; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v46; // x8
  float wipeIconFadeOutTime; // s8
  UnityEngine_WaitForSeconds_o *v48; // x20
  Il2CppObject **p__2__current; // x19
  __int64 v50; // x0
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_42E6238 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&int_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_18906/*"face_{0:D3}"*/, v20, v21, v22);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)sub_B5D5C4(
                                                                                         &StringLiteral_1/*""*/,
                                                                                         v23,
                                                                                         v24,
                                                                                         v25);
    byte_42E6238 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_41;
    ent_5__3 = v4->fields._ent_5__3;
    if ( !ent_5__3 )
      goto LABEL_41;
    script = ent_5__3->fields.script;
    if ( !script )
      goto LABEL_41;
    if ( script->max_length )
    {
      v38 = script->m_Items[0];
      if ( !v38 )
        goto LABEL_41;
      eventId = _4__this->fields.eventId;
      wipeIcon = _4__this->fields.wipeIcon;
      iconId = v38->fields.iconId;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      v42 = System_String__Format((System_String_o *)StringLiteral_18906/*"face_{0:D3}"*/, v41, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventUI_31190412(eventId, wipeIcon, v42, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( !this )
        goto LABEL_41;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)TweenAlpha__Begin(
                                                                                           gameObject,
                                                                                           _4__this->fields.wipeIconFadeInTime,
                                                                                           1.0,
                                                                                           0LL);
      v44 = v4->fields._ent_5__3;
      if ( !v44 )
        goto LABEL_41;
      v45 = v44->fields.script;
      if ( !v45 )
        goto LABEL_41;
      if ( v45->max_length )
      {
        v46 = v45->m_Items[0];
        if ( !v46 )
          goto LABEL_41;
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.svtNameLabel;
        if ( !this )
          goto LABEL_41;
        name = v46->fields.name;
        goto LABEL_38;
      }
    }
    v50 = sub_B5D6C8(this);
    sub_B5D668(v50, 0LL);
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( this )
      {
        v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        TweenAlpha__Begin(v32, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon2;
        if ( this )
        {
          v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          TweenAlpha__Begin(v33, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
          this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v4->fields._bulletinBoardMst_5__2;
          if ( this )
          {
            p_ent_5__3 = &v4->fields._ent_5__3;
            this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                                                                 (WarEntity_o **)&v4->fields._ent_5__3,
                                                                                                 v4->fields.id,
                                                                                                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*p_ent_5__3 )
                goto LABEL_41;
              if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)(*p_ent_5__3)->fields.script, 0LL) )
              {
                wipeIconFadeOutTime = _4__this->fields.wipeIconFadeOutTime;
                v48 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v48, wipeIconFadeOutTime, 0LL);
                v4->fields.__2__current = (Il2CppObject *)v48;
                p__2__current = &v4->fields.__2__current;
                sub_B5D560(p__2__current);
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
    sub_B5D69C(this, method);
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v4->fields._bulletinBoardMst_5__2 = (struct EventBulletinBoardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
  sub_B5D560(&v4->fields._bulletinBoardMst_5__2);
  if ( !_4__this )
    goto LABEL_41;
  if ( v4->fields.isSetUp )
    v28 = 208LL;
  else
    v28 = 204LL;
  v29 = *(float *)((char *)&_4__this->klass + v28);
  v30 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v30, v29, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v30;
  sub_B5D560(&v4->fields.__2__current);
  result = 1;
  v4->fields.__1__state = 1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E6235 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v1, v2, v3);
    byte_42E6235 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TitleInfoEventBulletinBoardComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *v5; // x20

  v5 = this;
  if ( (byte_42E6236 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)sub_B5D5C4(
                                                                             &Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__,
                                                                             (_DWORD)t,
                                                                             (_DWORD)method,
                                                                             v3);
    byte_42E6236 = 1;
  }
  if ( !t )
    sub_B5D69C(this, t);
  return t->fields.id == v5->fields.showStatus.fields.key;
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
  __int64 v3; // x3
  TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *v5; // x19
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x8
  struct TitleInfoEventBulletinBoardComponent_o *v7; // x8
  int32_t eventId; // w20
  System_Action_o *callBack; // x19

  v5 = this;
  if ( (byte_42E6237 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)sub_B5D5C4(
                                                                             &AtlasManager_TypeInfo,
                                                                             (_DWORD)assetData,
                                                                             (_DWORD)method,
                                                                             v3);
    byte_42E6237 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.bulletinBoardAssetData = assetData,
        sub_B5D560(&_4__this->fields.bulletinBoardAssetData),
        (v7 = v5->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(this, assetData);
  }
  eventId = v7->fields.eventId;
  callBack = v5->fields.callBack;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_31190100(eventId, callBack, 1, 0LL);
}