void __fastcall TitleInfoEventBulletinBoardComponent___ctor(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  this->fields.rubyRelativePositionY = 12.0;
  *(_QWORD *)&this->fields.messageScrollSpeed = 0x42AA000040A00000LL;
  *(_OWORD *)&this->fields.wipeIconFadeOutStartTime = xmmword_BD3710;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *baseLabel; // x22
  UnityEngine_GameObject_o *Component_object; // x0
  const MethodInfo *msg; // x1
  UnityEngine_GameObject_o *v18; // x24
  ScriptLineMessage_o *v19; // x22
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x9
  EventBulletinBoardEntity_BulletinBoardInfo_o *v22; // x8
  int32_t NextMessageId; // w23
  const MethodInfo *v24; // x2
  struct UISprite_o *baseIcon; // x8
  float mWidth; // s0
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x2
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 klass_low; // x10
  __int64 v39; // x8
  const MethodInfo *v40; // x3
  System_Collections_IEnumerator_o *v41; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B144C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___, isNotRandom, isSetUp);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptLineMessage__Add__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B144C4 = 1;
  }
  baseLabel = (Il2CppObject *)this->fields.baseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNotRandom);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   baseLabel,
                                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_28;
  v18 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
  if ( !Component_object )
    goto LABEL_28;
  v19 = (ScriptLineMessage_o *)Component_object;
  ScriptLineMessage__Init((ScriptLineMessage_o *)Component_object, 0LL);
  if ( isNotRandom )
  {
    switchInfo = this->fields.switchInfo;
    if ( switchInfo )
    {
      switchCount = this->fields.switchCount;
      if ( (unsigned int)switchCount >= switchInfo->max_length )
        sub_1BCAA44(Component_object, msg);
      v22 = switchInfo->m_Items[switchCount];
      if ( v22 )
      {
        msg = (const MethodInfo *)v22->fields.msg;
        NextMessageId = -1;
        goto LABEL_17;
      }
    }
LABEL_28:
    sub_1BCAA3C(Component_object, msg);
  }
  NextMessageId = TitleInfoEventBulletinBoardComponent__GetNextMessageId(this, msg);
  Component_object = (UnityEngine_GameObject_o *)TitleInfoEventBulletinBoardComponent__GetMessage(
                                                   this,
                                                   NextMessageId,
                                                   v24);
  msg = (const MethodInfo *)Component_object;
  if ( this->fields.isDispBaseIcon )
  {
    baseIcon = this->fields.baseIcon;
    if ( !baseIcon )
      goto LABEL_28;
    mWidth = (float)baseIcon->fields.mWidth;
  }
  else
  {
    mWidth = 0.0;
  }
  setPos = mWidth + setPos;
LABEL_17:
  ((void (__fastcall *)(ScriptLineMessage_o *, const MethodInfo *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v19->klass->vtable._7_SetText.method)(
    v19,
    msg,
    0LL,
    0LL,
    0LL,
    0LL,
    v19->klass[1]._1.image);
  UnityEngine_GameObject__SetActive(v18, 1, 0LL);
  GameObjectExtensions__SetParent(v18, (UnityEngine_Component_o *)this->fields.scrollerPanel, 0LL);
  v49.fields.y = v19->fields.rubyLineHeight;
  v49.fields.x = 0.0;
  v49.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(v18, v49, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v27, v28);
    byte_4B109C6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v18, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  GameObjectExtensions__SetLocalPositionX(v18, setPos, 0LL);
  TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(this, v19, v29);
  Component_object = (UnityEngine_GameObject_o *)this->fields.labels;
  if ( !Component_object )
    goto LABEL_28;
  v36 = *(_QWORD *)&Component_object->fields.m_CachedPtr;
  v37 = Method_System_Collections_Generic_List_ScriptLineMessage__Add__;
  ++HIDWORD(Component_object[1].klass);
  if ( !v36 )
    goto LABEL_28;
  klass_low = SLODWORD(Component_object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v36 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      (Il2CppObject *)v19,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    if ( isNotRandom )
      return;
  }
  else
  {
    v39 = v36 + 8 * klass_low;
    LODWORD(Component_object[1].klass) = klass_low + 1;
    *(_QWORD *)(v39 + 32) = v19;
    sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v19, v30, v31, v32, v33, v34, v35);
    if ( isNotRandom )
      return;
  }
  if ( this->fields.isDispWipeIcon )
  {
    v41 = TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(this, NextMessageId, isSetUp, v40);
    started = UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v41, 0LL);
    this->fields.coroutine = started;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.coroutine, (int64_t)started, v43, v44, v45, v46, v47, v48);
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *lineMessage,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v4; // x19
  int m_CancellationTokenSource; // w8
  TitleInfoEventBulletinBoardComponent_o *v6; // x20
  unsigned int v7; // w22
  __int64 v8; // x24
  UnityEngine_Object_o *v9; // x21
  UnityEngine_Object_o *v10; // x21
  TitleInfoEventBulletinBoardComponent_o *v11; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B144C7 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, lineMessage, method);
    byte_4B144C7 = 1;
  }
  if ( v4->fields.rubyRelativePositionY != 0.0 )
  {
    if ( !lineMessage )
      goto LABEL_22;
    this = (TitleInfoEventBulletinBoardComponent_o *)ScriptLineMessage__GetDispLabelArray(lineMessage, 0LL);
    if ( !this )
      goto LABEL_22;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v6 = this;
    if ( m_CancellationTokenSource >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= m_CancellationTokenSource )
          sub_1BCAA44(this, lineMessage);
        v8 = *((_QWORD *)&v6->fields.TerminalLocalPos.fields.x + (int)v7);
        if ( !v8 )
          break;
        v9 = *(UnityEngine_Object_o **)(v8 + 16);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, lineMessage);
        this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v10 = *(UnityEngine_Object_o **)(v8 + 24);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, lineMessage);
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
            v11 = this;
            this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Component__get_transform(
                                                               *(UnityEngine_Component_o **)(v8 + 16),
                                                               0LL);
            if ( !this )
              break;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(
              (UnityEngine_GameObject_o *)v11,
              localPosition.fields.y + v4->fields.rubyRelativePositionY,
              0LL);
          }
        }
        m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
        if ( (int)++v7 >= m_CancellationTokenSource )
          return;
      }
