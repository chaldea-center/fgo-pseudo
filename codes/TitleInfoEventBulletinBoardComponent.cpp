void TitleInfoEventBulletinBoardComponent___ctor(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  this->fields.rubyRelativePositionY = 12.0;
  *(_QWORD *)&this->fields.messageScrollSpeed = 0x42AA000040A00000LL;
  *(_OWORD *)&this->fields.wipeIconFadeOutStartTime = xmmword_C0D9D0;
  this->fields.wipeIconCrossFadeTime = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        float setPos,
        bool isNotRandom,
        bool isSetUp,
        const MethodInfo *method)
{
  Il2CppObject *baseLabel; // x22
  UnityEngine_GameObject_o *Component_object; // x0
  UnityEngine_GameObject_o *v11; // x24
  ScriptLineMessage_o *v12; // x22
  const MethodInfo *v13; // x1
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x9
  EventBulletinBoardEntity_BulletinBoardInfo_o *v16; // x8
  UnityEngine_GameObject_o *msg; // x1
  int32_t NextMessageId; // w23
  const MethodInfo *v19; // x2
  struct UISprite_o *baseIcon; // x8
  float mWidth; // s0
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v26; // x9
  __int64 klass_low; // x10
  intptr_t v28; // x8
  const MethodInfo *v29; // x3
  System_Collections_IEnumerator_o *v30; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C35978 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptLineMessage__Add__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35978 = 1;
  }
  baseLabel = (Il2CppObject *)this->fields.baseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   baseLabel,
                                                   (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_28;
  v11 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
  if ( !Component_object )
    goto LABEL_28;
  v12 = (ScriptLineMessage_o *)Component_object;
  ScriptLineMessage__Init((ScriptLineMessage_o *)Component_object, 0);
  if ( isNotRandom )
  {
    switchInfo = this->fields.switchInfo;
    if ( switchInfo )
    {
      switchCount = this->fields.switchCount;
      if ( (unsigned int)switchCount >= LODWORD(switchInfo->max_length) )
        sub_1C32E84(Component_object);
      v16 = switchInfo->m_Items[switchCount];
      if ( v16 )
      {
        msg = (UnityEngine_GameObject_o *)v16->fields.msg;
        NextMessageId = -1;
        goto LABEL_17;
      }
    }
LABEL_28:
    sub_1C32E7C(Component_object);
  }
  NextMessageId = TitleInfoEventBulletinBoardComponent__GetNextMessageId(this, v13);
  Component_object = (UnityEngine_GameObject_o *)TitleInfoEventBulletinBoardComponent__GetMessage(
                                                   this,
                                                   NextMessageId,
                                                   v19);
  msg = Component_object;
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
  ((void (__fastcall *)(ScriptLineMessage_o *, UnityEngine_GameObject_o *, _QWORD, _QWORD, _QWORD, _QWORD, const MethodInfo *))v12->klass->vtable._7_SetText.methodPtr)(
    v12,
    msg,
    0,
    0,
    0,
    0,
    v12->klass->vtable._7_SetText.method);
  UnityEngine_GameObject__SetActive(v11, 1, 0);
  GameObjectExtensions__SetParent(v11, (UnityEngine_Component_o *)this->fields.scrollerPanel, 0);
  v34.fields.y = v12->fields.rubyLineHeight;
  v34.fields.x = 0.0;
  v34.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(v11, v34, 0);
  if ( !byte_4C313D6 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  GameObjectExtensions__SetLocalPositionX(v11, setPos, 0);
  TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(this, v12, v22);
  Component_object = (UnityEngine_GameObject_o *)this->fields.labels;
  if ( !Component_object )
    goto LABEL_28;
  m_CachedPtr = Component_object->fields.m_CachedPtr;
  v26 = Method_System_Collections_Generic_List_ScriptLineMessage__Add__;
  ++HIDWORD(Component_object[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_28;
  klass_low = SLODWORD(Component_object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      (Il2CppObject *)v12,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    if ( isNotRandom )
      return;
  }
  else
  {
    v28 = m_CachedPtr + 8 * klass_low;
    LODWORD(Component_object[1].klass) = klass_low + 1;
    *(_QWORD *)(v28 + 32) = v12;
    sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 32), (int32_t)v12, v23, v24);
    if ( isNotRandom )
      return;
  }
  if ( this->fields.isDispWipeIcon )
  {
    v30 = TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(this, NextMessageId, isSetUp, v29);
    started = UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v30, 0);
    this->fields.coroutine = started;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.coroutine, (int32_t)started, v32, v33);
  }
}


void TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(
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
  if ( (byte_4C3597B & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3597B = 1;
  }
  if ( v4->fields.rubyRelativePositionY != 0.0 )
  {
    if ( !lineMessage )
      goto LABEL_22;
    this = (TitleInfoEventBulletinBoardComponent_o *)ScriptLineMessage__GetDispLabelArray(lineMessage, 0);
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
          sub_1C32E84(this);
        v8 = *((_QWORD *)&v6->fields.TerminalLocalPos.fields.x + (int)v7);
        if ( !v8 )
          break;
        v9 = *(UnityEngine_Object_o **)(v8 + 16);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v10 = *(UnityEngine_Object_o **)(v8 + 24);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = *(TitleInfoEventBulletinBoardComponent_o **)(v8 + 24);
            if ( !this )
              break;
            this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
            if ( !*(_QWORD *)(v8 + 16) )
              break;
            v11 = this;
            this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Component__get_transform(
                                                               *(UnityEngine_Component_o **)(v8 + 16),
                                                               0);
            if ( !this )
              break;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
            GameObjectExtensions__SetLocalPositionY(
              (UnityEngine_GameObject_o *)v11,
              localPosition.fields.y + v4->fields.rubyRelativePositionY,
              0);
          }
        }
        m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
        if ( (int)++v7 >= m_CancellationTokenSource )
          return;
      }
