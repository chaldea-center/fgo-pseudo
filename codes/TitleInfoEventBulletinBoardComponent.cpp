void __fastcall TitleInfoEventBulletinBoardComponent___ctor(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  this->fields.rubyRelativePositionY = 12.0;
  *(_QWORD *)&this->fields.messageScrollSpeed = 0x42AA000040A00000LL;
  *(_OWORD *)&this->fields.wipeIconFadeOutStartTime = xmmword_C0E460;
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
  Il2CppObject *baseLabel; // x22
  UnityEngine_GameObject_o *Component_object; // x0
  const MethodInfo *msg; // x1
  UnityEngine_GameObject_o *v15; // x24
  ScriptLineMessage_o *v16; // x22
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x9
  EventBulletinBoardEntity_BulletinBoardInfo_o *v19; // x8
  int32_t NextMessageId; // w23
  const MethodInfo *v21; // x2
  struct UISprite_o *baseIcon; // x8
  float mWidth; // s0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 klass_low; // x10
  __int64 v35; // x8
  const MethodInfo *v36; // x3
  System_Collections_IEnumerator_o *v37; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C200DF & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___, isNotRandom);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptLineMessage__Add__, v9);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    byte_4C200DF = 1;
  }
  baseLabel = (Il2CppObject *)this->fields.baseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   baseLabel,
                                                   (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_28;
  v15 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
  if ( !Component_object )
    goto LABEL_28;
  v16 = (ScriptLineMessage_o *)Component_object;
  ScriptLineMessage__Init((ScriptLineMessage_o *)Component_object, 0LL);
  if ( isNotRandom )
  {
    switchInfo = this->fields.switchInfo;
    if ( switchInfo )
    {
      switchCount = this->fields.switchCount;
      if ( (unsigned int)switchCount >= switchInfo->max_length )
        sub_1C3B9C8(Component_object, msg);
      v19 = switchInfo->m_Items[switchCount];
      if ( v19 )
      {
        msg = (const MethodInfo *)v19->fields.msg;
        NextMessageId = -1;
        goto LABEL_17;
      }
    }
LABEL_28:
    sub_1C3B9C0(Component_object, msg);
  }
  NextMessageId = TitleInfoEventBulletinBoardComponent__GetNextMessageId(this, msg);
  Component_object = (UnityEngine_GameObject_o *)TitleInfoEventBulletinBoardComponent__GetMessage(
                                                   this,
                                                   NextMessageId,
                                                   v21);
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
  ((void (__fastcall *)(ScriptLineMessage_o *, const MethodInfo *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v16->klass->vtable._7_SetText.method)(
    v16,
    msg,
    0LL,
    0LL,
    0LL,
    0LL,
    v16->klass[1]._1.image);
  UnityEngine_GameObject__SetActive(v15, 1, 0LL);
  GameObjectExtensions__SetParent(v15, (UnityEngine_Component_o *)this->fields.scrollerPanel, 0LL);
  v45.fields.y = v16->fields.rubyLineHeight;
  v45.fields.x = 0.0;
  v45.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(v15, v45, 0LL);
  if ( !byte_4C1C516 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v24);
    byte_4C1C516 = 1;
  }
  GameObjectExtensions__SetLocalScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  GameObjectExtensions__SetLocalPositionX(v15, setPos, 0LL);
  TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(this, v16, v25);
  Component_object = (UnityEngine_GameObject_o *)this->fields.labels;
  if ( !Component_object )
    goto LABEL_28;
  v32 = *(_QWORD *)&Component_object->fields.m_CachedPtr;
  v33 = Method_System_Collections_Generic_List_ScriptLineMessage__Add__;
  ++HIDWORD(Component_object[1].klass);
  if ( !v32 )
    goto LABEL_28;
  klass_low = SLODWORD(Component_object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v32 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      (Il2CppObject *)v16,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    if ( isNotRandom )
      return;
  }
  else
  {
    v35 = v32 + 8 * klass_low;
    LODWORD(Component_object[1].klass) = klass_low + 1;
    *(_QWORD *)(v35 + 32) = v16;
    sub_1C3B708((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)v16, v26, v27, v28, v29, v30, v31);
    if ( isNotRandom )
      return;
  }
  if ( this->fields.isDispWipeIcon )
  {
    v37 = TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(this, NextMessageId, isSetUp, v36);
    started = UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v37, 0LL);
    this->fields.coroutine = started;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.coroutine, (int64_t)started, v39, v40, v41, v42, v43, v44);
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
  if ( (byte_4C200E2 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, lineMessage);
    byte_4C200E2 = 1;
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
          sub_1C3B9C8(this, lineMessage);
        v8 = *((_QWORD *)&v6->fields.TerminalLocalPos.fields.x + (int)v7);
        if ( !v8 )
          break;
        v9 = *(UnityEngine_Object_o **)(v8 + 16);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v10 = *(UnityEngine_Object_o **)(v8 + 24);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C3B9C0(this, lineMessage);
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
  const MethodInfo *v10; // x1
  __int128 v11; // [xsp+0h] [xbp-80h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v12; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C200E5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v8);
    byte_4C200E5 = 1;
  }
  memset(&v13, 0, 32);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v11,
    showStatusDic,
    (const MethodInfo_32E63C4 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v13.fields._dictionary = v11;
  v13.fields._current = v12;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v13,
            (const MethodInfo_3440E60 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( !BYTE4(v13.fields._current.fields.key) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        &v13,
        (const MethodInfo_3440F68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      return;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v13,
    (const MethodInfo_3440F68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v11,
    showStatusDic,
    (const MethodInfo_32E63C4 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v13.fields._dictionary = v11;
  v13.fields._current = v12;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v13,
            (const MethodInfo_3440E60 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
    EventRewardSaveData__SetBulletInBoardMessageState(
      this->fields.eventId,
      (int32_t)v13.fields._current.fields.key,
      0,
      0LL);
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v13,
    (const MethodInfo_3440F68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
LABEL_15:
    sub_1C3B9C0(showStatusDic, method);
  System_Collections_Generic_Dictionary_int__bool___Clear(
    showStatusDic,
    (const MethodInfo_32E6168 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  TitleInfoEventBulletinBoardComponent__ResetShowStatus(this, v10);
}


void __fastcall TitleInfoEventBulletinBoardComponent__DeleteLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *label,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C200DA & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, label);
    byte_4C200DA = 1;
  }
  if ( !label )
    sub_1C3B9C0(this, label);
  ScriptLineMessage__DeleteLabels(label, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
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
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  System_String_o **p_monitor; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *monitor; // x1
  __int64 v20; // x0
  __int64 v21; // x1
  _DWORD *v22; // x8
  __int64 v23; // x8
  System_String_o *v24; // x19
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C200E7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, *(_QWORD *)&id);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v7);
    byte_4C200E7 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  messages = this->fields.messages;
  if ( !messages )
    return 0LL;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)messages,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v27 = v26;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v27,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
      return 0LL;
    }
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C3B9C0(v9, v10);
  }
  while ( LODWORD(v27.fields._current[1].klass) != id );
  p_monitor = (System_String_o **)&v27.fields._current[1].monitor;
  if ( System_String__IsNullOrEmpty((System_String_o *)v27.fields._current[1].monitor, 0LL)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[2].monitor, 0LL) )
  {
    this->fields.isSwitchWipe = 1;
    monitor = (struct EventBulletinBoardEntity_BulletinBoardInfo_array *)current[2].monitor;
    this->fields.switchInfo = monitor;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.switchInfo, (int64_t)monitor, v13, v14, v15, v16, v17, v18);
    v22 = current[2].monitor;
    if ( !v22 )
      sub_1C3B9C0(v20, v21);
    if ( !v22[6] )
      sub_1C3B9C8(v20, v21);
    v23 = *((_QWORD *)v22 + 4);
    if ( !v23 )
      sub_1C3B9C0(v20, v21);
    p_monitor = (System_String_o **)(v23 + 32);
  }
  v24 = *p_monitor;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  return v24;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextMessageId(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
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
  const MethodInfo *v35; // x1
  System_Collections_Generic_List_object__o *v36; // x20
  __int64 v37; // x1
  void *showStatusDic; // x0
  Il2CppObject *v39; // x22
  __int64 v40; // x0
  __int64 v41; // x1
  bool v42; // zf
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x23
  System_Func_object__bool__o *v44; // x24
  Il2CppObject *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  Il2CppClass **v56; // x0
  TitleInfoEventBulletinBoardComponent___c_c *v57; // x0
  System_Func_T1__T2__TResult__o *_9__57_0; // x22
  Il2CppObject *v59; // x23
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Func_object__bool__o *v67; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Collections_Generic_List_object__o *v69; // x22
  WeightRate_int__o *v70; // x21
  int32_t Data_61281880; // w23
  _BOOL8 v72; // x0
  __int64 v73; // x1
  int32_t v74; // w0
  int32_t v75; // w0
  int32_t eventId; // w0
  const MethodInfo *v77; // x3
  Il2CppObject *v79; // [xsp+8h] [xbp-C8h]
  __int128 v80; // [xsp+10h] [xbp-C0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v81; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v83; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4C200E6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, method);
    sub_1C3B764(&Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___, v3);
    sub_1C3B764(&Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___, v4);
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v13);
    sub_1C3B764(&System_Func_EventBulletinBoardEntity__bool__TypeInfo, v14);
    sub_1C3B764(
      &System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo,
      v15);
    sub_1C3B764(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v20);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v21);
    sub_1C3B764(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v22);
    sub_1C3B764(&Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__, v23);
    sub_1C3B764(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__, v24);
    sub_1C3B764(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo, v25);
    sub_1C3B764(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__, v26);
    sub_1C3B764(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo, v27);
    sub_1C3B764(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v28);
    sub_1C3B764(&Method_WeightRate_int___ctor__, v29);
    sub_1C3B764(&Method_WeightRate_int__getData___77897048, v30);
    sub_1C3B764(&Method_WeightRate_int__getData__, v31);
    sub_1C3B764(&Method_WeightRate_int__getTotalWeight__, v32);
    sub_1C3B764(&Method_WeightRate_int__setWeight__, v33);
    sub_1C3B764(&WeightRate_int__TypeInfo, v34);
    byte_4C200E6 = 1;
  }
  memset(&v83, 0, 32);
  memset(&v82, 0, sizeof(v82));
  v79 = (Il2CppObject *)sub_1C3B9B0(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor(v79, 0LL);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_48;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v80,
    (System_Collections_Generic_Dictionary_int__bool__o *)showStatusDic,
    (const MethodInfo_32E63C4 *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v83.fields._dictionary = v80;
  v83.fields._current = v81;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v83,
            (const MethodInfo_3440E60 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    v39 = (Il2CppObject *)sub_1C3B9B0(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo);
    System_Object___ctor(v39, 0LL);
    if ( !v39 )
      sub_1C3B9C0(v40, v41);
    v42 = ((__int64)v83.fields._current.fields.key & 0xFF00000000LL) == 0;
    v39[1].klass = (Il2CppClass *)v83.fields._current.fields.key;
    if ( v42 )
    {
      messages = this->fields.messages;
      v44 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v44,
        v39,
        Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__,
        0LL);
      v45 = System_Linq_Enumerable__FirstOrDefault_object__50415372(
              (System_Collections_Generic_IEnumerable_TSource__o *)messages,
              (System_Func_TSource__bool__o *)v44,
              (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
      v52 = (int64_t)v45;
      if ( !v36 )
        sub_1C3B9C0(v45, v45);
      items = v36->fields._items;
      v54 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__;
      ++v36->fields._version;
      if ( !items )
        sub_1C3B9C0(v45, v45);
      size = v36->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          v45,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v56 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v56[4] = (Il2CppClass *)v52;
        sub_1C3B708((PartyOrganizationUtility_o *)(v56 + 4), v52, v46, v47, v48, v49, v50, v51);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v83,
    (const MethodInfo_3440F68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v57 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  if ( !TitleInfoEventBulletinBoardComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    v57 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  }
  _9__57_0 = (System_Func_T1__T2__TResult__o *)v57->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      v57 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
    }
    v59 = (Il2CppObject *)v57->static_fields->__9;
    _9__57_0 = (System_Func_T1__T2__TResult__o *)sub_1C3B9B0(System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__57_0,
      v59,
      Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__,
      0LL);
    static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__o *)_9__57_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__57_0,
      (int64_t)_9__57_0,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66);
  }
  showStatusDic = System_Linq_Enumerable__Aggregate_object_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                    (System_Func_TSource__TSource__TSource__o *)_9__57_0,
                    (const MethodInfo_2FF7F90 *)Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
  if ( !showStatusDic )
    goto LABEL_48;
  if ( !v79 )
    goto LABEL_48;
  LODWORD(v79[1].klass) = *((_DWORD *)showStatusDic + 8);
  v67 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v67,
    v79,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__,
    0LL);
  v68 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          (System_Func_TSource__bool__o *)v67,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
  v69 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v68,
                                                       (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  v70 = (WeightRate_int__o *)sub_1C3B9B0(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v70, (const MethodInfo_3A71BA0 *)Method_WeightRate_int___ctor__);
  if ( !v69 )
    goto LABEL_48;
  if ( v69->fields._size >= 2 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v80,
      v69,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    *(_OWORD *)&v82.fields._list = v80;
    for ( v82.fields._current = v81.fields.key;
          ;
          WeightRate_int___setWeight(
            v70,
            HIDWORD(v82.fields._current[2].klass),
            (int32_t)v82.fields._current[1].klass,
            (const MethodInfo_3A710BC *)Method_WeightRate_int__setWeight__) )
    {
      v72 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v82,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v72 )
        break;
      if ( !v82.fields._current )
        sub_1C3B9C0(v72, v73);
      if ( !v70 )
        sub_1C3B9C0(v72, v73);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v82,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( !v70 )
      goto LABEL_48;
    v74 = UnityEngine_Random__Range_71082488(0, v70->fields.totalweight, 0LL);
    showStatusDic = (void *)WeightRate_int___getData(
                              v70,
                              v74,
                              (const MethodInfo_3A71530 *)Method_WeightRate_int__getData__);
    Data_61281880 = (int)showStatusDic;
  }
  else
  {
    showStatusDic = System_Collections_Generic_List_object___get_Item(
                      v69,
                      0,
                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    if ( !showStatusDic )
      goto LABEL_48;
    Data_61281880 = *((_DWORD *)showStatusDic + 4);
  }
  if ( this->fields.isLastSeed )
  {
    showStatusDic = (void *)System_Linq_Enumerable__Count_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)v69,
                              (const MethodInfo_300B768 *)Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    if ( (int)showStatusDic >= 2 && Data_61281880 == this->fields.lastMessageId )
    {
      if ( !v70 )
        goto LABEL_48;
      v75 = UnityEngine_Random__Range_71082488(0, v70->fields.totalweight, 0LL);
      Data_61281880 = WeightRate_int___getData_61281880(
                        v70,
                        v75,
                        this->fields.lastMessageId,
                        (const MethodInfo_3A71658 *)Method_WeightRate_int__getData___77897048);
    }
    eventId = this->fields.eventId;
    this->fields.isLastSeed = 0;
    EventRewardSaveData__SetBulletInBoardLastMessageId(eventId, 0, 0LL);
  }
  if ( !v36 )
LABEL_48:
    sub_1C3B9C0(showStatusDic, v37);
  if ( v36->fields._size == 1 )
  {
    this->fields.isLastSeed = 1;
    this->fields.lastMessageId = Data_61281880;
    EventRewardSaveData__SetBulletInBoardLastMessageId(Data_61281880, 0, 0LL);
  }
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, Data_61281880, 1, 0LL);
  TitleInfoEventBulletinBoardComponent__SetShowStatus(this, Data_61281880, 1, v77);
  return Data_61281880;
}