LABEL_22:
      sub_1BCAA3C(this, lineMessage);
    }
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  const MethodInfo *v17; // x1
  __int128 v18; // [xsp+0h] [xbp-80h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v19; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B144CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v14, v15);
    byte_4B144CA = 1;
  }
  memset(&v20, 0, 32);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v18,
    showStatusDic,
    (const MethodInfo_31F78AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v20.fields._dictionary = v18;
  v20.fields._current = v19;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v20,
            (const MethodInfo_3353C14 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( !BYTE4(v20.fields._current.fields.key) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        &v20,
        (const MethodInfo_3353D1C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      return;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v20,
    (const MethodInfo_3353D1C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v18,
    showStatusDic,
    (const MethodInfo_31F78AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v20.fields._dictionary = v18;
  v20.fields._current = v19;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v20,
            (const MethodInfo_3353C14 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
    EventRewardSaveData__SetBulletInBoardMessageState(
      this->fields.eventId,
      (int32_t)v20.fields._current.fields.key,
      0,
      0LL);
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v20,
    (const MethodInfo_3353D1C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
LABEL_15:
    sub_1BCAA3C(showStatusDic, method);
  System_Collections_Generic_Dictionary_int__bool___Clear(
    showStatusDic,
    (const MethodInfo_31F7650 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  TitleInfoEventBulletinBoardComponent__ResetShowStatus(this, v17);
}


void __fastcall TitleInfoEventBulletinBoardComponent__DeleteLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *label,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B144BF & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, label, method);
    byte_4B144BF = 1;
  }
  if ( !label )
    sub_1BCAA3C(this, label);
  ScriptLineMessage__DeleteLabels(label, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall TitleInfoEventBulletinBoardComponent__GetMessage(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x21
  System_String_o **p_monitor; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *monitor; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  _DWORD *v25; // x8
  __int64 v26; // x8
  System_String_o *v27; // x19
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B144CC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__,
      *(_QWORD *)&id,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v9, v10);
    byte_4B144CC = 1;
  }
  memset(&v30, 0, sizeof(v30));
  messages = this->fields.messages;
  if ( !messages )
    return 0LL;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    (System_Collections_Generic_List_object__o *)messages,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v30 = v29;
  do
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v12 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v30,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
      return 0LL;
    }
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_1BCAA3C(v12, v13);
  }
  while ( LODWORD(v30.fields._current[1].klass) != id );
  p_monitor = (System_String_o **)&v30.fields._current[1].monitor;
  if ( System_String__IsNullOrEmpty((System_String_o *)v30.fields._current[1].monitor, 0LL)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[2].monitor, 0LL) )
  {
    this->fields.isSwitchWipe = 1;
    monitor = (struct EventBulletinBoardEntity_BulletinBoardInfo_array *)current[2].monitor;
    this->fields.switchInfo = monitor;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.switchInfo, (int64_t)monitor, v16, v17, v18, v19, v20, v21);
    v25 = current[2].monitor;
    if ( !v25 )
      sub_1BCAA3C(v23, v24);
    if ( !v25[6] )
      sub_1BCAA44(v23, v24);
    v26 = *((_QWORD *)v25 + 4);
    if ( !v26 )
      sub_1BCAA3C(v23, v24);
    p_monitor = (System_String_o **)(v26 + 32);
  }
  v27 = *p_monitor;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  return v27;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextMessageId(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  const MethodInfo *v69; // x1
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Collections_Generic_List_object__o *v73; // x20
  __int64 v74; // x1
  void *showStatusDic; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  Il2CppObject *v79; // x22
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  bool v84; // zf
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x23
  System_Func_object__bool__o *v86; // x24
  Il2CppObject *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x1
  struct System_Object_array *items; // x8
  _QWORD *v96; // x9
  __int64 size; // x10
  Il2CppClass **v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  TitleInfoEventBulletinBoardComponent___c_c *v102; // x0
  System_Func_T1__T2__TResult__o *_9__57_0; // x22
  Il2CppObject *v104; // x23
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  __int64 v112; // x2
  __int64 v113; // x3
  System_Func_object__bool__o *v114; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v115; // x0
  System_Collections_Generic_List_object__o *v116; // x22
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  WeightRate_int__o *v120; // x21
  int32_t Data_60310724; // w23
  _BOOL8 v122; // x0
  __int64 v123; // x1
  int32_t v124; // w0
  int32_t v125; // w0
  int32_t eventId; // w0
  const MethodInfo *v127; // x3
  Il2CppObject *v129; // [xsp+8h] [xbp-C8h]
  __int128 v130; // [xsp+10h] [xbp-C0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v131; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v132; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v133; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4B144CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v25, v26);
    sub_1BCA7E0(&System_Func_EventBulletinBoardEntity__bool__TypeInfo, v27, v28);
    sub_1BCA7E0(
      &System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo,
      v29,
      v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v41, v42);
    sub_1BCA7E0(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__, v45, v46);
    sub_1BCA7E0(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__, v47, v48);
    sub_1BCA7E0(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo, v49, v50);
    sub_1BCA7E0(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__, v51, v52);
    sub_1BCA7E0(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo, v53, v54);
    sub_1BCA7E0(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v55, v56);
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, v57, v58);
    sub_1BCA7E0(&Method_WeightRate_int__getData___76831040, v59, v60);
    sub_1BCA7E0(&Method_WeightRate_int__getData__, v61, v62);
    sub_1BCA7E0(&Method_WeightRate_int__getTotalWeight__, v63, v64);
    sub_1BCA7E0(&Method_WeightRate_int__setWeight__, v65, v66);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v67, v68);
    byte_4B144CB = 1;
  }
  memset(&v133, 0, 32);
  memset(&v132, 0, sizeof(v132));
  v129 = (Il2CppObject *)sub_1BCAA2C(
                           TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo,
                           method,
                           v2,
                           v3);
  System_Object___ctor(v129, 0LL);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v69);
  v73 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo,
                                                       v70,
                                                       v71,
                                                       v72);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_48;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v130,
    (System_Collections_Generic_Dictionary_int__bool__o *)showStatusDic,
    (const MethodInfo_31F78AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v133.fields._dictionary = v130;
  v133.fields._current = v131;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v133,
            (const MethodInfo_3353C14 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    v79 = (Il2CppObject *)sub_1BCAA2C(
                            TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo,
                            v76,
                            v77,
                            v78);
    System_Object___ctor(v79, 0LL);
    if ( !v79 )
      sub_1BCAA3C(v80, v81);
    v84 = ((__int64)v133.fields._current.fields.key & 0xFF00000000LL) == 0;
    v79[1].klass = (Il2CppClass *)v133.fields._current.fields.key;
    if ( v84 )
    {
      messages = this->fields.messages;
      v86 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                             System_Func_EventBulletinBoardEntity__bool__TypeInfo,
                                             v81,
                                             v82,
                                             v83);
      System_Func_object__bool____ctor(
        v86,
        v79,
        Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__,
        0LL);
      v87 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
              (System_Collections_Generic_IEnumerable_TSource__o *)messages,
              (System_Func_TSource__bool__o *)v86,
              (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
      v94 = (int64_t)v87;
      if ( !v73 )
        sub_1BCAA3C(v87, v87);
      items = v73->fields._items;
      v96 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__;
      ++v73->fields._version;
      if ( !items )
        sub_1BCAA3C(v87, v87);
      size = v73->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v73,
          v87,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
      }
      else
      {
        v98 = &items->obj.klass + size;
        v73->fields._size = size + 1;
        v98[4] = (Il2CppClass *)v94;
        sub_1BCA784((PartyOrganizationUtility_o *)(v98 + 4), v94, v88, v89, v90, v91, v92, v93);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v133,
    (const MethodInfo_3353D1C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v102 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  if ( !TitleInfoEventBulletinBoardComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventBulletinBoardComponent___c_TypeInfo, v99);
    v102 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  }
  _9__57_0 = (System_Func_T1__T2__TResult__o *)v102->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v102->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v102, v99);
      v102 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
    }
    v104 = (Il2CppObject *)v102->static_fields->__9;
    _9__57_0 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                   System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo,
                                                   v99,
                                                   v100,
                                                   v101);
    System_Func_object__object__object____ctor(
      _9__57_0,
      v104,
      Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__,
      0LL);
    static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__o *)_9__57_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__57_0,
      (int64_t)_9__57_0,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
  }
  showStatusDic = System_Linq_Enumerable__Aggregate_object_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v73,
                    (System_Func_TSource__TSource__TSource__o *)_9__57_0,
                    (const MethodInfo_2F1ABD4 *)Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
  if ( !showStatusDic )
    goto LABEL_48;
  if ( !v129 )
    goto LABEL_48;
  LODWORD(v129[1].klass) = *((_DWORD *)showStatusDic + 8);
  v114 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                          System_Func_EventBulletinBoardEntity__bool__TypeInfo,
                                          v74,
                                          v112,
                                          v113);
  System_Func_object__bool____ctor(
    v114,
    v129,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__,
    0LL);
  v115 = System_Linq_Enumerable__Where_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v73,
           (System_Func_TSource__bool__o *)v114,
           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
  v116 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                        v115,
                                                        (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  v120 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, v117, v118, v119);
  WeightRate_int____ctor(v120, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
  if ( !v116 )
    goto LABEL_48;
  if ( v116->fields._size >= 2 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v130,
      v116,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    *(_OWORD *)&v132.fields._list = v130;
    for ( v132.fields._current = v131.fields.key;
          ;
          WeightRate_int___setWeight(
            v120,
            HIDWORD(v132.fields._current[2].klass),
            (int32_t)v132.fields._current[1].klass,
            (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__) )
    {
      v122 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v132,
               (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v122 )
        break;
      if ( !v132.fields._current )
        sub_1BCAA3C(v122, v123);
      if ( !v120 )
        sub_1BCAA3C(v122, v123);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v132,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( !v120 )
      goto LABEL_48;
    v124 = UnityEngine_Random__Range_70113984(0, v120->fields.totalweight, 0LL);
    showStatusDic = (void *)WeightRate_int___getData(
                              v120,
                              v124,
                              (const MethodInfo_398439C *)Method_WeightRate_int__getData__);
    Data_60310724 = (int)showStatusDic;
  }
  else
  {
    showStatusDic = System_Collections_Generic_List_object___get_Item(
                      v116,
                      0,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    if ( !showStatusDic )
      goto LABEL_48;
    Data_60310724 = *((_DWORD *)showStatusDic + 4);
  }
  if ( this->fields.isLastSeed )
  {
    showStatusDic = (void *)System_Linq_Enumerable__Count_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)v116,
                              (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    if ( (int)showStatusDic >= 2 && Data_60310724 == this->fields.lastMessageId )
    {
      if ( !v120 )
        goto LABEL_48;
      v125 = UnityEngine_Random__Range_70113984(0, v120->fields.totalweight, 0LL);
      Data_60310724 = WeightRate_int___getData_60310724(
                        v120,
                        v125,
                        this->fields.lastMessageId,
                        (const MethodInfo_39844C4 *)Method_WeightRate_int__getData___76831040);
    }
    eventId = this->fields.eventId;
    this->fields.isLastSeed = 0;
    EventRewardSaveData__SetBulletInBoardLastMessageId(eventId, 0, 0LL);
  }
  if ( !v73 )
LABEL_48:
    sub_1BCAA3C(showStatusDic, v74);
  if ( v73->fields._size == 1 )
  {
    this->fields.isLastSeed = 1;
    this->fields.lastMessageId = Data_60310724;
    EventRewardSaveData__SetBulletInBoardLastMessageId(Data_60310724, 0, 0LL);
  }
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, Data_60310724, 1, 0LL);
  TitleInfoEventBulletinBoardComponent__SetShowStatus(this, Data_60310724, 1, v127);
  return Data_60310724;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextRandomIdx(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_int__o *randomQue; // x0
  System_Collections_Generic_List_T__o **p_randomQue; // x20
  __int64 v21; // x1
  System_Collections_Generic_List_T__o *Item; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int v24; // w21
  int32_t v25; // w22
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1

  if ( (byte_4B144CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__RemoveAt__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___, v17, v18);
    byte_4B144CE = 1;
  }
  p_randomQue = (System_Collections_Generic_List_T__o **)&this->fields.randomQue;
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___RemoveAt(
      randomQue,
      0,
      (const MethodInfo_35863B8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    Item = *p_randomQue;
    if ( !*p_randomQue )
      goto LABEL_21;
    if ( Item->fields._size <= 1 )
    {
      Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_int___get_Item(
                                                       (System_Collections_Generic_List_int__o *)Item,
                                                       0,
                                                       (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      messages = this->fields.messages;
      if ( !messages )
        goto LABEL_21;
      v24 = (int)Item;
      v25 = 0;
      while ( v25 < messages->fields._size )
      {
        if ( v24 != v25 )
        {
          Item = *p_randomQue;
          if ( !*p_randomQue )
            goto LABEL_21;
          items = Item->fields._items;
          v27 = Method_System_Collections_Generic_List_int__Add__;
          ++Item->fields._version;
          if ( !items )
            goto LABEL_21;
          size = Item->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v25,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            messages = this->fields.messages;
          }
          else
          {
            Item->fields._size = size + 1;
            *((_DWORD *)items->m_Items + size) = v25;
          }
        }
        ++v25;
        if ( !messages )
          goto LABEL_21;
      }
      TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        *p_randomQue,
        1,
        (const MethodInfo_2FC2380 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    }
  }
  else
  {
    v29 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
    System_Collections_Generic_List_int____ctor(
      v29,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.randomQue = v29;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.randomQue, (int64_t)v29, v30, v31, v32, v33, v34, v35);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v36);
  }
  Item = *p_randomQue;
  if ( !*p_randomQue )
LABEL_21:
    sub_1BCAA3C(Item, v21);
  return System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)Item,
           0,
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_Component_o *bulletinBg; // x0
  __int64 v19; // x1
  struct UIPanel_o *scrollerPanel; // x8
  float v21; // s2
  System_String_o *baseIconName; // x22
  UISprite_o *baseIcon; // x23
  System_String_o *wipeIconFrameName; // x22
  UISprite_o *wipeIconFrame; // x23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t BulletInBoardLastMessageId; // w0
  const MethodInfo *v37; // x2
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B144C0 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&dispType, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v11, v12);
    byte_4B144C0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v38 = TitleInfoEventBulletinBoardComponent__localPosByDispType(this, dispType, v14);
  GameObjectExtensions__SetLocalPosition(gameObject, v38, 0LL);
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v15, v16);
    byte_4B109C6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v17, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  scrollerPanel = this->fields.scrollerPanel;
  if ( !scrollerPanel )
    goto LABEL_18;
  v21 = scrollerPanel->fields.mClipRange.fields.z * 0.5;
  this->fields.left = -v21;
  this->fields.right = v21;
  baseIcon = this->fields.baseIcon;
  baseIconName = this->fields.baseIconName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
  AtlasManager__SetBanner(baseIcon, baseIconName, 0LL);
  AtlasManager__SetBanner(this->fields.bulletinBg, this->fields.bulletinBgName, 0LL);
  AtlasManager__SetBanner(this->fields.bulletinTitle, this->fields.bulletinTitleName, 0LL);
  if ( this->fields.isDispWipeIcon )
  {
    wipeIconFrame = this->fields.wipeIconFrame;
    wipeIconFrameName = this->fields.wipeIconFrameName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
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
    sub_1BCAA3C(bulletinBg, v19);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bulletinBg, this->fields.isDispBaseIcon, 0LL);
  this->fields.eventId = eventId;
  v29 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v26,
                                                                v27,
                                                                v28);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v29,
    (const MethodInfo_31F6AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.showStatusDic = v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.showStatusDic, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  BulletInBoardLastMessageId = EventRewardSaveData__GetBulletInBoardLastMessageId(this->fields.eventId, 0LL);
  this->fields.lastMessageId = BulletInBoardLastMessageId;
  this->fields.isLastSeed = BulletInBoardLastMessageId > 0;
  TitleInfoEventBulletinBoardComponent__LoadAssetData(this, callBack, v37);
}


System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_2FC245C *method)
{
  const MethodInfo_2FC245C_RGCTXs *rgctx_data; // x21
  __int64 native_size; // x2
  _QWORD *v8; // x22
  void *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w0
  int v12; // w21
  int32_t v13; // w26
  MethodInfo *_2_System_Collections_Generic_List_T__get_Item; // x1
  void (__fastcall *methodPointer)(); // x0
  int32_t v16; // w28
  MethodInfo *v17; // x1
  void (__fastcall *v18)(); // x0
  const MethodInfo_2FC245C_RGCTXs *v19; // x8
  __int64 v20; // x4
  MethodInfo *_4_System_Collections_Generic_List_T__set_Item; // x1
  Il2CppMethodPointer v22; // x0
  const MethodInfo_2FC245C_RGCTXs *v23; // x8
  __int64 v24; // x4
  MethodInfo *v25; // x1
  Il2CppMethodPointer v26; // x0
  __int64 v28; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-38h]
  int32_t v30; // [xsp+14h] [xbp-2Ch]
  __int64 v31; // [xsp+18h] [xbp-28h]
  int *v32; // [xsp+20h] [xbp-20h] BYREF
  _QWORD *v33; // [xsp+28h] [xbp-18h]
  int v34; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v35; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v35 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method);
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_3_T->_2.native_size;
  v8 = (__int64 *)((char *)&v28 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v31 = native_size;
  v9 = memset(v8, 0, native_size);
  if ( !list )
    sub_1BCAA3C(v9, v10);
  v11 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
  v30 = withoutFirst;
  if ( v11 > v30 )
  {
    v12 = v30;
    v13 = v11;
    do
    {
      _2_System_Collections_Generic_List_T__get_Item = method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
      methodPointer = _2_System_Collections_Generic_List_T__get_Item->methodPointer;
      v34 = v12;
      v32 = &v34;
      v33 = v8;
      _2_System_Collections_Generic_List_T__get_Item->invoker_method(
        methodPointer,
        _2_System_Collections_Generic_List_T__get_Item,
        list,
        (void **)&v32,
        v8);
      memcpy(v8, v8, v31);
      v16 = UnityEngine_Random__Range_70113984(v30, v13, 0LL);
      v17 = method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
      v18 = v17->methodPointer;
      v34 = v16;
      v32 = &v34;
      v33 = v8;
      v17->invoker_method(v18, v17, list, (void **)&v32, v8);
      v19 = method->rgctx_data;
      v20 = (__int64)v8;
      if ( (v19->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v20 = *v8;
      _4_System_Collections_Generic_List_T__set_Item = v19->_4_System_Collections_Generic_List_T__set_Item;
      v22 = _4_System_Collections_Generic_List_T__set_Item->methodPointer;
      v34 = v12;
      v32 = &v34;
      v33 = (_QWORD *)v20;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))_4_System_Collections_Generic_List_T__set_Item->invoker_method)(
        v22,
        _4_System_Collections_Generic_List_T__set_Item,
        list,
        &v32);
      memcpy(v8, v8, v31);
      v23 = method->rgctx_data;
      v24 = (__int64)v8;
      v25 = v23->_4_System_Collections_Generic_List_T__set_Item;
      v26 = v25->methodPointer;
      if ( (v23->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v24 = *v8;
      v34 = v16;
      v32 = &v34;
      v33 = (_QWORD *)v24;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))v25->invoker_method)(
        v26,
        v25,
        list,
        &v32);
      ++v12;
    }
    while ( v13 != v12 );
  }
  return list;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_2FC2380 *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  int32_t size; // w21
  int32_t v7; // w22
  int32_t v8; // w23
  int32_t Item; // w24
  int32_t v10; // w25
  int32_t v11; // w0

  v5 = (System_Collections_Generic_List_int__o *)list;
  if ( !method->rgctx_data )
    list = (System_Collections_Generic_List_T__o *)sub_1C1C718(method);
  if ( !v5 )
    sub_1BCAA3C(list, withoutFirst);
  size = v5->fields._size;
  v7 = withoutFirst;
  if ( size > v7 )
  {
    v8 = v7;
    do
    {
      Item = System_Collections_Generic_List_int___get_Item(
               v5,
               v8,
               (const MethodInfo_3584948 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      v10 = UnityEngine_Random__Range_70113984(v7, size, 0LL);
      v11 = System_Collections_Generic_List_int___get_Item(
              v5,
              v10,
              (const MethodInfo_3584948 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_int___set_Item(
        v5,
        v8,
        v11,
        (const MethodInfo_358499C *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_int___set_Item(
        v5,
        v10,
        Item,
        (const MethodInfo_358499C *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      ++v8;
    }
    while ( size != v8 );
  }
  return (System_Collections_Generic_List_T__o *)v5;
}


void __fastcall TitleInfoEventBulletinBoardComponent__LoadAssetData(
        TitleInfoEventBulletinBoardComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_String_o *v29; // x0
  System_String_o *v30; // x19
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  AssetLoader_LoadEndDataHandler_o *v34; // x20
  __int64 v35; // x1

  if ( (byte_4B144CD & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callBack, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__, v8, v9);
    sub_1BCA7E0(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6348/*"EventUI/Prefabs/"*/, v12, v13);
    byte_4B144CD = 1;
  }
  v14 = sub_1BCAA2C(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo, callBack, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = callBack;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)callBack, v23, v24, v25, v26, v27, v28);
  v29 = System_Int32__ToString((int)this + 256, 0LL);
  v30 = System_String__Concat_62401220((System_String_o *)StringLiteral_6348/*"EventUI/Prefabs/"*/, v29, 0LL);
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v31, v32, v33);
  AssetLoader_LoadEndDataHandler___ctor(
    v34,
    (Il2CppObject *)v14,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v35);
  AssetManager__loadAssetStorage(v30, v34, 1, 0LL);
}


void __fastcall TitleInfoEventBulletinBoardComponent__ResetRandomQueue(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventBulletinBoardComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int32_t v9; // w20
  __int64 v10; // x9
  _QWORD *v11; // x10
  __int64 m_CancellationTokenSource_low; // x11

  v3 = this;
  if ( (byte_4B144CF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v4, v5);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1BCA7E0(
                                                       &Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___,
                                                       v6,
                                                       v7);
    byte_4B144CF = 1;
  }
  messages = v3->fields.messages;
  if ( !messages )
LABEL_12:
    sub_1BCAA3C(this, method);
  v9 = 0;
  while ( 1 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v3->fields.randomQue;
    if ( v9 >= messages->fields._size )
      break;
    if ( this )
    {
      v10 = *(_QWORD *)&this->fields.m_CachedPtr;
      v11 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v10 )
      {
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v10 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            v9,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
          messages = v3->fields.messages;
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(v10 + 4 * m_CancellationTokenSource_low + 32) = v9;
        }
        ++v9;
        if ( messages )
          continue;
      }
    }
    goto LABEL_12;
  }
  TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
    (System_Collections_Generic_List_T__o *)this,
    0,
    (const MethodInfo_2FC2380 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
}


void __fastcall TitleInfoEventBulletinBoardComponent__ResetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x24
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  __int64 v21; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v22; // x0
  const MethodInfo *v23; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v24; // x0
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B144C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v12, v13);
    byte_4B144C9 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  messages = this->fields.messages;
  if ( !messages )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)messages,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v15 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1BCAA3C(v15, v16);
    if ( EventRewardSaveData__GetBulletInBoardMessageState(
           this->fields.eventId,
           (int32_t)v27.fields._current[1].klass,
           0LL) )
    {
      TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 1, v19);
    }
    showStatusDic = this->fields.showStatusDic;
    if ( !showStatusDic )
      sub_1BCAA3C(0LL, v18);
    if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            showStatusDic,
            (int32_t)current[1].klass,
            (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      goto LABEL_14;
    v22 = this->fields.showStatusDic;
    if ( !v22 )
      sub_1BCAA3C(0LL, v21);
    if ( System_Collections_Generic_Dictionary_int__bool___get_Item(
           v22,
           (int32_t)current[1].klass,
           (const MethodInfo_31F7418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
    {
LABEL_14:
      v24 = this->fields.showStatusDic;
      if ( !v24 )
        sub_1BCAA3C(0LL, v21);
      if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
             v24,
             (int32_t)current[1].klass,
             (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      {
        continue;
      }
    }
    TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 0, v23);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__SetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isShow,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0

  if ( (byte_4B144C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, *(_QWORD *)&id, isShow);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v9, v10);
    byte_4B144C8 = 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic
    || (showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                                                                showStatusDic,
                                                                                id,
                                                                                (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__),
        !this->fields.showStatusDic) )
  {
    sub_1BCAA3C(showStatusDic, *(_QWORD *)&id);
  }
  if ( ((unsigned __int8)showStatusDic & 1) != 0 )
    System_Collections_Generic_Dictionary_int__bool___set_Item(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  else
    System_Collections_Generic_Dictionary_int__bool___Add(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_31F74C0 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, id, isShow, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventBulletinBoardComponent__SetUp(
        TitleInfoEventBulletinBoardComponent_o *this,
        System_Collections_Generic_List_EventBulletinBoardEntity__o *boardMessages,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UILabel_o *svtNameLabel; // x0
  const MethodInfo *v18; // x3

  if ( (byte_4B144C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, boardMessages, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B144C2 = 1;
  }
  this->fields.messages = boardMessages;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.messages,
    (int64_t)boardMessages,
    *(int64_t *)&eventId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventId = eventId;
  TitleInfoEventBulletinBoardComponent__resetLabelList(this, v15);
  coroutine = this->fields.coroutine;
  if ( coroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_70140136((UnityEngine_MonoBehaviour_o *)this, coroutine, 0LL);
  svtNameLabel = this->fields.svtNameLabel;
  if ( !svtNameLabel
    || (UILabel__set_text(svtNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon2) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.showStatusDic) == 0LL) )
  {
    sub_1BCAA3C(svtNameLabel, coroutine);
  }
  System_Collections_Generic_Dictionary_int__bool___Clear(
    (System_Collections_Generic_Dictionary_int__bool__o *)svtNameLabel,
    (const MethodInfo_31F7650 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  if ( boardMessages )
  {
    if ( boardMessages->fields._size >= 1 )
      TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        this,
        this->fields.right + this->fields.setUpSpaceBetweenMessages,
        0,
        1,
        v18);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isSetUp,
        const MethodInfo *method)
{
  bool v7; // w22
  __int64 v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B144C5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo,
      *(_QWORD *)&id,
      isSetUp);
    byte_4B144C5 = 1;
  }
  v7 = isSetUp;
  v8 = sub_1BCAA2C(
         TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo,
         *(_QWORD *)&id,
         isSetUp,
         method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 48) = id;
  *(_BYTE *)(v8 + 32) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventBulletinBoardComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x23
  EventBulletinBoardEntity_BulletinBoardInfo_o *v10; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v11; // x9
  __int64 v12; // x8
  __int64 v13; // x10
  EventBulletinBoardEntity_BulletinBoardInfo_o *v14; // x9
  UISprite_o *v15; // x21
  int32_t eventId; // w20
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x22
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v23; // x8
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4B144C6 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1BCA7E0(&StringLiteral_19559/*"face_{0:D3}"*/, v6, v7);
    byte_4B144C6 = 1;
  }
  switchInfo = v3->fields.switchInfo;
  if ( !switchInfo )
    goto LABEL_24;
  switchCount = v3->fields.switchCount;
  if ( (unsigned int)switchCount >= switchInfo->max_length )
    goto LABEL_25;
  v10 = switchInfo->m_Items[switchCount];
  if ( !v10 )
    goto LABEL_24;
  this = (TitleInfoEventBulletinBoardComponent_o *)v3->fields.svtNameLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)this, v10->fields.name, 0LL);
  v11 = v3->fields.switchInfo;
  v12 = 176LL;
  if ( (switchCount & 1) == 0 )
    v12 = 168LL;
  if ( !v11 )
    goto LABEL_24;
  v13 = v3->fields.switchCount;
  if ( (unsigned int)v13 >= v11->max_length )
LABEL_25:
    sub_1BCAA44(this, method);
  v14 = v11->m_Items[v13];
  if ( !v14 )
    goto LABEL_24;
  v15 = *(UISprite_o **)((char *)&v3->klass + v12);
  eventId = v3->fields.eventId;
  iconId = v14->fields.iconId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v19 = System_String__Format((System_String_o *)StringLiteral_19559/*"face_{0:D3}"*/, v17, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
  AtlasManager__SetEventUI_38574572(eventId, v15, v19, 0LL);
  if ( (switchCount & 1) != 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v3->fields.wipeIcon;
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      TweenAlpha__Begin(gameObject, v3->fields.wipeIconCrossFadeTime, 0.0, 0LL);
      this = (TitleInfoEventBulletinBoardComponent_o *)v3->fields.wipeIcon2;
      if ( this )
        goto LABEL_20;
    }
LABEL_24:
    sub_1BCAA3C(this, method);
  }
  this = (TitleInfoEventBulletinBoardComponent_o *)v3->fields.wipeIcon2;
  if ( !this )
    goto LABEL_24;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  TweenAlpha__Begin(v20, v3->fields.wipeIconCrossFadeTime, 0.0, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)v3->fields.wipeIcon;
  if ( !this )
    goto LABEL_24;
LABEL_20:
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)TweenAlpha__Begin(v22, v3->fields.wipeIconCrossFadeTime, 1.0, 0LL);
  v23 = v3->fields.switchInfo;
  if ( !v23 )
    goto LABEL_24;
  if ( v3->fields.switchCount >= (signed int)(v23->max_length - 1) )
  {
    v3->fields.isSwitchWipe = 0;
    v3->fields.switchCount = 0;
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__Update(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  char v18; // w22
  float v19; // s0
  float v20; // s9
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  float v25; // s0
  UnityEngine_GameObject_o *v26; // x0
  float LocalPositionX; // s0
  const MethodInfo *v28; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v30; // x2
  float right; // s0
  const MethodInfo *v32; // x1
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B144BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__, v14, v15);
    byte_4B144BE = 1;
  }
  memset(&v34, 0, sizeof(v34));
  labels = this->fields.labels;
  if ( labels )
  {
    messages = this->fields.messages;
    if ( messages )
    {
      if ( messages->fields._size < 1 )
        return;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v33,
        (System_Collections_Generic_List_object__o *)labels,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
      v18 = 0;
      v34 = v33;
      v19 = 0.0;
LABEL_7:
      v20 = v19;
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v34,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
        if ( !v21 )
          break;
        current = v34.fields._current;
        if ( !v34.fields._current )
          sub_1BCAA3C(v21, v22);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v34.fields._current, 0LL);
        v25 = UnityEngine_Time__get_deltaTime(0LL) * (float)-this->fields.messageScrollSpeed;
        GameObjectExtensions__AddLocalPositionX(gameObject, v25, 0LL);
        v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(v26, 0LL);
        v19 = LocalPositionX + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)current, 0LL).fields.x;
        v18 |= v19 < this->fields.left;
        if ( v19 > v20 )
          goto LABEL_7;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v34,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
      if ( (v18 & 1) == 0 )
        goto LABEL_16;
      labels = this->fields.labels;
      if ( labels )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)labels,
                 0,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__);
        TitleInfoEventBulletinBoardComponent__DeleteLabel(
          (TitleInfoEventBulletinBoardComponent_o *)Item,
          (ScriptLineMessage_o *)Item,
          v30);
        labels = this->fields.labels;
        if ( labels )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)labels,
            0,
            (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
LABEL_16:
          right = this->fields.right;
          if ( v20 < right )
          {
            if ( this->fields.isSwitchWipe )
            {
              ++this->fields.switchCount;
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(this, right, 1, 0, v28);
              TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(this, v32);
            }
            else
            {
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(
                this,
                v20 + this->fields.spaceBetweenMessages,
                0,
                0,
                v28);
            }
          }
          return;
        }
      }
    }
    sub_1BCAA3C(labels, method);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall TitleInfoEventBulletinBoardComponent__localPosByDispType(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t dispType,
        const MethodInfo *method)
{
  bool IsUnderVista; // w0
  struct UnityEngine_Vector3_o *p_EventLocalPos; // x8
  float *p_y; // x9
  float *p_z; // x10
  float v9; // s2
  float v10; // s1
  float x; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B144C1 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, *(_QWORD *)&dispType, method);
    byte_4B144C1 = 1;
  }
  if ( this->fields.enableFSPos )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, *(_QWORD *)&dispType);
    IsUnderVista = FSUtility__IsUnderVista(0LL);
  }
  else
  {
    IsUnderVista = 1;
  }
  if ( dispType == 1 )
  {
    if ( IsUnderVista )
    {
      p_EventLocalPos = &this->fields.EventLocalPos;
      p_y = &this->fields.EventLocalPos.fields.y;
      p_z = &this->fields.EventLocalPos.fields.z;
    }
    else
    {
      p_EventLocalPos = &this->fields.EventFSLocalPos;
      p_y = &this->fields.EventFSLocalPos.fields.y;
      p_z = &this->fields.EventFSLocalPos.fields.z;
    }
  }
  else if ( IsUnderVista )
  {
    p_EventLocalPos = &this->fields.TerminalLocalPos;
    p_y = &this->fields.TerminalLocalPos.fields.y;
    p_z = &this->fields.TerminalLocalPos.fields.z;
  }
  else
  {
    p_EventLocalPos = &this->fields.TerminalFSLocalPos;
    p_y = &this->fields.TerminalFSLocalPos.fields.y;
    p_z = &this->fields.TerminalFSLocalPos.fields.z;
  }
  v9 = *p_z;
  v10 = *p_y;
  x = p_EventLocalPos->fields.x;
  result.fields.z = v9;
  result.fields.y = v10;
  result.fields.x = x;
  return result;
}