LABEL_22:
      sub_1C32E7C(this);
    }
  }
}


void TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  const MethodInfo *v4; // x1
  __int128 v5; // [xsp+0h] [xbp-80h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v6; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3597E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_4C3597E = 1;
  }
  memset(&v7, 0, 32);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v5,
    showStatusDic,
    (const MethodInfo_33E18AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v7.fields._dictionary = v5;
  v7.fields._current = v6;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v7,
            (const MethodInfo_3544088 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( !BYTE4(v7.fields._current.fields.key) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        &v7,
        (const MethodInfo_3544190 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      return;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v7,
    (const MethodInfo_3544190 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v5,
    showStatusDic,
    (const MethodInfo_33E18AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v7.fields._dictionary = v5;
  v7.fields._current = v6;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v7,
            (const MethodInfo_3544088 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
    EventRewardSaveData__SetBulletInBoardMessageState(
      this->fields.eventId,
      (int32_t)v7.fields._current.fields.key,
      0,
      0);
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v7,
    (const MethodInfo_3544190 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
LABEL_15:
    sub_1C32E7C(showStatusDic);
  System_Collections_Generic_Dictionary_int__bool___Clear(
    showStatusDic,
    (const MethodInfo_33E1650 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  TitleInfoEventBulletinBoardComponent__ResetShowStatus(this, v4);
}


void TitleInfoEventBulletinBoardComponent__DeleteLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *label,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C35973 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35973 = 1;
  }
  if ( !label )
    sub_1C32E7C(this);
  ScriptLineMessage__DeleteLabels(label, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(gameObject, 0);
}


System_String_o *TitleInfoEventBulletinBoardComponent__GetMessage(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  _BOOL8 v6; // x0
  Il2CppObject *current; // x21
  System_String_o **p_monitor; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *monitor; // x1
  __int64 v12; // x0
  _DWORD *v13; // x8
  __int64 v14; // x8
  System_String_o *v15; // x19
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C35980 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    byte_4C35980 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  messages = this->fields.messages;
  if ( !messages )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)messages,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v18 = v17;
  do
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v6 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
      return 0;
    }
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1C32E7C(v6);
  }
  while ( LODWORD(v18.fields._current[1].klass) != id );
  p_monitor = (System_String_o **)&v18.fields._current[1].monitor;
  if ( System_String__IsNullOrEmpty((System_String_o *)v18.fields._current[1].monitor, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[2].monitor, 0) )
  {
    this->fields.isSwitchWipe = 1;
    monitor = (struct EventBulletinBoardEntity_BulletinBoardInfo_array *)current[2].monitor;
    this->fields.switchInfo = monitor;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.switchInfo, (int32_t)monitor, v9, v10);
    v13 = current[2].monitor;
    if ( !v13 )
      sub_1C32E7C(v12);
    if ( !v13[6] )
      sub_1C32E84(v12);
    v14 = *((_QWORD *)v13 + 4);
    if ( !v14 )
      sub_1C32E7C(v12);
    p_monitor = (System_String_o **)(v14 + 32);
  }
  v15 = *p_monitor;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  return v15;
}


int32_t TitleInfoEventBulletinBoardComponent__GetNextMessageId(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  void *showStatusDic; // x0
  Il2CppObject *v6; // x22
  __int64 v7; // x0
  bool v8; // zf
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x23
  System_Func_object__bool__o *v10; // x24
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x1
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  TitleInfoEventBulletinBoardComponent___c_c *v19; // x0
  System_Func_T1__T2__TResult__o *_9__57_0; // x22
  Il2CppObject *v21; // x23
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Func_object__bool__o *v25; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_object__o *v27; // x22
  WeightRate_int__o *v28; // x21
  int32_t Data_62430348; // w23
  _BOOL8 v30; // x0
  int32_t v31; // w0
  int32_t v32; // w0
  int32_t eventId; // w0
  const MethodInfo *v34; // x3
  Il2CppObject *v36; // [xsp+8h] [xbp-C8h]
  __int128 v37; // [xsp+10h] [xbp-C0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v38; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4C3597F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_1C32C20(&System_Func_EventBulletinBoardEntity__bool__TypeInfo);
    sub_1C32C20(&System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
    sub_1C32C20(&Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__);
    sub_1C32C20(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__);
    sub_1C32C20(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo);
    sub_1C32C20(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__);
    sub_1C32C20(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo);
    sub_1C32C20(&TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    sub_1C32C20(&Method_WeightRate_int___ctor__);
    sub_1C32C20(&Method_WeightRate_int__getData___78054384);
    sub_1C32C20(&Method_WeightRate_int__getData__);
    sub_1C32C20(&Method_WeightRate_int__getTotalWeight__);
    sub_1C32C20(&Method_WeightRate_int__setWeight__);
    sub_1C32C20(&WeightRate_int__TypeInfo);
    byte_4C3597F = 1;
  }
  memset(&v40, 0, 32);
  memset(&v39, 0, sizeof(v39));
  v36 = (Il2CppObject *)sub_1C32E6C(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor(v36, 0);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v3);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_48;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v37,
    (System_Collections_Generic_Dictionary_int__bool__o *)showStatusDic,
    (const MethodInfo_33E18AC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v40.fields._dictionary = v37;
  v40.fields._current = v38;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v40,
            (const MethodInfo_3544088 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    v6 = (Il2CppObject *)sub_1C32E6C(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo);
    System_Object___ctor(v6, 0);
    if ( !v6 )
      sub_1C32E7C(v7);
    v8 = ((__int64)v40.fields._current.fields.key & 0xFF00000000LL) == 0;
    v6[1].klass = (Il2CppClass *)v40.fields._current.fields.key;
    if ( v8 )
    {
      messages = this->fields.messages;
      v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v10,
        v6,
        Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__,
        0);
      v11 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
              (System_Collections_Generic_IEnumerable_TSource__o *)messages,
              (System_Func_TSource__bool__o *)v10,
              (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
      v14 = v11;
      if ( !v4 )
        sub_1C32E7C(v11);
      items = v4->fields._items;
      v16 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C32E7C(v11);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          v11,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v14;
        sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v14, v12, v13);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v40,
    (const MethodInfo_3544190 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v19 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  if ( !TitleInfoEventBulletinBoardComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    v19 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  }
  _9__57_0 = (System_Func_T1__T2__TResult__o *)v19->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__57_0 = (System_Func_T1__T2__TResult__o *)sub_1C32E6C(System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__57_0,
      v21,
      Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__,
      0);
    static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__o *)_9__57_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v23, v24);
  }
  showStatusDic = System_Linq_Enumerable__Aggregate_object_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                    (System_Func_TSource__TSource__TSource__o *)_9__57_0,
                    (const MethodInfo_30E4D28 *)Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
  if ( !showStatusDic )
    goto LABEL_48;
  if ( !v36 )
    goto LABEL_48;
  LODWORD(v36[1].klass) = *((_DWORD *)showStatusDic + 8);
  v25 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    v36,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__,
    0);
  v26 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v4,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
  v27 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v26,
                                                       (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  v28 = (WeightRate_int__o *)sub_1C32E6C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v28, (const MethodInfo_3B8A1D4 *)Method_WeightRate_int___ctor__);
  if ( !v27 )
    goto LABEL_48;
  if ( v27->fields._size >= 2 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v37,
      v27,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    *(_OWORD *)&v39.fields._list = v37;
    for ( v39.fields._current = v38.fields.key;
          ;
          WeightRate_int___setWeight(
            v28,
            HIDWORD(v39.fields._current[2].klass),
            (int32_t)v39.fields._current[1].klass,
            (const MethodInfo_3B896F0 *)Method_WeightRate_int__setWeight__) )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v39,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v30 )
        break;
      if ( !v39.fields._current )
        sub_1C32E7C(v30);
      if ( !v28 )
        sub_1C32E7C(v30);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v39,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( !v28 )
      goto LABEL_48;
    v31 = UnityEngine_Random__Range_71183860(0, v28->fields.totalweight, 0);
    showStatusDic = (void *)WeightRate_int___getData(
                              v28,
                              v31,
                              (const MethodInfo_3B89B64 *)Method_WeightRate_int__getData__);
    Data_62430348 = (int)showStatusDic;
  }
  else
  {
    showStatusDic = System_Collections_Generic_List_object___get_Item(
                      v27,
                      0,
                      (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    if ( !showStatusDic )
      goto LABEL_48;
    Data_62430348 = *((_DWORD *)showStatusDic + 4);
  }
  if ( this->fields.isLastSeed )
  {
    showStatusDic = (void *)System_Linq_Enumerable__Count_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                              (const MethodInfo_30FD778 *)Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    if ( (int)showStatusDic >= 2 && Data_62430348 == this->fields.lastMessageId )
    {
      if ( !v28 )
        goto LABEL_48;
      v32 = UnityEngine_Random__Range_71183860(0, v28->fields.totalweight, 0);
      Data_62430348 = WeightRate_int___getData_62430348(
                        v28,
                        v32,
                        this->fields.lastMessageId,
                        (const MethodInfo_3B89C8C *)Method_WeightRate_int__getData___78054384);
    }
    eventId = this->fields.eventId;
    this->fields.isLastSeed = 0;
    EventRewardSaveData__SetBulletInBoardLastMessageId(eventId, 0, 0);
  }
  if ( !v4 )
LABEL_48:
    sub_1C32E7C(showStatusDic);
  if ( v4->fields._size == 1 )
  {
    this->fields.isLastSeed = 1;
    this->fields.lastMessageId = Data_62430348;
    EventRewardSaveData__SetBulletInBoardLastMessageId(Data_62430348, 0, 0);
  }
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, Data_62430348, 1, 0);
  TitleInfoEventBulletinBoardComponent__SetShowStatus(this, Data_62430348, 1, v34);
  return Data_62430348;
}


int32_t TitleInfoEventBulletinBoardComponent__GetNextRandomIdx(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *randomQue; // x0
  System_Collections_Generic_List_T__o **p_randomQue; // x20
  System_Collections_Generic_List_T__o *Item; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int v7; // w21
  int32_t v8; // w22
  struct System_Object_array *items; // x9
  _QWORD *v10; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1

  if ( (byte_4C35982 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    byte_4C35982 = 1;
  }
  p_randomQue = (System_Collections_Generic_List_T__o **)&this->fields.randomQue;
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___RemoveAt(
      randomQue,
      0,
      (const MethodInfo_377CF18 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    Item = *p_randomQue;
    if ( !*p_randomQue )
      goto LABEL_21;
    if ( Item->fields._size <= 1 )
    {
      Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_int___get_Item(
                                                       (System_Collections_Generic_List_int__o *)Item,
                                                       0,
                                                       (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
      messages = this->fields.messages;
      if ( !messages )
        goto LABEL_21;
      v7 = (int)Item;
      v8 = 0;
      while ( v8 < messages->fields._size )
      {
        if ( v7 != v8 )
        {
          Item = *p_randomQue;
          if ( !*p_randomQue )
            goto LABEL_21;
          items = Item->fields._items;
          v10 = Method_System_Collections_Generic_List_int__Add__;
          ++Item->fields._version;
          if ( !items )
            goto LABEL_21;
          size = Item->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v8,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
            messages = this->fields.messages;
          }
          else
          {
            Item->fields._size = size + 1;
            *((_DWORD *)items->m_Items + size) = v8;
          }
        }
        ++v8;
        if ( !messages )
          goto LABEL_21;
      }
      TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        *p_randomQue,
        1,
        (const MethodInfo_319494C *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    }
  }
  else
  {
    v12 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v12,
      (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.randomQue = v12;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.randomQue, (int32_t)v12, v13, v14);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v15);
  }
  Item = *p_randomQue;
  if ( !*p_randomQue )
LABEL_21:
    sub_1C32E7C(Item);
  return System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)Item,
           0,
           (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__);
}


void TitleInfoEventBulletinBoardComponent__Init(
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
  struct UIPanel_o *scrollerPanel; // x8
  float v14; // s2
  System_String_o *baseIconName; // x22
  UISprite_o *baseIcon; // x23
  System_String_o *wipeIconFrameName; // x22
  UISprite_o *wipeIconFrame; // x23
  System_Collections_Generic_Dictionary_int__bool__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t BulletInBoardLastMessageId; // w0
  const MethodInfo *v23; // x2
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C35974 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    byte_4C35974 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v24 = TitleInfoEventBulletinBoardComponent__localPosByDispType(this, dispType, v10);
  GameObjectExtensions__SetLocalPosition(gameObject, v24, 0);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_4C313D6 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  scrollerPanel = this->fields.scrollerPanel;
  if ( !scrollerPanel )
    goto LABEL_18;
  v14 = scrollerPanel->fields.mClipRange.fields.z * 0.5;
  this->fields.left = -v14;
  this->fields.right = v14;
  baseIcon = this->fields.baseIcon;
  baseIconName = this->fields.baseIconName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetBanner(baseIcon, baseIconName, 0);
  AtlasManager__SetBanner(this->fields.bulletinBg, this->fields.bulletinBgName, 0);
  AtlasManager__SetBanner(this->fields.bulletinTitle, this->fields.bulletinTitleName, 0);
  if ( this->fields.isDispWipeIcon )
  {
    wipeIconFrame = this->fields.wipeIconFrame;
    wipeIconFrameName = this->fields.wipeIconFrameName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(wipeIconFrame, wipeIconFrameName, 0);
  }
  bulletinBg = (UnityEngine_Component_o *)this->fields.baseIcon;
  if ( !bulletinBg
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))bulletinBg->klass[2]._1.parent)(
          bulletinBg,
          bulletinBg->klass[2]._1.generic_class),
        (bulletinBg = (UnityEngine_Component_o *)this->fields.bulletinBg) == 0)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))bulletinBg->klass[2]._1.parent)(
          bulletinBg,
          bulletinBg->klass[2]._1.generic_class),
        (bulletinBg = (UnityEngine_Component_o *)this->fields.bulletinTitle) == 0)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))bulletinBg->klass[2]._1.parent)(
          bulletinBg,
          bulletinBg->klass[2]._1.generic_class),
        (bulletinBg = (UnityEngine_Component_o *)this->fields.baseIcon) == 0)
    || (bulletinBg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bulletinBg, 0)) == 0 )
  {
LABEL_18:
    sub_1C32E7C(bulletinBg);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bulletinBg, this->fields.isDispBaseIcon, 0);
  this->fields.eventId = eventId;
  v19 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v19,
    (const MethodInfo_33E0AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.showStatusDic = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.showStatusDic, (int32_t)v19, v20, v21);
  BulletInBoardLastMessageId = EventRewardSaveData__GetBulletInBoardLastMessageId(this->fields.eventId, 0);
  this->fields.lastMessageId = BulletInBoardLastMessageId;
  this->fields.isLastSeed = BulletInBoardLastMessageId > 0;
  TitleInfoEventBulletinBoardComponent__LoadAssetData(this, callBack, v23);
}