int32_t __fastcall TitleInfoEventBulletinBoardComponent__GetNextRandomIdx(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *randomQue; // x0
  System_Collections_Generic_List_T__o **p_randomQue; // x20
  __int64 v12; // x1
  System_Collections_Generic_List_T__o *Item; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int v15; // w21
  int32_t v16; // w22
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1

  if ( (byte_4C200E9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__RemoveAt__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1C3B764(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___, v9);
    byte_4C200E9 = 1;
  }
  p_randomQue = (System_Collections_Generic_List_T__o **)&this->fields.randomQue;
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___RemoveAt(
      randomQue,
      0,
      (const MethodInfo_36703C8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    Item = *p_randomQue;
    if ( !*p_randomQue )
      goto LABEL_21;
    if ( Item->fields._size <= 1 )
    {
      Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_int___get_Item(
                                                       (System_Collections_Generic_List_int__o *)Item,
                                                       0,
                                                       (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
      messages = this->fields.messages;
      if ( !messages )
        goto LABEL_21;
      v15 = (int)Item;
      v16 = 0;
      while ( v16 < messages->fields._size )
      {
        if ( v15 != v16 )
        {
          Item = *p_randomQue;
          if ( !*p_randomQue )
            goto LABEL_21;
          items = Item->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++Item->fields._version;
          if ( !items )
            goto LABEL_21;
          size = Item->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v16,
              *(const MethodInfo_366EC48 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            messages = this->fields.messages;
          }
          else
          {
            Item->fields._size = size + 1;
            *((_DWORD *)items->m_Items + size) = v16;
          }
        }
        ++v16;
        if ( !messages )
          goto LABEL_21;
      }
      TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        *p_randomQue,
        1,
        (const MethodInfo_30A1988 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    }
  }
  else
  {
    v20 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.randomQue = v20;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.randomQue, (int64_t)v20, v21, v22, v23, v24, v25, v26);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v27);
  }
  Item = *p_randomQue;
  if ( !*p_randomQue )
LABEL_21:
    sub_1C3B9C0(Item, v12);
  return System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)Item,
           0,
           (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
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
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_Component_o *bulletinBg; // x0
  __int64 v16; // x1
  struct UIPanel_o *scrollerPanel; // x8
  float v18; // s2
  System_String_o *baseIconName; // x22
  UISprite_o *baseIcon; // x23
  System_String_o *wipeIconFrameName; // x22
  UISprite_o *wipeIconFrame; // x23
  System_Collections_Generic_Dictionary_int__bool__o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int32_t BulletInBoardLastMessageId; // w0
  const MethodInfo *v31; // x2
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C200DB & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, *(_QWORD *)&dispType);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v10);
    byte_4C200DB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v32 = TitleInfoEventBulletinBoardComponent__localPosByDispType(this, dispType, v12);
  GameObjectExtensions__SetLocalPosition(gameObject, v32, 0LL);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4C1C516 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v13);
    byte_4C1C516 = 1;
  }
  GameObjectExtensions__SetLocalScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  scrollerPanel = this->fields.scrollerPanel;
  if ( !scrollerPanel )
    goto LABEL_18;
  v18 = scrollerPanel->fields.mClipRange.fields.z * 0.5;
  this->fields.left = -v18;
  this->fields.right = v18;
  baseIcon = this->fields.baseIcon;
  baseIconName = this->fields.baseIconName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseIcon, baseIconName, 0LL);
  AtlasManager__SetBanner(this->fields.bulletinBg, this->fields.bulletinBgName, 0LL);
  AtlasManager__SetBanner(this->fields.bulletinTitle, this->fields.bulletinTitleName, 0LL);
  if ( this->fields.isDispWipeIcon )
  {
    wipeIconFrame = this->fields.wipeIconFrame;
    wipeIconFrameName = this->fields.wipeIconFrameName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
    sub_1C3B9C0(bulletinBg, v16);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bulletinBg, this->fields.isDispBaseIcon, 0LL);
  this->fields.eventId = eventId;
  v23 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v23,
    (const MethodInfo_32E5600 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.showStatusDic = v23;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.showStatusDic, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  BulletInBoardLastMessageId = EventRewardSaveData__GetBulletInBoardLastMessageId(this->fields.eventId, 0LL);
  this->fields.lastMessageId = BulletInBoardLastMessageId;
  this->fields.isLastSeed = BulletInBoardLastMessageId > 0;
  TitleInfoEventBulletinBoardComponent__LoadAssetData(this, callBack, v31);
}