void __fastcall TitleInfoEventBulletinBoardComponent__resetLabelList(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  struct System_Collections_Generic_List_ScriptLineMessage__o **p_labels; // x20
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x2
  __int64 v23; // x0
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *v25; // x8
  int32_t size; // w2
  int v27; // w9
  System_Collections_Generic_List_object__o *v28; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Collections_Generic_List_int__o *randomQue; // x8
  int v36; // w9
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B144C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptLineMessage__Clear__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ScriptLineMessage___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ScriptLineMessage__TypeInfo, v17, v18);
    byte_4B144C3 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  p_labels = &this->fields.labels;
  labels = this->fields.labels;
  if ( labels )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      (System_Collections_Generic_List_object__o *)labels,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v37,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
      if ( !v21 )
        break;
      TitleInfoEventBulletinBoardComponent__DeleteLabel(
        (TitleInfoEventBulletinBoardComponent_o *)v21,
        (ScriptLineMessage_o *)v37.fields._current,
        v22);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    v25 = *p_labels;
    if ( !*p_labels )
      sub_1BCAA3C(v23, v24);
    size = v25->fields._size;
    v27 = v25->fields._version + 1;
    v25->fields._size = 0;
    v25->fields._version = v27;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v25->fields._items, 0, size, 0LL);
  }
  else
  {
    v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_ScriptLineMessage__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v28,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    *p_labels = (struct System_Collections_Generic_List_ScriptLineMessage__o *)v28;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.labels, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  }
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    v36 = randomQue->fields._version + 1;
    randomQue->fields._size = 0;
    randomQue->fields._version = v36;
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v24);
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
  __int64 v2; // x2
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
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
  int32_t _1__state; // w8
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x23
  Il2CppObject *Master_object; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x8
  float v30; // s8
  UnityEngine_WaitForSeconds_o *v31; // x20
  PartyOrganizationUtility_o *v32; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  bool result; // w0
  struct EventBulletinBoardEntity_o *ent_5__3; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v42; // x8
  int32_t eventId; // w20
  UISprite_o *wipeIcon; // x21
  Il2CppObject *v45; // x0
  __int64 v46; // x1
  System_String_o *v47; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventBulletinBoardEntity_o *v49; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v50; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v51; // x8
  System_String_o *name; // x1
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  struct EventBulletinBoardEntity_o **p_ent_5__3; // x20
  __int64 v56; // x2
  __int64 v57; // x3
  float wipeIconFadeOutTime; // s8
  UnityEngine_WaitForSeconds_o *v59; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4B144D3 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_19559/*"face_{0:D3}"*/, v14, v15);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)sub_1BCA7E0(
                                                                                         &StringLiteral_1/*""*/,
                                                                                         v16,
                                                                                         v17);
    byte_4B144D3 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    ent_5__3 = v3->fields._ent_5__3;
    if ( !ent_5__3 )
      goto LABEL_39;
    script = ent_5__3->fields.script;
    if ( !script )
      goto LABEL_39;
    if ( script->max_length )
    {
      v42 = script->m_Items[0];
      if ( !v42 )
        goto LABEL_39;
      eventId = _4__this->fields.eventId;
      wipeIcon = _4__this->fields.wipeIcon;
      iconId = v42->fields.iconId;
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      v47 = System_String__Format((System_String_o *)StringLiteral_19559/*"face_{0:D3}"*/, v45, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v46);
      AtlasManager__SetEventUI_38574572(eventId, wipeIcon, v47, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( !this )
        goto LABEL_39;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)TweenAlpha__Begin(
                                                                                           gameObject,
                                                                                           _4__this->fields.wipeIconFadeInTime,
                                                                                           1.0,
                                                                                           0LL);
      v49 = v3->fields._ent_5__3;
      if ( !v49 )
        goto LABEL_39;
      v50 = v49->fields.script;
      if ( !v50 )
        goto LABEL_39;
      if ( v50->max_length )
      {
        v51 = v50->m_Items[0];
        if ( !v51 )
          goto LABEL_39;
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.svtNameLabel;
        if ( !this )
          goto LABEL_39;
        name = v51->fields.name;
        goto LABEL_36;
      }
    }
    sub_1BCAA44(this, method);
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( this )
      {
        v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        TweenAlpha__Begin(v53, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon2;
        if ( this )
        {
          v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          TweenAlpha__Begin(v54, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
          this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v3->fields._bulletinBoardMst_5__2;
          if ( this )
          {
            p_ent_5__3 = &v3->fields._ent_5__3;
            this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                                 (Il2CppObject **)&v3->fields._ent_5__3,
                                                                                                 v3->fields.id,
                                                                                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*p_ent_5__3 )
                goto LABEL_39;
              if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)(*p_ent_5__3)->fields.script, 0LL) )
              {
                wipeIconFadeOutTime = _4__this->fields.wipeIconFadeOutTime;
                v59 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v56, v57);
                UnityEngine_WaitForSeconds___ctor(v59, wipeIconFadeOutTime, 0LL);
                v3->fields.__2__current = (Il2CppObject *)v59;
                p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
                sub_1BCA784(p__2__current, (int64_t)v59, v61, v62, v63, v64, v65, v66);
                *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
                return 1;
              }
            }
            this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.svtNameLabel;
            if ( this )
            {
              name = (System_String_o *)StringLiteral_1/*""*/;
LABEL_36:
              UILabel__set_text((UILabel_o *)this, name, 0LL);
              return 0;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
  v3->fields._bulletinBoardMst_5__2 = (struct EventBulletinBoardMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields._bulletinBoardMst_5__2,
    (int64_t)Master_object,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( !_4__this )
    goto LABEL_39;
  if ( v3->fields.isSetUp )
    v29 = 216LL;
  else
    v29 = 212LL;
  v30 = *(float *)((char *)&_4__this->klass + v29);
  v31 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v27, v28);
  UnityEngine_WaitForSeconds___ctor(v31, v30, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v31;
  v32 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(v32, (int64_t)v31, v33, v34, v35, v36, v37, v38);
  result = 1;
  *(_DWORD *)&v32[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B144D0 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v1, v2);
    byte_4B144D0 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(TitleInfoEventBulletinBoardComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventBulletinBoardComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B144D1 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)sub_1BCA7E0(
                                                                             &Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__,
                                                                             t,
                                                                             method);
    byte_4B144D1 = 1;
  }
  if ( !t )
    sub_1BCAA3C(this, t);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *v9; // x19
  PartyOrganizationUtility_o *_4__this; // x8
  struct TitleInfoEventBulletinBoardComponent_o *v11; // x8
  int32_t eventId; // w20
  System_Action_o *callBack; // x19

  v9 = this;
  if ( (byte_4B144D2 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)sub_1BCA7E0(
                                                                             &AtlasManager_TypeInfo,
                                                                             assetData,
                                                                             method);
    byte_4B144D2 = 1;
  }
  _4__this = (PartyOrganizationUtility_o *)v9->fields.__4__this;
  if ( !_4__this
    || (_4__this[2].klass = (PartyOrganizationUtility_c *)assetData,
        sub_1BCA784(_4__this + 2, (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7),
        (v11 = v9->fields.__4__this) == 0LL) )
  {
    sub_1BCAA3C(this, assetData);
  }
  eventId = v11->fields.eventId;
  callBack = v9->fields.callBack;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, assetData);
  AtlasManager__LoadEventUI_38574292(eventId, callBack, 1, 0LL);
}