System_Collections_Generic_List_T__o *TitleInfoEventBulletinBoardComponent__ListShuffle___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_3194A28 *method)
{
  const MethodInfo_3194A28_RGCTXs *rgctx_data; // x21
  size_t actualSize; // x2
  _QWORD *v8; // x22
  void *v9; // x0
  int32_t v10; // w0
  int32_t v11; // w21
  int32_t v12; // w26
  MethodInfo *_2_System_Collections_Generic_List_T__get_Item; // x1
  void (*methodPointer)(); // x0
  int32_t v15; // w28
  MethodInfo *v16; // x1
  void (*v17)(); // x0
  const MethodInfo_3194A28_RGCTXs *v18; // x8
  _QWORD *v19; // x4
  MethodInfo *_4_System_Collections_Generic_List_T__set_Item; // x1
  Il2CppMethodPointer v21; // x0
  const MethodInfo_3194A28_RGCTXs *v22; // x8
  _QWORD *v23; // x4
  MethodInfo *v24; // x1
  Il2CppMethodPointer v25; // x0
  __int64 v27; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-38h]
  int32_t v29; // [xsp+14h] [xbp-2Ch]
  size_t v30; // [xsp+18h] [xbp-28h]
  int32_t *v31; // [xsp+20h] [xbp-20h] BYREF
  _QWORD *v32; // [xsp+28h] [xbp-18h]
  int32_t v33; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v34; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v34 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C83390();
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_3_T->_2.actualSize;
  v8 = (__int64 *)((char *)&v27 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v30 = actualSize;
  v9 = memset(v8, 0, actualSize);
  if ( !list )
    sub_1C32E7C(v9);
  v10 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
  v29 = withoutFirst;
  if ( v10 > v29 )
  {
    v11 = v29;
    v12 = v10;
    do
    {
      _2_System_Collections_Generic_List_T__get_Item = method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
      methodPointer = _2_System_Collections_Generic_List_T__get_Item->methodPointer;
      v33 = v11;
      v31 = &v33;
      v32 = v8;
      _2_System_Collections_Generic_List_T__get_Item->invoker_method(
        methodPointer,
        _2_System_Collections_Generic_List_T__get_Item,
        list,
        (void **)&v31,
        v8);
      memcpy(v8, v8, v30);
      v15 = UnityEngine_Random__Range_71183860(v29, v12, 0);
      v16 = method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
      v17 = v16->methodPointer;
      v33 = v15;
      v31 = &v33;
      v32 = v8;
      v16->invoker_method(v17, v16, list, (void **)&v31, v8);
      v18 = method->rgctx_data;
      v19 = v8;
      if ( (v18->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v19 = (_QWORD *)*v8;
      _4_System_Collections_Generic_List_T__set_Item = v18->_4_System_Collections_Generic_List_T__set_Item;
      v21 = _4_System_Collections_Generic_List_T__set_Item->methodPointer;
      v33 = v11;
      v31 = &v33;
      v32 = v19;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int32_t **))_4_System_Collections_Generic_List_T__set_Item->invoker_method)(
        v21,
        _4_System_Collections_Generic_List_T__set_Item,
        list,
        &v31);
      memcpy(v8, v8, v30);
      v22 = method->rgctx_data;
      v23 = v8;
      v24 = v22->_4_System_Collections_Generic_List_T__set_Item;
      v25 = v24->methodPointer;
      if ( (v22->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v23 = (_QWORD *)*v8;
      v33 = v15;
      v31 = &v33;
      v32 = v23;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int32_t **))v24->invoker_method)(
        v25,
        v24,
        list,
        &v31);
      ++v11;
    }
    while ( v12 != v11 );
  }
  return list;
}