System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_30A1A64 *method)
{
  const MethodInfo_30A1A64_RGCTXs *rgctx_data; // x21
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
  const MethodInfo_30A1A64_RGCTXs *v19; // x8
  __int64 v20; // x4
  MethodInfo *_4_System_Collections_Generic_List_T__set_Item; // x1
  Il2CppMethodPointer v22; // x0
  const MethodInfo_30A1A64_RGCTXs *v23; // x8
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
    sub_1C8D69C();
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_3_T->_2.native_size;
  v8 = (__int64 *)((char *)&v28 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v31 = native_size;
  v9 = memset(v8, 0, native_size);
  if ( !list )
    sub_1C3B9C0(v9, v10);
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
      v16 = UnityEngine_Random__Range_71082488(v30, v13, 0LL);
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
        const MethodInfo_30A1988 *method)
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
    list = (System_Collections_Generic_List_T__o *)sub_1C8D69C();
  if ( !v5 )
    sub_1C3B9C0(list, withoutFirst);
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
               (const MethodInfo_366E958 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      v10 = UnityEngine_Random__Range_71082488(v7, size, 0LL);
      v11 = System_Collections_Generic_List_int___get_Item(
              v5,
              v10,
              (const MethodInfo_366E958 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_int___set_Item(
        v5,
        v8,
        v11,
        (const MethodInfo_366E9AC *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_int___set_Item(
        v5,
        v10,
        Item,
        (const MethodInfo_366E9AC *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o *v24; // x0
  System_String_o *v25; // x19
  AssetLoader_LoadEndDataHandler_o *v26; // x20

  if ( (byte_4C200E8 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, callBack);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1C3B764(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__, v6);
    sub_1C3B764(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_6390/*"FORTUNE_BONUS_RESULT_BUTTON"*/, v8);
    byte_4C200E8 = 1;
  }
  v9 = sub_1C3B9B0(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C3B9C0(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callBack;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)callBack, v18, v19, v20, v21, v22, v23);
  v24 = System_Int32__ToString((int)this + 256, 0LL);
  v25 = System_String__Concat_63368612((System_String_o *)StringLiteral_6390/*"FORTUNE_BONUS_RESULT_BUTTON"*/, v24, 0LL);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v25, v26, 1, 0LL);
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
  __int64 v7; // x9
  _QWORD *v8; // x10
  __int64 m_CancellationTokenSource_low; // x11

  v2 = this;
  if ( (byte_4C200EA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v3);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1C3B764(
                                                       &Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___,
                                                       v4);
    byte_4C200EA = 1;
  }
  messages = v2->fields.messages;
  if ( !messages )
LABEL_12:
    sub_1C3B9C0(this, method);
  v6 = 0;
  while ( 1 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.randomQue;
    if ( v6 >= messages->fields._size )
      break;
    if ( this )
    {
      v7 = *(_QWORD *)&this->fields.m_CachedPtr;
      v8 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( v7 )
      {
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v7 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            v6,
            *(const MethodInfo_366EC48 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
          messages = v2->fields.messages;
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(v7 + 4 * m_CancellationTokenSource_low + 32) = v6;
        }
        ++v6;
        if ( messages )
          continue;
      }
    }
    goto LABEL_12;
  }
  TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
    (System_Collections_Generic_List_T__o *)this,
    0,
    (const MethodInfo_30A1988 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
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
  __int64 v10; // x1
  Il2CppObject *current; // x24
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v16; // x0
  const MethodInfo *v17; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v18; // x0
  const MethodInfo *v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C200E4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v7);
    byte_4C200E4 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  messages = this->fields.messages;
  if ( !messages )
    sub_1C3B9C0(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)messages,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1C3B9C0(v9, v10);
    if ( EventRewardSaveData__GetBulletInBoardMessageState(
           this->fields.eventId,
           (int32_t)v21.fields._current[1].klass,
           0LL) )
    {
      TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 1, v13);
    }
    showStatusDic = this->fields.showStatusDic;
    if ( !showStatusDic )
      sub_1C3B9C0(0LL, v12);
    if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            showStatusDic,
            (int32_t)current[1].klass,
            (const MethodInfo_32E61D4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      goto LABEL_14;
    v16 = this->fields.showStatusDic;
    if ( !v16 )
      sub_1C3B9C0(0LL, v15);
    if ( System_Collections_Generic_Dictionary_int__bool___get_Item(
           v16,
           (int32_t)current[1].klass,
           (const MethodInfo_32E5F30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
    {
LABEL_14:
      v18 = this->fields.showStatusDic;
      if ( !v18 )
        sub_1C3B9C0(0LL, v15);
      if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
             v18,
             (int32_t)current[1].klass,
             (const MethodInfo_32E61D4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      {
        continue;
      }
    }
    TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 0, v17);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v19);
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

  if ( (byte_4C200E3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, *(_QWORD *)&id);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v8);
    byte_4C200E3 = 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic
    || (showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                                                                showStatusDic,
                                                                                id,
                                                                                (const MethodInfo_32E61D4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__),
        !this->fields.showStatusDic) )
  {
    sub_1C3B9C0(showStatusDic, *(_QWORD *)&id);
  }
  if ( ((unsigned __int8)showStatusDic & 1) != 0 )
    System_Collections_Generic_Dictionary_int__bool___set_Item(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_32E5FC0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  else
    System_Collections_Generic_Dictionary_int__bool___Add(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_32E5FD8 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
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
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UILabel_o *svtNameLabel; // x0
  const MethodInfo *v16; // x3

  if ( (byte_4C200DD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, boardMessages);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v11);
    sub_1C3B764(&StringLiteral_1/*""*/, v12);
    byte_4C200DD = 1;
  }
  this->fields.messages = boardMessages;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.messages,
    (int64_t)boardMessages,
    *(int64_t *)&eventId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventId = eventId;
  TitleInfoEventBulletinBoardComponent__resetLabelList(this, v13);
  coroutine = this->fields.coroutine;
  if ( coroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_71108640((UnityEngine_MonoBehaviour_o *)this, coroutine, 0LL);
  svtNameLabel = this->fields.svtNameLabel;
  if ( !svtNameLabel
    || (UILabel__set_text(svtNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon2) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.showStatusDic) == 0LL) )
  {
    sub_1C3B9C0(svtNameLabel, coroutine);
  }
  System_Collections_Generic_Dictionary_int__bool___Clear(
    (System_Collections_Generic_Dictionary_int__bool__o *)svtNameLabel,
    (const MethodInfo_32E6168 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  if ( boardMessages )
  {
    if ( boardMessages->fields._size >= 1 )
      TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        this,
        this->fields.right + this->fields.setUpSpaceBetweenMessages,
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
  bool v7; // w22
  __int64 v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C200E0 & 1) == 0 )
  {
    sub_1C3B764(&TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo, *(_QWORD *)&id);
    byte_4C200E0 = 1;
  }
  v7 = isSetUp;
  v8 = sub_1C3B9B0(TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 40), (int64_t)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 48) = id;
  *(_BYTE *)(v8 + 32) = v7;
  return (System_Collections_IEnumerator_o *)v8;
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v11; // x9
  __int64 v12; // x8
  __int64 v13; // x10
  EventBulletinBoardEntity_BulletinBoardInfo_o *v14; // x9
  UISprite_o *v15; // x21
  int32_t eventId; // w20
  Il2CppObject *v17; // x0
  System_String_o *v18; // x22
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x0
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v22; // x8
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C200E1 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&int_TypeInfo, v3);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1C3B764(&StringLiteral_19740/*"icon_balloon_blue"*/, v4);
    byte_4C200E1 = 1;
  }
  switchInfo = v2->fields.switchInfo;
  if ( !switchInfo )
    goto LABEL_24;
  switchCount = v2->fields.switchCount;
  if ( (unsigned int)switchCount >= switchInfo->max_length )
    goto LABEL_25;
  v7 = switchInfo->m_Items[switchCount];
  if ( !v7 )
    goto LABEL_24;
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.svtNameLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)this, v7->fields.name, 0LL);
  v11 = v2->fields.switchInfo;
  v12 = 176LL;
  if ( (switchCount & 1) == 0 )
    v12 = 168LL;
  if ( !v11 )
    goto LABEL_24;
  v13 = v2->fields.switchCount;
  if ( (unsigned int)v13 >= v11->max_length )
LABEL_25:
    sub_1C3B9C8(this, method);
  v14 = v11->m_Items[v13];
  if ( !v14 )
    goto LABEL_24;
  v15 = *(UISprite_o **)((char *)&v2->klass + v12);
  eventId = v2->fields.eventId;
  iconId = v14->fields.iconId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v8, v9, v10);
  v18 = System_String__Format((System_String_o *)StringLiteral_19740/*"icon_balloon_blue"*/, v17, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39282628(eventId, v15, v18, 0LL);
  if ( (switchCount & 1) != 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon;
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      TweenAlpha__Begin(gameObject, v2->fields.wipeIconCrossFadeTime, 0.0, 0LL);
      this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon2;
      if ( this )
        goto LABEL_20;
    }
LABEL_24:
    sub_1C3B9C0(this, method);
  }
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon2;
  if ( !this )
    goto LABEL_24;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  TweenAlpha__Begin(v19, v2->fields.wipeIconCrossFadeTime, 0.0, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon;
  if ( !this )
    goto LABEL_24;
LABEL_20:
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)TweenAlpha__Begin(v21, v2->fields.wipeIconCrossFadeTime, 1.0, 0LL);
  v22 = v2->fields.switchInfo;
  if ( !v22 )
    goto LABEL_24;
  if ( v2->fields.switchCount >= (signed int)(v22->max_length - 1) )
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
  __int64 v15; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  float v18; // s0
  UnityEngine_GameObject_o *v19; // x0
  float LocalPositionX; // s0
  const MethodInfo *v21; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v23; // x2
  float right; // s0
  const MethodInfo *v25; // x1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C200D9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__, v8);
    byte_4C200D9 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  labels = this->fields.labels;
  if ( labels )
  {
    messages = this->fields.messages;
    if ( messages )
    {
      if ( messages->fields._size < 1 )
        return;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v26,
        (System_Collections_Generic_List_object__o *)labels,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
      v11 = 0;
      v27 = v26;
      v12 = 0.0;
LABEL_7:
      v13 = v12;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v27,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
        if ( !v14 )
          break;
        current = v27.fields._current;
        if ( !v27.fields._current )
          sub_1C3B9C0(v14, v15);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27.fields._current, 0LL);
        v18 = UnityEngine_Time__get_deltaTime(0LL) * (float)-this->fields.messageScrollSpeed;
        GameObjectExtensions__AddLocalPositionX(gameObject, v18, 0LL);
        v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(v19, 0LL);
        v12 = LocalPositionX + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)current, 0LL).fields.x;
        v11 |= v12 < this->fields.left;
        if ( v12 > v13 )
          goto LABEL_7;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v27,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
      if ( (v11 & 1) == 0 )
        goto LABEL_16;
      labels = this->fields.labels;
      if ( labels )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)labels,
                 0,
                 (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__);
        TitleInfoEventBulletinBoardComponent__DeleteLabel(
          (TitleInfoEventBulletinBoardComponent_o *)Item,
          (ScriptLineMessage_o *)Item,
          v23);
        labels = this->fields.labels;
        if ( labels )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)labels,
            0,
            (const MethodInfo_368D440 *)Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
LABEL_16:
          right = this->fields.right;
          if ( v13 < right )
          {
            if ( this->fields.isSwitchWipe )
            {
              ++this->fields.switchCount;
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(this, right, 1, 0, v21);
              TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(this, v25);
            }
            else
            {
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(
                this,
                v13 + this->fields.spaceBetweenMessages,
                0,
                0,
                v21);
            }
          }
          return;
        }
      }
    }
    sub_1C3B9C0(labels, method);
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

  if ( (byte_4C200DC & 1) == 0 )
  {
    sub_1C3B764(&FSUtility_TypeInfo, *(_QWORD *)&dispType);
    byte_4C200DC = 1;
  }
  if ( this->fields.enableFSPos )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  struct System_Collections_Generic_List_ScriptLineMessage__o **p_labels; // x20
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *v16; // x8
  int32_t size; // w2
  int v18; // w9
  System_Collections_Generic_List_object__o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Collections_Generic_List_int__o *randomQue; // x8
  int v27; // w9
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C200DE & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptLineMessage__Clear__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Clear__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ScriptLineMessage___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_ScriptLineMessage__TypeInfo, v9);
    byte_4C200DE = 1;
  }
  memset(&v28, 0, sizeof(v28));
  p_labels = &this->fields.labels;
  labels = this->fields.labels;
  if ( labels )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)labels,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
      if ( !v12 )
        break;
      TitleInfoEventBulletinBoardComponent__DeleteLabel(
        (TitleInfoEventBulletinBoardComponent_o *)v12,
        (ScriptLineMessage_o *)v28.fields._current,
        v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    v16 = *p_labels;
    if ( !*p_labels )
      sub_1C3B9C0(v14, v15);
    size = v16->fields._size;
    v18 = v16->fields._version + 1;
    v16->fields._size = 0;
    v16->fields._version = v18;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
  }
  else
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ScriptLineMessage__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    *p_labels = (struct System_Collections_Generic_List_ScriptLineMessage__o *)v19;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.labels, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  }
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    v27 = randomQue->fields._version + 1;
    randomQue->fields._size = 0;
    randomQue->fields._version = v27;
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v15);
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
  __int64 v3; // x3
  __int64 v4; // x4
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x23
  Il2CppObject *Master_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x8
  float v23; // s8
  UnityEngine_WaitForSeconds_o *v24; // x20
  PartyOrganizationUtility_o *v25; // x19
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  bool result; // w0
  struct EventBulletinBoardEntity_o *ent_5__3; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v35; // x8
  int32_t eventId; // w20
  UISprite_o *wipeIcon; // x21
  Il2CppObject *v38; // x0
  System_String_o *v39; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventBulletinBoardEntity_o *v41; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v42; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v43; // x8
  System_String_o *name; // x1
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  struct EventBulletinBoardEntity_o **p_ent_5__3; // x20
  float wipeIconFadeOutTime; // s8
  UnityEngine_WaitForSeconds_o *v49; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_4C200EE & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__, v8);
    sub_1C3B764(&int_TypeInfo, v9);
    sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_19740/*"icon_balloon_blue"*/, v11);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)sub_1C3B764(
                                                                                         &StringLiteral_1/*""*/,
                                                                                         v12);
    byte_4C200EE = 1;
  }
  _1__state = v5->fields.__1__state;
  _4__this = v5->fields.__4__this;
  if ( _1__state == 2 )
  {
    v5->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    ent_5__3 = v5->fields._ent_5__3;
    if ( !ent_5__3 )
      goto LABEL_39;
    script = ent_5__3->fields.script;
    if ( !script )
      goto LABEL_39;
    if ( script->max_length )
    {
      v35 = script->m_Items[0];
      if ( !v35 )
        goto LABEL_39;
      eventId = _4__this->fields.eventId;
      wipeIcon = _4__this->fields.wipeIcon;
      iconId = v35->fields.iconId;
      v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v2, v3, v4);
      v39 = System_String__Format((System_String_o *)StringLiteral_19740/*"icon_balloon_blue"*/, v38, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI_39282628(eventId, wipeIcon, v39, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( !this )
        goto LABEL_39;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)TweenAlpha__Begin(
                                                                                           gameObject,
                                                                                           _4__this->fields.wipeIconFadeInTime,
                                                                                           1.0,
                                                                                           0LL);
      v41 = v5->fields._ent_5__3;
      if ( !v41 )
        goto LABEL_39;
      v42 = v41->fields.script;
      if ( !v42 )
        goto LABEL_39;
      if ( v42->max_length )
      {
        v43 = v42->m_Items[0];
        if ( !v43 )
          goto LABEL_39;
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.svtNameLabel;
        if ( !this )
          goto LABEL_39;
        name = v43->fields.name;
        goto LABEL_36;
      }
    }
    sub_1C3B9C8(this, method);
  }
  if ( _1__state == 1 )
  {
    v5->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( this )
      {
        v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        TweenAlpha__Begin(v45, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon2;
        if ( this )
        {
          v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          TweenAlpha__Begin(v46, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
          this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v5->fields._bulletinBoardMst_5__2;
          if ( this )
          {
            p_ent_5__3 = &v5->fields._ent_5__3;
            this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                                 (Il2CppObject **)&v5->fields._ent_5__3,
                                                                                                 v5->fields.id,
                                                                                                 (const MethodInfo_329AE94 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*p_ent_5__3 )
                goto LABEL_39;
              if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)(*p_ent_5__3)->fields.script, 0LL) )
              {
                wipeIconFadeOutTime = _4__this->fields.wipeIconFadeOutTime;
                v49 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v49, wipeIconFadeOutTime, 0LL);
                v5->fields.__2__current = (Il2CppObject *)v49;
                p__2__current = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
                sub_1C3B708(p__2__current, (int64_t)v49, v51, v52, v53, v54, v55, v56);
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
    sub_1C3B9C0(this, method);
  }
  if ( _1__state )
    return 0;
  v5->fields.__1__state = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
  v5->fields._bulletinBoardMst_5__2 = (struct EventBulletinBoardMaster_o *)Master_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v5->fields._bulletinBoardMst_5__2,
    (int64_t)Master_object,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !_4__this )
    goto LABEL_39;
  if ( v5->fields.isSetUp )
    v22 = 216LL;
  else
    v22 = 212LL;
  v23 = *(float *)((char *)&_4__this->klass + v22);
  v24 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v24, v23, 0LL);
  v5->fields.__2__current = (Il2CppObject *)v24;
  v25 = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
  sub_1C3B708(v25, (int64_t)v24, v26, v27, v28, v29, v30, v31);
  result = 1;
  *(_DWORD *)&v25[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C200EB & 1) == 0 )
  {
    sub_1C3B764(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v1);
    byte_4C200EB = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventBulletinBoardComponent___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(this, 0LL);
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
  if ( (byte_4C200EC & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)sub_1C3B764(
                                                                             &Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__,
                                                                             t);
    byte_4C200EC = 1;
  }
  if ( !t )
    sub_1C3B9C0(this, t);
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
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x8
  struct TitleInfoEventBulletinBoardComponent_o *v11; // x8
  int32_t eventId; // w20
  System_Action_o *callBack; // x19

  v9 = this;
  if ( (byte_4C200ED & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)sub_1C3B764(
                                                                             &AtlasManager_TypeInfo,
                                                                             assetData);
    byte_4C200ED = 1;
  }
  _4__this = v9->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.bulletinBoardAssetData = assetData,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&_4__this->fields.bulletinBoardAssetData,
          (int64_t)assetData,
          (int64_t)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (v11 = v9->fields.__4__this) == 0LL) )
  {
    sub_1C3B9C0(this, assetData);
  }
  eventId = v11->fields.eventId;
  callBack = v9->fields.callBack;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_39282348(eventId, callBack, 1, 0LL);
}