System_Collections_Generic_List_T__o *TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_319494C *method)
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
    list = (System_Collections_Generic_List_T__o *)sub_1C83390();
  if ( !v5 )
    sub_1C32E7C(list);
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
               (const MethodInfo_377B4A8 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      v10 = UnityEngine_Random__Range_71183860(v7, size, 0);
      v11 = System_Collections_Generic_List_int___get_Item(
              v5,
              v10,
              (const MethodInfo_377B4A8 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_int___set_Item(
        v5,
        v8,
        v11,
        (const MethodInfo_377B4FC *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_int___set_Item(
        v5,
        v10,
        Item,
        (const MethodInfo_377B4FC *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      ++v8;
    }
    while ( size != v8 );
  }
  return (System_Collections_Generic_List_T__o *)v5;
}


void TitleInfoEventBulletinBoardComponent__LoadAssetData(
        TitleInfoEventBulletinBoardComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_String_o *v11; // x0
  System_String_o *v12; // x19
  AssetLoader_LoadEndDataHandler_o *v13; // x20

  if ( (byte_4C35981 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__);
    sub_1C32C20(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo);
    sub_1C32C20(&StringLiteral_6267/*"EventUI/Prefabs/"*/);
    byte_4C35981 = 1;
  }
  v5 = sub_1C32E6C(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callBack;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callBack, v9, v10);
  v11 = System_Int32__ToString((int)this + 256, 0);
  v12 = System_String__Concat_63518544((System_String_o *)StringLiteral_6267/*"EventUI/Prefabs/"*/, v11, 0);
  v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v12, v13, 1, 0);
}


void TitleInfoEventBulletinBoardComponent__ResetRandomQueue(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v2; // x19
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int32_t v4; // w20
  intptr_t m_CachedPtr; // x9
  _QWORD *v6; // x10
  __int64 m_CancellationTokenSource_low; // x11

  v2 = this;
  if ( (byte_4C35983 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1C32C20(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    byte_4C35983 = 1;
  }
  messages = v2->fields.messages;
  if ( !messages )
LABEL_12:
    sub_1C32E7C(this);
  v4 = 0;
  while ( 1 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.randomQue;
    if ( v4 >= messages->fields._size )
      break;
    if ( this )
    {
      m_CachedPtr = this->fields.m_CachedPtr;
      v6 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( m_CachedPtr )
      {
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            v4,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
          messages = v2->fields.messages;
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = v4;
        }
        ++v4;
        if ( messages )
          continue;
      }
    }
    goto LABEL_12;
  }
  TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
    (System_Collections_Generic_List_T__o *)this,
    0,
    (const MethodInfo_319494C *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
}


void TitleInfoEventBulletinBoardComponent__ResetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  _BOOL8 v4; // x0
  Il2CppObject *current; // x24
  const MethodInfo *v6; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v8; // x0
  const MethodInfo *v9; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C3597D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    byte_4C3597D = 1;
  }
  memset(&v13, 0, sizeof(v13));
  messages = this->fields.messages;
  if ( !messages )
    sub_1C32E7C(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)messages,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v13 = v12;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C32E7C(v4);
    if ( EventRewardSaveData__GetBulletInBoardMessageState(
           this->fields.eventId,
           (int32_t)v13.fields._current[1].klass,
           0) )
    {
      TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 1, v6);
    }
    showStatusDic = this->fields.showStatusDic;
    if ( !showStatusDic )
      sub_1C32E7C(0);
    if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            showStatusDic,
            (int32_t)current[1].klass,
            (const MethodInfo_33E16BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      goto LABEL_14;
    v8 = this->fields.showStatusDic;
    if ( !v8 )
      sub_1C32E7C(0);
    if ( System_Collections_Generic_Dictionary_int__bool___get_Item(
           v8,
           (int32_t)current[1].klass,
           (const MethodInfo_33E1418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
    {
LABEL_14:
      v10 = this->fields.showStatusDic;
      if ( !v10 )
        sub_1C32E7C(0);
      if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
             v10,
             (int32_t)current[1].klass,
             (const MethodInfo_33E16BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      {
        continue;
      }
    }
    TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 0, v9);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v11);
}


void TitleInfoEventBulletinBoardComponent__SetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isShow,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0

  if ( (byte_4C3597C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    byte_4C3597C = 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic
    || (showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                                                                showStatusDic,
                                                                                id,
                                                                                (const MethodInfo_33E16BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__),
        !this->fields.showStatusDic) )
  {
    sub_1C32E7C(showStatusDic);
  }
  if ( ((unsigned __int8)showStatusDic & 1) != 0 )
    System_Collections_Generic_Dictionary_int__bool___set_Item(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  else
    System_Collections_Generic_Dictionary_int__bool___Add(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_33E14C0 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, id, isShow, 0);
}


void TitleInfoEventBulletinBoardComponent__SetUp(
        TitleInfoEventBulletinBoardComponent_o *this,
        System_Collections_Generic_List_EventBulletinBoardEntity__o *boardMessages,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UILabel_o *svtNameLabel; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4C35976 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C35976 = 1;
  }
  this->fields.messages = boardMessages;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.messages, (int32_t)boardMessages, eventId, method);
  this->fields.eventId = eventId;
  TitleInfoEventBulletinBoardComponent__resetLabelList(this, v7);
  coroutine = this->fields.coroutine;
  if ( coroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_71209832((UnityEngine_MonoBehaviour_o *)this, coroutine, 0);
  svtNameLabel = this->fields.svtNameLabel;
  if ( !svtNameLabel
    || (UILabel__set_text(svtNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon) == 0)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0, 0), (svtNameLabel = (UILabel_o *)this->fields.wipeIcon2) == 0)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0, 0),
        (svtNameLabel = (UILabel_o *)this->fields.showStatusDic) == 0) )
  {
    sub_1C32E7C(svtNameLabel);
  }
  System_Collections_Generic_Dictionary_int__bool___Clear(
    (System_Collections_Generic_Dictionary_int__bool__o *)svtNameLabel,
    (const MethodInfo_33E1650 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  if ( boardMessages )
  {
    if ( boardMessages->fields._size >= 1 )
      TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        this,
        this->fields.right + this->fields.setUpSpaceBetweenMessages,
        0,
        1,
        v10);
  }
}


System_Collections_IEnumerator_o *TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isSetUp,
        const MethodInfo *method)
{
  bool v7; // w22
  __int64 v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C35979 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo);
    byte_4C35979 = 1;
  }
  v7 = isSetUp;
  v8 = sub_1C32E6C(TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 40), (int32_t)this, v9, v10);
  *(_DWORD *)(v8 + 48) = id;
  *(_BYTE *)(v8 + 32) = v7;
  return (System_Collections_IEnumerator_o *)v8;
}


void TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v2; // x19
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x23
  EventBulletinBoardEntity_BulletinBoardInfo_o *v5; // x8
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v12; // x9
  __int64 v13; // x8
  __int64 v14; // x10
  EventBulletinBoardEntity_BulletinBoardInfo_o *v15; // x9
  UISprite_o *v16; // x21
  int32_t eventId; // w20
  Il2CppObject *v18; // x0
  System_String_o *v19; // x22
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v23; // x8
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4C3597A & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1C32C20(&StringLiteral_19375/*"face_{0:D3}"*/);
    byte_4C3597A = 1;
  }
  switchInfo = v2->fields.switchInfo;
  if ( !switchInfo )
    goto LABEL_24;
  switchCount = v2->fields.switchCount;
  if ( (unsigned int)switchCount >= LODWORD(switchInfo->max_length) )
    goto LABEL_25;
  v5 = switchInfo->m_Items[switchCount];
  if ( !v5 )
    goto LABEL_24;
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.svtNameLabel;
  if ( !this )
    goto LABEL_24;
  UILabel__set_text((UILabel_o *)this, v5->fields.name, 0);
  v12 = v2->fields.switchInfo;
  v13 = 176;
  if ( (switchCount & 1) == 0 )
    v13 = 168;
  if ( !v12 )
    goto LABEL_24;
  v14 = v2->fields.switchCount;
  if ( (unsigned int)v14 >= LODWORD(v12->max_length) )
LABEL_25:
    sub_1C32E84(this);
  v15 = v12->m_Items[v14];
  if ( !v15 )
    goto LABEL_24;
  v16 = *(UISprite_o **)((char *)&v2->klass + v13);
  eventId = v2->fields.eventId;
  iconId = v15->fields.iconId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v6, v7, v8, v9, v10, v11);
  v19 = System_String__Format((System_String_o *)StringLiteral_19375/*"face_{0:D3}"*/, v18, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40507600(eventId, v16, v19, 0);
  if ( (switchCount & 1) != 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon;
    if ( this )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      TweenAlpha__Begin(gameObject, v2->fields.wipeIconCrossFadeTime, 0.0, 0);
      this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon2;
      if ( this )
        goto LABEL_20;
    }
LABEL_24:
    sub_1C32E7C(this);
  }
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon2;
  if ( !this )
    goto LABEL_24;
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  TweenAlpha__Begin(v20, v2->fields.wipeIconCrossFadeTime, 0.0, 0);
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon;
  if ( !this )
    goto LABEL_24;
LABEL_20:
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (TitleInfoEventBulletinBoardComponent_o *)TweenAlpha__Begin(v22, v2->fields.wipeIconCrossFadeTime, 1.0, 0);
  v23 = v2->fields.switchInfo;
  if ( !v23 )
    goto LABEL_24;
  if ( v2->fields.switchCount >= LODWORD(v23->max_length) - 1 )
  {
    v2->fields.isSwitchWipe = 0;
    v2->fields.switchCount = 0;
  }
}


void TitleInfoEventBulletinBoardComponent__Update(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  char v5; // w22
  float v6; // s0
  float v7; // s9
  _BOOL8 v8; // x0
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  float v11; // s0
  UnityEngine_GameObject_o *v12; // x0
  float LocalPositionX; // s0
  const MethodInfo *v14; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v16; // x2
  float right; // s0
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C35972 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__);
    byte_4C35972 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  labels = this->fields.labels;
  if ( labels )
  {
    messages = this->fields.messages;
    if ( messages )
    {
      if ( messages->fields._size < 1 )
        return;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v19,
        (System_Collections_Generic_List_object__o *)labels,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
      v5 = 0;
      v20 = v19;
      v6 = 0.0;
LABEL_7:
      v7 = v6;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v20,
               (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
        if ( !v8 )
          break;
        current = v20.fields._current;
        if ( !v20.fields._current )
          sub_1C32E7C(v8);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20.fields._current, 0);
        v11 = UnityEngine_Time__get_deltaTime(0) * (float)-this->fields.messageScrollSpeed;
        GameObjectExtensions__AddLocalPositionX(gameObject, v11, 0);
        v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(v12, 0);
        v6 = LocalPositionX + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)current, 0).fields.x;
        v5 |= v6 < this->fields.left;
        if ( v6 > v7 )
          goto LABEL_7;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
      if ( (v5 & 1) == 0 )
        goto LABEL_16;
      labels = this->fields.labels;
      if ( labels )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)labels,
                 0,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__);
        TitleInfoEventBulletinBoardComponent__DeleteLabel(
          (TitleInfoEventBulletinBoardComponent_o *)Item,
          (ScriptLineMessage_o *)Item,
          v16);
        labels = this->fields.labels;
        if ( labels )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)labels,
            0,
            (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
LABEL_16:
          right = this->fields.right;
          if ( v7 < right )
          {
            if ( this->fields.isSwitchWipe )
            {
              ++this->fields.switchCount;
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(this, right, 1, 0, v14);
              TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(this, v18);
            }
            else
            {
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(
                this,
                v7 + this->fields.spaceBetweenMessages,
                0,
                0,
                v14);
            }
          }
          return;
        }
      }
    }
    sub_1C32E7C(labels);
  }
}


UnityEngine_Vector3_o TitleInfoEventBulletinBoardComponent__localPosByDispType(
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

  if ( (byte_4C35975 & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C35975 = 1;
  }
  if ( this->fields.enableFSPos )
  {
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    IsUnderVista = FSUtility__IsUnderVista(0);
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


void TitleInfoEventBulletinBoardComponent__resetLabelList(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  struct System_Collections_Generic_List_ScriptLineMessage__o **p_labels; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x0
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_int__o *randomQue; // x8
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C35977 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptLineMessage__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ScriptLineMessage__TypeInfo);
    byte_4C35977 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  p_labels = &this->fields.labels;
  labels = this->fields.labels;
  if ( labels )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)labels,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
      if ( !v5 )
        break;
      TitleInfoEventBulletinBoardComponent__DeleteLabel(
        (TitleInfoEventBulletinBoardComponent_o *)v5,
        (ScriptLineMessage_o *)v17.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    v9 = *p_labels;
    if ( !*p_labels )
      sub_1C32E7C(v7);
    size = v9->fields._size;
    v11 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
  }
  else
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ScriptLineMessage__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    *p_labels = (struct System_Collections_Generic_List_ScriptLineMessage__o *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.labels, (int32_t)v12, v13, v14);
  }
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    v16 = randomQue->fields._version + 1;
    randomQue->fields._size = 0;
    randomQue->fields._version = v16;
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v8);
  }
}


void TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51___ctor(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__MoveNext(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *v8; // x19
  int32_t _1__state; // w8
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x23
  Il2CppObject *Master_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  float v15; // s8
  UnityEngine_WaitForSeconds_o *v16; // x20
  CGThumbnailListItem_o *v17; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool result; // w0
  struct EventBulletinBoardEntity_o *ent_5__3; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v23; // x8
  int32_t eventId; // w20
  UISprite_o *wipeIcon; // x21
  Il2CppObject *v26; // x0
  System_String_o *v27; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventBulletinBoardEntity_o *v29; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v30; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v31; // x8
  System_String_o *name; // x1
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  struct EventBulletinBoardEntity_o **p_ent_5__3; // x20
  float wipeIconFadeOutTime; // s8
  UnityEngine_WaitForSeconds_o *v37; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v8 = this;
  if ( (byte_4C35987 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C32C20(&StringLiteral_19375/*"face_{0:D3}"*/);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C35987 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    ent_5__3 = v8->fields._ent_5__3;
    if ( !ent_5__3 )
      goto LABEL_39;
    script = ent_5__3->fields.script;
    if ( !script )
      goto LABEL_39;
    if ( LODWORD(script->max_length) )
    {
      v23 = script->m_Items[0];
      if ( !v23 )
        goto LABEL_39;
      eventId = _4__this->fields.eventId;
      wipeIcon = _4__this->fields.wipeIcon;
      iconId = v23->fields.iconId;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId, v2, v3, v4, v5, v6, v7);
      v27 = System_String__Format((System_String_o *)StringLiteral_19375/*"face_{0:D3}"*/, v26, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI_40507600(eventId, wipeIcon, v27, 0);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( !this )
        goto LABEL_39;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)TweenAlpha__Begin(
                                                                                           gameObject,
                                                                                           _4__this->fields.wipeIconFadeInTime,
                                                                                           1.0,
                                                                                           0);
      v29 = v8->fields._ent_5__3;
      if ( !v29 )
        goto LABEL_39;
      v30 = v29->fields.script;
      if ( !v30 )
        goto LABEL_39;
      if ( LODWORD(v30->max_length) )
      {
        v31 = v30->m_Items[0];
        if ( !v31 )
          goto LABEL_39;
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.svtNameLabel;
        if ( !this )
          goto LABEL_39;
        name = v31->fields.name;
        goto LABEL_36;
      }
    }
    sub_1C32E84(this);
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( this )
      {
        v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        TweenAlpha__Begin(v33, _4__this->fields.wipeIconFadeOutTime, 0.0, 0);
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon2;
        if ( this )
        {
          v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          TweenAlpha__Begin(v34, _4__this->fields.wipeIconFadeOutTime, 0.0, 0);
          this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v8->fields._bulletinBoardMst_5__2;
          if ( this )
          {
            p_ent_5__3 = &v8->fields._ent_5__3;
            this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                                 (Il2CppObject **)&v8->fields._ent_5__3,
                                                                                                 v8->fields.id,
                                                                                                 (const MethodInfo_3396884 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*p_ent_5__3 )
                goto LABEL_39;
              if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)(*p_ent_5__3)->fields.script, 0) )
              {
                wipeIconFadeOutTime = _4__this->fields.wipeIconFadeOutTime;
                v37 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v37, wipeIconFadeOutTime, 0);
                v8->fields.__2__current = (Il2CppObject *)v37;
                p__2__current = (CGThumbnailListItem_o *)&v8->fields.__2__current;
                sub_1C32BC4(p__2__current, (int32_t)v37, v39, v40);
                LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
                return 1;
              }
            }
            this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.svtNameLabel;
            if ( this )
            {
              name = (System_String_o *)StringLiteral_1/*""*/;
LABEL_36:
              UILabel__set_text((UILabel_o *)this, name, 0);
              return 0;
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C32E7C(this);
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
  v8->fields._bulletinBoardMst_5__2 = (struct EventBulletinBoardMaster_o *)Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields._bulletinBoardMst_5__2, (int32_t)Master_object, v12, v13);
  if ( !_4__this )
    goto LABEL_39;
  if ( v8->fields.isSetUp )
    v14 = 216;
  else
    v14 = 212;
  v15 = *(float *)((char *)&_4__this->klass + v14);
  v16 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v16, v15, 0);
  v8->fields.__2__current = (Il2CppObject *)v16;
  v17 = (CGThumbnailListItem_o *)&v8->fields.__2__current;
  sub_1C32BC4(v17, (int32_t)v16, v18, v19);
  result = 1;
  LODWORD(v17[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_Collections_IEnumerator_Reset(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_Collections_IEnumerator_get_Current(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51__System_IDisposable_Dispose(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventBulletinBoardComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C35984 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    byte_4C35984 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventBulletinBoardComponent___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void TitleInfoEventBulletinBoardComponent___c___ctor(
        TitleInfoEventBulletinBoardComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


EventBulletinBoardEntity_o *TitleInfoEventBulletinBoardComponent___c___GetNextMessageId_b__57_0(
        TitleInfoEventBulletinBoardComponent___c_o *this,
        EventBulletinBoardEntity_o *a,
        EventBulletinBoardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C32E7C(this);
  if ( a->fields.dispOrder >= b->fields.dispOrder )
    return b;
  else
    return a;
}


void TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0___GetNextMessageId_b__1(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_o *this,
        EventBulletinBoardEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.dispOrder == this->fields.minDispOrderNum;
}


void TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1___GetNextMessageId_b__2(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *this,
        EventBulletinBoardEntity_o *t,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *v4; // x20

  v4 = this;
  if ( (byte_4C35985 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    byte_4C35985 = 1;
  }
  if ( !t )
    sub_1C32E7C(this);
  return t->fields.id == v4->fields.showStatus.fields.key;
}


void TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___LoadAssetData_b__0(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *v5; // x19
  CGThumbnailListItem_o *_4__this; // x8
  struct TitleInfoEventBulletinBoardComponent_o *v7; // x8
  int32_t eventId; // w20
  System_Action_o *callBack; // x19

  v5 = this;
  if ( (byte_4C35986 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C35986 = 1;
  }
  _4__this = (CGThumbnailListItem_o *)v5->fields.__4__this;
  if ( !_4__this
    || (_4__this[2].klass = (CGThumbnailListItem_c *)assetData,
        sub_1C32BC4(_4__this + 2, (int32_t)assetData, (int32_t)method, v3),
        (v7 = v5->fields.__4__this) == 0) )
  {
    sub_1C32E7C(this);
  }
  eventId = v7->fields.eventId;
  callBack = v5->fields.callBack;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_40507304(eventId, callBack, 1, 0);
}