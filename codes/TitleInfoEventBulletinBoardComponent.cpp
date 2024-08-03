void __fastcall TitleInfoEventBulletinBoardComponent___ctor(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  this->fields.rubyRelativePositionY = 12.0;
  *(_QWORD *)&this->fields.messageScrollSpeed = 0x42AA000040A00000LL;
  *(_OWORD *)&this->fields.wipeIconFadeOutStartTime = xmmword_BA3D30;
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
  UnityEngine_GameObject_o *v14; // x24
  ScriptLineMessage_o *v15; // x22
  const MethodInfo *v16; // x1
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x9
  EventBulletinBoardEntity_BulletinBoardInfo_o *v19; // x8
  UnityEngine_GameObject_o *msg; // x1
  int32_t NextMessageId; // w23
  const MethodInfo *v22; // x2
  struct UISprite_o *baseIcon; // x8
  float mWidth; // s0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 klass_low; // x10
  __int64 v32; // x8
  const MethodInfo *v33; // x3
  System_Collections_IEnumerator_o *v34; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA4B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___, isNotRandom);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptLineMessage__Add__, v9);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    byte_49FA4B3 = 1;
  }
  baseLabel = (Il2CppObject *)this->fields.baseLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   baseLabel,
                                                   (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_28;
  v14 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
  if ( !Component_object )
    goto LABEL_28;
  v15 = (ScriptLineMessage_o *)Component_object;
  ScriptLineMessage__Init((ScriptLineMessage_o *)Component_object, 0LL);
  if ( isNotRandom )
  {
    switchInfo = this->fields.switchInfo;
    if ( switchInfo )
    {
      switchCount = this->fields.switchCount;
      if ( (unsigned int)switchCount >= switchInfo->max_length )
        sub_1B6432C(Component_object, v16);
      v19 = switchInfo->m_Items[switchCount];
      if ( v19 )
      {
        msg = (UnityEngine_GameObject_o *)v19->fields.msg;
        NextMessageId = -1;
        goto LABEL_17;
      }
    }
LABEL_28:
    sub_1B64324(Component_object);
  }
  NextMessageId = TitleInfoEventBulletinBoardComponent__GetNextMessageId(this, v16);
  Component_object = (UnityEngine_GameObject_o *)TitleInfoEventBulletinBoardComponent__GetMessage(
                                                   this,
                                                   NextMessageId,
                                                   v22);
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
  v38.fields.y = v15->fields.rubyLineHeight;
  v38.fields.x = 0.0;
  v38.fields.z = 0.0;
  GameObjectExtensions__SetLocalPosition(v14, v38, 0LL);
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v25);
    byte_49F7116 = 1;
  }
  GameObjectExtensions__SetLocalScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  GameObjectExtensions__SetLocalPositionX(v14, setPos, 0LL);
  TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(this, v15, v26);
  Component_object = (UnityEngine_GameObject_o *)this->fields.labels;
  if ( !Component_object )
    goto LABEL_28;
  v29 = *(_QWORD *)&Component_object->fields.m_CachedPtr;
  v30 = Method_System_Collections_Generic_List_ScriptLineMessage__Add__;
  ++HIDWORD(Component_object[1].klass);
  if ( !v29 )
    goto LABEL_28;
  klass_low = SLODWORD(Component_object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(v29 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      (Il2CppObject *)v15,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    if ( isNotRandom )
      return;
  }
  else
  {
    v32 = v29 + 8 * klass_low;
    LODWORD(Component_object[1].klass) = klass_low + 1;
    *(_QWORD *)(v32 + 32) = v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v15, v27, v28);
    if ( isNotRandom )
      return;
  }
  if ( this->fields.isDispWipeIcon )
  {
    v34 = TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(this, NextMessageId, isSetUp, v33);
    started = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v34, 0LL);
    this->fields.coroutine = started;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.coroutine, (int32_t)started, v36, v37);
  }
}


void __fastcall TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *lineMessage,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v4; // x19
  __int64 v5; // x1
  int m_CancellationTokenSource; // w8
  TitleInfoEventBulletinBoardComponent_o *v7; // x20
  unsigned int v8; // w22
  __int64 v9; // x24
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *v11; // x21
  TitleInfoEventBulletinBoardComponent_o *v12; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49FA4B6 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, lineMessage);
    byte_49FA4B6 = 1;
  }
  if ( v4->fields.rubyRelativePositionY != 0.0 )
  {
    if ( !lineMessage )
      goto LABEL_22;
    this = (TitleInfoEventBulletinBoardComponent_o *)ScriptLineMessage__GetDispLabelArray(lineMessage, 0LL);
    if ( !this )
      goto LABEL_22;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v7 = this;
    if ( m_CancellationTokenSource >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= m_CancellationTokenSource )
          sub_1B6432C(this, v5);
        v9 = *((_QWORD *)&v7->fields.TerminalLocalPos.fields.x + (int)v8);
        if ( !v9 )
          break;
        v10 = *(UnityEngine_Object_o **)(v9 + 16);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v11 = *(UnityEngine_Object_o **)(v9 + 24);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            v12 = this;
            this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Component__get_transform(
                                                               *(UnityEngine_Component_o **)(v9 + 16),
                                                               0LL);
            if ( !this )
              break;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
            GameObjectExtensions__SetLocalPositionY(
              (UnityEngine_GameObject_o *)v12,
              localPosition.fields.y + v4->fields.rubyRelativePositionY,
              0LL);
          }
        }
        m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
        if ( (int)++v8 >= m_CancellationTokenSource )
          return;
      }
LABEL_22:
      sub_1B64324(this);
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

  if ( (byte_49FA4B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v8);
    byte_49FA4B9 = 1;
  }
  memset(&v13, 0, 32);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v11,
    showStatusDic,
    (const MethodInfo_31154EC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v13.fields._dictionary = v11;
  v13.fields._current = v12;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v13,
            (const MethodInfo_326716C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( !BYTE4(v13.fields._current.fields.key) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        &v13,
        (const MethodInfo_3267274 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      return;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v13,
    (const MethodInfo_3267274 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v11,
    showStatusDic,
    (const MethodInfo_31154EC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v13.fields._dictionary = v11;
  v13.fields._current = v12;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v13,
            (const MethodInfo_326716C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
    EventRewardSaveData__SetBulletInBoardMessageState(
      this->fields.eventId,
      (int32_t)v13.fields._current.fields.key,
      0,
      0LL);
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v13,
    (const MethodInfo_3267274 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
LABEL_15:
    sub_1B64324(showStatusDic);
  System_Collections_Generic_Dictionary_int__bool___Clear(
    showStatusDic,
    (const MethodInfo_3115290 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  TitleInfoEventBulletinBoardComponent__ResetShowStatus(this, v10);
}


void __fastcall TitleInfoEventBulletinBoardComponent__DeleteLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *label,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FA4AE & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, label);
    byte_49FA4AE = 1;
  }
  if ( !label )
    sub_1B64324(this);
  ScriptLineMessage__DeleteLabels(label, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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
  Il2CppObject *current; // x21
  System_String_o **p_monitor; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *monitor; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  _DWORD *v17; // x8
  __int64 v18; // x8
  System_String_o *v19; // x19
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FA4BB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, *(_QWORD *)&id);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v7);
    byte_49FA4BB = 1;
  }
  memset(&v22, 0, sizeof(v22));
  messages = this->fields.messages;
  if ( !messages )
    return 0LL;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)messages,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v22 = v21;
  do
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v9 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
      return 0LL;
    }
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1B64324(v9);
  }
  while ( LODWORD(v22.fields._current[1].klass) != id );
  p_monitor = (System_String_o **)&v22.fields._current[1].monitor;
  if ( System_String__IsNullOrEmpty((System_String_o *)v22.fields._current[1].monitor, 0LL)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[2].monitor, 0LL) )
  {
    this->fields.isSwitchWipe = 1;
    monitor = (struct EventBulletinBoardEntity_BulletinBoardInfo_array *)current[2].monitor;
    this->fields.switchInfo = monitor;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.switchInfo, (int32_t)monitor, v12, v13);
    v17 = current[2].monitor;
    if ( !v17 )
      sub_1B64324(v15);
    if ( !v17[6] )
      sub_1B6432C(v15, v16);
    v18 = *((_QWORD *)v17 + 4);
    if ( !v18 )
      sub_1B64324(v15);
    p_monitor = (System_String_o **)(v18 + 32);
  }
  v19 = *p_monitor;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  return v19;
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
  const MethodInfo *v36; // x1
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x20
  void *showStatusDic; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  bool v47; // zf
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x23
  System_Func_object__bool__o *v49; // x24
  Il2CppObject *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x1
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  TitleInfoEventBulletinBoardComponent___c_c *v60; // x0
  System_Func_T1__T2__TResult__o *_9__57_0; // x22
  Il2CppObject *v62; // x23
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x1
  __int64 v67; // x2
  System_Func_object__bool__o *v68; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  System_Collections_Generic_List_object__o *v70; // x22
  __int64 v71; // x1
  __int64 v72; // x2
  WeightRate_int__o *v73; // x21
  int32_t Data_59294540; // w23
  _BOOL8 v75; // x0
  int32_t v76; // w0
  int32_t v77; // w0
  int32_t eventId; // w0
  const MethodInfo *v79; // x3
  Il2CppObject *v81; // [xsp+8h] [xbp-C8h]
  __int128 v82; // [xsp+10h] [xbp-C0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v83; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v85; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_49FA4BA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__, v14);
    sub_1B640C8(&System_Func_EventBulletinBoardEntity__bool__TypeInfo, v15);
    sub_1B640C8(
      &System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo,
      v16);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__, v22);
    sub_1B640C8(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo, v23);
    sub_1B640C8(&Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__, v24);
    sub_1B640C8(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__, v25);
    sub_1B640C8(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo, v26);
    sub_1B640C8(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__, v27);
    sub_1B640C8(&TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo, v28);
    sub_1B640C8(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v29);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v30);
    sub_1B640C8(&Method_WeightRate_int__getData___75700448, v31);
    sub_1B640C8(&Method_WeightRate_int__getData__, v32);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v33);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v34);
    sub_1B640C8(&WeightRate_int__TypeInfo, v35);
    byte_49FA4BA = 1;
  }
  memset(&v85, 0, 32);
  memset(&v84, 0, sizeof(v84));
  v81 = (Il2CppObject *)sub_1B64314(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0_TypeInfo, method, v2);
  System_Object___ctor(v81, 0LL);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v36);
  v39 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_48;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v82,
    (System_Collections_Generic_Dictionary_int__bool__o *)showStatusDic,
    (const MethodInfo_31154EC *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  *(_OWORD *)&v85.fields._dictionary = v82;
  v85.fields._current = v83;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v85,
            (const MethodInfo_326716C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    v43 = (Il2CppObject *)sub_1B64314(TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_TypeInfo, v41, v42);
    System_Object___ctor(v43, 0LL);
    if ( !v43 )
      sub_1B64324(v44);
    v47 = ((__int64)v85.fields._current.fields.key & 0xFF00000000LL) == 0;
    v43[1].klass = (Il2CppClass *)v85.fields._current.fields.key;
    if ( v47 )
    {
      messages = this->fields.messages;
      v49 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventBulletinBoardEntity__bool__TypeInfo, v45, v46);
      System_Func_object__bool____ctor(
        v49,
        v43,
        Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1__GetNextMessageId_b__2__,
        0LL);
      v50 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
              (System_Collections_Generic_IEnumerable_TSource__o *)messages,
              (System_Func_TSource__bool__o *)v49,
              (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
      v53 = v50;
      if ( !v39 )
        sub_1B64324(v50);
      items = v39->fields._items;
      v55 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__;
      ++v39->fields._version;
      if ( !items )
        sub_1B64324(v50);
      size = v39->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v39,
          v50,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &items->obj.klass + size;
        v39->fields._size = size + 1;
        v57[4] = (Il2CppClass *)v53;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 4), (int32_t)v53, v51, v52);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v85,
    (const MethodInfo_3267274 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v60 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  if ( !TitleInfoEventBulletinBoardComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    v60 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  }
  _9__57_0 = (System_Func_T1__T2__TResult__o *)v60->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
    }
    v62 = (Il2CppObject *)v60->static_fields->__9;
    _9__57_0 = (System_Func_T1__T2__TResult__o *)sub_1B64314(
                                                   System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo,
                                                   v58,
                                                   v59);
    System_Func_object__object__object____ctor(
      _9__57_0,
      v62,
      Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__57_0__,
      0LL);
    static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__o *)_9__57_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v64, v65);
  }
  showStatusDic = System_Linq_Enumerable__Aggregate_object_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)v39,
                    (System_Func_TSource__TSource__TSource__o *)_9__57_0,
                    (const MethodInfo_2E43150 *)Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
  if ( !showStatusDic )
    goto LABEL_48;
  if ( !v81 )
    goto LABEL_48;
  LODWORD(v81[1].klass) = *((_DWORD *)showStatusDic + 8);
  v68 = (System_Func_object__bool__o *)sub_1B64314(System_Func_EventBulletinBoardEntity__bool__TypeInfo, v66, v67);
  System_Func_object__bool____ctor(
    v68,
    v81,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass57_0__GetNextMessageId_b__1__,
    0LL);
  v69 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (System_Func_TSource__bool__o *)v68,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
  v70 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v69,
                                                       (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  v73 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, v71, v72);
  WeightRate_int____ctor(v73, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
  if ( !v70 )
    goto LABEL_48;
  if ( v70->fields._size >= 2 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v82,
      v70,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    *(_OWORD *)&v84.fields._list = v82;
    for ( v84.fields._current = v83.fields.key;
          ;
          WeightRate_int___setWeight(
            v73,
            HIDWORD(v84.fields._current[2].klass),
            (int32_t)v84.fields._current[1].klass,
            (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__) )
    {
      v75 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v84,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v75 )
        break;
      if ( !v84.fields._current )
        sub_1B64324(v75);
      if ( !v73 )
        sub_1B64324(v75);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v84,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( !v73 )
      goto LABEL_48;
    v76 = UnityEngine_Random__Range_69087476(0, v73->fields.totalweight, 0LL);
    showStatusDic = (void *)WeightRate_int___getData(
                              v73,
                              v76,
                              (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
    Data_59294540 = (int)showStatusDic;
  }
  else
  {
    showStatusDic = System_Collections_Generic_List_object___get_Item(
                      v70,
                      0,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    if ( !showStatusDic )
      goto LABEL_48;
    Data_59294540 = *((_DWORD *)showStatusDic + 4);
  }
  if ( this->fields.isLastSeed )
  {
    showStatusDic = (void *)System_Linq_Enumerable__Count_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)v70,
                              (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    if ( (int)showStatusDic >= 2 && Data_59294540 == this->fields.lastMessageId )
    {
      if ( !v73 )
        goto LABEL_48;
      v77 = UnityEngine_Random__Range_69087476(0, v73->fields.totalweight, 0LL);
      Data_59294540 = WeightRate_int___getData_59294540(
                        v73,
                        v77,
                        this->fields.lastMessageId,
                        (const MethodInfo_388C34C *)Method_WeightRate_int__getData___75700448);
    }
    eventId = this->fields.eventId;
    this->fields.isLastSeed = 0;
    EventRewardSaveData__SetBulletInBoardLastMessageId(eventId, 0, 0LL);
  }
  if ( !v39 )
LABEL_48:
    sub_1B64324(showStatusDic);
  if ( v39->fields._size == 1 )
  {
    this->fields.isLastSeed = 1;
    this->fields.lastMessageId = Data_59294540;
    EventRewardSaveData__SetBulletInBoardLastMessageId(Data_59294540, 0, 0LL);
  }
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, Data_59294540, 1, 0LL);
  TitleInfoEventBulletinBoardComponent__SetShowStatus(this, Data_59294540, 1, v79);
  return Data_59294540;
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
  System_Collections_Generic_List_T__o *Item; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int v15; // w21
  int32_t v16; // w22
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x1

  if ( (byte_49FA4BD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__RemoveAt__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___, v10);
    byte_49FA4BD = 1;
  }
  p_randomQue = (System_Collections_Generic_List_T__o **)&this->fields.randomQue;
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___RemoveAt(
      randomQue,
      0,
      (const MethodInfo_34916FC *)Method_System_Collections_Generic_List_int__RemoveAt__);
    Item = *p_randomQue;
    if ( !*p_randomQue )
      goto LABEL_21;
    if ( Item->fields._size <= 1 )
    {
      Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_int___get_Item(
                                                       (System_Collections_Generic_List_int__o *)Item,
                                                       0,
                                                       (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
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
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
        (const MethodInfo_2EE6C88 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    }
  }
  else
  {
    v20 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      method,
                                                      v2);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.randomQue = v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.randomQue, (int32_t)v20, v21, v22);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v23);
  }
  Item = *p_randomQue;
  if ( !*p_randomQue )
LABEL_21:
    sub_1B64324(Item);
  return System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)Item,
           0,
           (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
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
  struct UIPanel_o *scrollerPanel; // x8
  float v17; // s2
  System_String_o *baseIconName; // x22
  UISprite_o *baseIcon; // x23
  System_String_o *wipeIconFrameName; // x22
  UISprite_o *wipeIconFrame; // x23
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_Dictionary_int__bool__o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t BulletInBoardLastMessageId; // w0
  const MethodInfo *v28; // x2
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FA4AF & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&dispType);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v10);
    byte_49FA4AF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v29 = TitleInfoEventBulletinBoardComponent__localPosByDispType(this, dispType, v12);
  GameObjectExtensions__SetLocalPosition(gameObject, v29, 0LL);
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
    byte_49F7116 = 1;
  }
  GameObjectExtensions__SetLocalScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  scrollerPanel = this->fields.scrollerPanel;
  if ( !scrollerPanel )
    goto LABEL_18;
  v17 = scrollerPanel->fields.mClipRange.fields.z * 0.5;
  this->fields.left = -v17;
  this->fields.right = v17;
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
    sub_1B64324(bulletinBg);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bulletinBg, this->fields.isDispBaseIcon, 0LL);
  this->fields.eventId = eventId;
  v24 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B64314(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v22,
                                                                v23);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v24,
    (const MethodInfo_3114728 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.showStatusDic = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.showStatusDic, (int32_t)v24, v25, v26);
  BulletInBoardLastMessageId = EventRewardSaveData__GetBulletInBoardLastMessageId(this->fields.eventId, 0LL);
  this->fields.lastMessageId = BulletInBoardLastMessageId;
  this->fields.isLastSeed = BulletInBoardLastMessageId > 0;
  TitleInfoEventBulletinBoardComponent__LoadAssetData(this, callBack, v28);
}


System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_2EE6D64 *method)
{
  const MethodInfo_2EE6D64_RGCTXs *rgctx_data; // x21
  __int64 native_size; // x2
  _QWORD *v8; // x22
  void *v9; // x0
  int32_t v10; // w0
  int v11; // w21
  int32_t v12; // w26
  MethodInfo *_2_System_Collections_Generic_List_T__get_Item; // x1
  void (__fastcall *methodPointer)(); // x0
  int32_t v15; // w28
  MethodInfo *v16; // x1
  void (__fastcall *v17)(); // x0
  const MethodInfo_2EE6D64_RGCTXs *v18; // x8
  __int64 v19; // x4
  MethodInfo *_4_System_Collections_Generic_List_T__set_Item; // x1
  Il2CppMethodPointer v21; // x0
  const MethodInfo_2EE6D64_RGCTXs *v22; // x8
  __int64 v23; // x4
  MethodInfo *v24; // x1
  Il2CppMethodPointer v25; // x0
  __int64 v27; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-38h]
  int32_t v29; // [xsp+14h] [xbp-2Ch]
  __int64 v30; // [xsp+18h] [xbp-28h]
  int *v31; // [xsp+20h] [xbp-20h] BYREF
  _QWORD *v32; // [xsp+28h] [xbp-18h]
  int v33; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v34; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v34 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6000();
    rgctx_data = method->rgctx_data;
  }
  native_size = (unsigned int)rgctx_data->_3_T->_2.native_size;
  v8 = (__int64 *)((char *)&v27 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v30 = native_size;
  v9 = memset(v8, 0, native_size);
  if ( !list )
    sub_1B64324(v9);
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
      v15 = UnityEngine_Random__Range_69087476(v29, v12, 0LL);
      v16 = method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
      v17 = v16->methodPointer;
      v33 = v15;
      v31 = &v33;
      v32 = v8;
      v16->invoker_method(v17, v16, list, (void **)&v31, v8);
      v18 = method->rgctx_data;
      v19 = (__int64)v8;
      if ( (v18->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v19 = *v8;
      _4_System_Collections_Generic_List_T__set_Item = v18->_4_System_Collections_Generic_List_T__set_Item;
      v21 = _4_System_Collections_Generic_List_T__set_Item->methodPointer;
      v33 = v11;
      v31 = &v33;
      v32 = (_QWORD *)v19;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))_4_System_Collections_Generic_List_T__set_Item->invoker_method)(
        v21,
        _4_System_Collections_Generic_List_T__set_Item,
        list,
        &v31);
      memcpy(v8, v8, v30);
      v22 = method->rgctx_data;
      v23 = (__int64)v8;
      v24 = v22->_4_System_Collections_Generic_List_T__set_Item;
      v25 = v24->methodPointer;
      if ( (v22->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v23 = *v8;
      v33 = v15;
      v31 = &v33;
      v32 = (_QWORD *)v23;
      ((void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int **))v24->invoker_method)(
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


System_Collections_Generic_List_T__o *__fastcall TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_2EE6C88 *method)
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
    list = (System_Collections_Generic_List_T__o *)sub_1BB6000();
  if ( !v5 )
    sub_1B64324(list);
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
               (const MethodInfo_348FBEC *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      v10 = UnityEngine_Random__Range_69087476(v7, size, 0LL);
      v11 = System_Collections_Generic_List_int___get_Item(
              v5,
              v10,
              (const MethodInfo_348FBEC *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_int___set_Item(
        v5,
        v8,
        v11,
        (const MethodInfo_348FC40 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_int___set_Item(
        v5,
        v10,
        Item,
        (const MethodInfo_348FC40 *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x0
  System_String_o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  AssetLoader_LoadEndDataHandler_o *v19; // x20

  if ( (byte_49FA4BC & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, callBack);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__, v6);
    sub_1B640C8(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_6201/*"EventUI/Prefabs/"*/, v8);
    byte_49FA4BC = 1;
  }
  v9 = sub_1B64314(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo, callBack, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B64324(v10);
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = callBack;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)callBack, v13, v14);
  v15 = System_Int32__ToString((int)this + 256, 0LL);
  v16 = System_String__Concat_61375396((System_String_o *)StringLiteral_6201/*"EventUI/Prefabs/"*/, v15, 0LL);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__LoadAssetData_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v16, v19, 1, 0LL);
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
  if ( (byte_49FA4BE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v3);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1B640C8(
                                                       &Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___,
                                                       v4);
    byte_49FA4BE = 1;
  }
  messages = v2->fields.messages;
  if ( !messages )
LABEL_12:
    sub_1B64324(this);
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
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
    (const MethodInfo_2EE6C88 *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
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
  Il2CppObject *current; // x24
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v13; // x0
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FA4B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__, v7);
    byte_49FA4B8 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  messages = this->fields.messages;
  if ( !messages )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)messages,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v18,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v9 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1B64324(v9);
    if ( EventRewardSaveData__GetBulletInBoardMessageState(
           this->fields.eventId,
           (int32_t)v18.fields._current[1].klass,
           0LL) )
    {
      TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 1, v11);
    }
    showStatusDic = this->fields.showStatusDic;
    if ( !showStatusDic )
      sub_1B64324(0LL);
    if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            showStatusDic,
            (int32_t)current[1].klass,
            (const MethodInfo_31152FC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      goto LABEL_14;
    v13 = this->fields.showStatusDic;
    if ( !v13 )
      sub_1B64324(0LL);
    if ( System_Collections_Generic_Dictionary_int__bool___get_Item(
           v13,
           (int32_t)current[1].klass,
           (const MethodInfo_3115058 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
    {
LABEL_14:
      v15 = this->fields.showStatusDic;
      if ( !v15 )
        sub_1B64324(0LL);
      if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
             v15,
             (int32_t)current[1].klass,
             (const MethodInfo_31152FC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      {
        continue;
      }
    }
    TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 0, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
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

  if ( (byte_49FA4B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__Add__, *(_QWORD *)&id);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v8);
    byte_49FA4B7 = 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic
    || (showStatusDic = (System_Collections_Generic_Dictionary_int__bool__o *)System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                                                                                showStatusDic,
                                                                                id,
                                                                                (const MethodInfo_31152FC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__),
        !this->fields.showStatusDic) )
  {
    sub_1B64324(showStatusDic);
  }
  if ( ((unsigned __int8)showStatusDic & 1) != 0 )
    System_Collections_Generic_Dictionary_int__bool___set_Item(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
  else
    System_Collections_Generic_Dictionary_int__bool___Add(
      this->fields.showStatusDic,
      id,
      isShow,
      (const MethodInfo_3115100 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, id, isShow, 0LL);
}


void __fastcall TitleInfoEventBulletinBoardComponent__SetUp(
        TitleInfoEventBulletinBoardComponent_o *this,
        System_Collections_Generic_List_EventBulletinBoardEntity__o *boardMessages,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UILabel_o *svtNameLabel; // x0
  const MethodInfo *v12; // x3

  if ( (byte_49FA4B1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__, boardMessages);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FA4B1 = 1;
  }
  this->fields.messages = boardMessages;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.messages,
    (int32_t)boardMessages,
    eventId,
    (int32_t)method);
  this->fields.eventId = eventId;
  TitleInfoEventBulletinBoardComponent__resetLabelList(this, v9);
  coroutine = this->fields.coroutine;
  if ( coroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_69113628((UnityEngine_MonoBehaviour_o *)this, coroutine, 0LL);
  svtNameLabel = this->fields.svtNameLabel;
  if ( !svtNameLabel
    || (UILabel__set_text(svtNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.wipeIcon2) == 0LL)
    || (UISprite__set_atlas((UISprite_o *)svtNameLabel, 0LL, 0LL),
        (svtNameLabel = (UILabel_o *)this->fields.showStatusDic) == 0LL) )
  {
    sub_1B64324(svtNameLabel);
  }
  System_Collections_Generic_Dictionary_int__bool___Clear(
    (System_Collections_Generic_Dictionary_int__bool__o *)svtNameLabel,
    (const MethodInfo_3115290 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  if ( boardMessages )
  {
    if ( boardMessages->fields._size >= 1 )
      TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        this,
        this->fields.right + this->fields.setUpSpaceBetweenMessages,
        0,
        1,
        v12);
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
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49FA4B4 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo, *(_QWORD *)&id);
    byte_49FA4B4 = 1;
  }
  v7 = isSetUp;
  v8 = sub_1B64314(
         TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_TypeInfo,
         *(_QWORD *)&id,
         isSetUp);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 40), (int32_t)this, v9, v10);
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
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_49FA4B5 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_1B640C8(&StringLiteral_19280/*"face_{0:D3}"*/, v4);
    byte_49FA4B5 = 1;
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
  v8 = v2->fields.switchInfo;
  v9 = 176LL;
  if ( (switchCount & 1) == 0 )
    v9 = 168LL;
  if ( !v8 )
    goto LABEL_24;
  v10 = v2->fields.switchCount;
  if ( (unsigned int)v10 >= v8->max_length )
LABEL_25:
    sub_1B6432C(this, method);
  v11 = v8->m_Items[v10];
  if ( !v11 )
    goto LABEL_24;
  v12 = *(UISprite_o **)((char *)&v2->klass + v9);
  eventId = v2->fields.eventId;
  iconId = v11->fields.iconId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
  v15 = System_String__Format((System_String_o *)StringLiteral_19280/*"face_{0:D3}"*/, v14, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37544692(eventId, v12, v15, 0LL);
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
    sub_1B64324(this);
  }
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon2;
  if ( !this )
    goto LABEL_24;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  TweenAlpha__Begin(v16, v2->fields.wipeIconCrossFadeTime, 0.0, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon;
  if ( !this )
    goto LABEL_24;
LABEL_20:
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (TitleInfoEventBulletinBoardComponent_o *)TweenAlpha__Begin(v18, v2->fields.wipeIconCrossFadeTime, 1.0, 0LL);
  v19 = v2->fields.switchInfo;
  if ( !v19 )
    goto LABEL_24;
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
  const MethodInfo *v20; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v22; // x2
  float right; // s0
  const MethodInfo *v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FA4AD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__, v8);
    byte_49FA4AD = 1;
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
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v25,
        (System_Collections_Generic_List_object__o *)labels,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
      v11 = 0;
      v26 = v25;
      v12 = 0.0;
LABEL_7:
      v13 = v12;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v26,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
        if ( !v14 )
          break;
        current = v26.fields._current;
        if ( !v26.fields._current )
          sub_1B64324(v14);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26.fields._current, 0LL);
        v17 = UnityEngine_Time__get_deltaTime(0LL) * (float)-this->fields.messageScrollSpeed;
        GameObjectExtensions__AddLocalPositionX(gameObject, v17, 0LL);
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0LL);
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(v18, 0LL);
        v12 = LocalPositionX + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)current, 0LL).fields.x;
        v11 |= v12 < this->fields.left;
        if ( v12 > v13 )
          goto LABEL_7;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v26,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
      if ( (v11 & 1) == 0 )
        goto LABEL_16;
      labels = this->fields.labels;
      if ( labels )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)labels,
                 0,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__);
        TitleInfoEventBulletinBoardComponent__DeleteLabel(
          (TitleInfoEventBulletinBoardComponent_o *)Item,
          (ScriptLineMessage_o *)Item,
          v22);
        labels = this->fields.labels;
        if ( labels )
        {
          System_Collections_Generic_List_object___RemoveAt(
            (System_Collections_Generic_List_object__o *)labels,
            0,
            (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
LABEL_16:
          right = this->fields.right;
          if ( v13 < right )
          {
            if ( this->fields.isSwitchWipe )
            {
              ++this->fields.switchCount;
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(this, right, 1, 0, v20);
              TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(this, v24);
            }
            else
            {
              TitleInfoEventBulletinBoardComponent__AddRandomLabel(
                this,
                v13 + this->fields.spaceBetweenMessages,
                0,
                0,
                v20);
            }
          }
          return;
        }
      }
    }
    sub_1B64324(labels);
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

  if ( (byte_49FA4B0 & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, *(_QWORD *)&dispType);
    byte_49FA4B0 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  struct System_Collections_Generic_List_ScriptLineMessage__o **p_labels; // x20
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x2
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *v17; // x8
  int32_t size; // w2
  int v19; // w9
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Collections_Generic_List_int__o *randomQue; // x8
  int v24; // w9
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FA4B2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptLineMessage__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ScriptLineMessage___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_ScriptLineMessage__TypeInfo, v10);
    byte_49FA4B2 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  p_labels = &this->fields.labels;
  labels = this->fields.labels;
  if ( labels )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)labels,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
      if ( !v13 )
        break;
      TitleInfoEventBulletinBoardComponent__DeleteLabel(
        (TitleInfoEventBulletinBoardComponent_o *)v13,
        (ScriptLineMessage_o *)v25.fields._current,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    v17 = *p_labels;
    if ( !*p_labels )
      sub_1B64324(v15);
    size = v17->fields._size;
    v19 = v17->fields._version + 1;
    v17->fields._size = 0;
    v17->fields._version = v19;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v17->fields._items, 0, size, 0LL);
  }
  else
  {
    v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_ScriptLineMessage__TypeInfo,
                                                         method,
                                                         v2);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    *p_labels = (struct System_Collections_Generic_List_ScriptLineMessage__o *)v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.labels, (int32_t)v20, v21, v22);
  }
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    v24 = randomQue->fields._version + 1;
    randomQue->fields._size = 0;
    randomQue->fields._version = v24;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x23
  Il2CppObject *Master_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  float v18; // s8
  UnityEngine_WaitForSeconds_o *v19; // x20
  ServantStatusBattleListViewItem_o *v20; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  bool result; // w0
  struct EventBulletinBoardEntity_o *ent_5__3; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v26; // x8
  int32_t eventId; // w20
  UISprite_o *wipeIcon; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventBulletinBoardEntity_o *v32; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v33; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v34; // x8
  System_String_o *name; // x1
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  struct EventBulletinBoardEntity_o **p_ent_5__3; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  float wipeIconFadeOutTime; // s8
  UnityEngine_WaitForSeconds_o *v42; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_49FA4C2 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_EventBulletinBoardMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_19280/*"face_{0:D3}"*/, v8);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)sub_1B640C8(&StringLiteral_1/*""*/, v9);
    byte_49FA4C2 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_39;
    ent_5__3 = v2->fields._ent_5__3;
    if ( !ent_5__3 )
      goto LABEL_39;
    script = ent_5__3->fields.script;
    if ( !script )
      goto LABEL_39;
    if ( script->max_length )
    {
      v26 = script->m_Items[0];
      if ( !v26 )
        goto LABEL_39;
      eventId = _4__this->fields.eventId;
      wipeIcon = _4__this->fields.wipeIcon;
      iconId = v26->fields.iconId;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconId);
      v30 = System_String__Format((System_String_o *)StringLiteral_19280/*"face_{0:D3}"*/, v29, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI_37544692(eventId, wipeIcon, v30, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( !this )
        goto LABEL_39;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)TweenAlpha__Begin(
                                                                                           gameObject,
                                                                                           _4__this->fields.wipeIconFadeInTime,
                                                                                           1.0,
                                                                                           0LL);
      v32 = v2->fields._ent_5__3;
      if ( !v32 )
        goto LABEL_39;
      v33 = v32->fields.script;
      if ( !v33 )
        goto LABEL_39;
      if ( v33->max_length )
      {
        v34 = v33->m_Items[0];
        if ( !v34 )
          goto LABEL_39;
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.svtNameLabel;
        if ( !this )
          goto LABEL_39;
        name = v34->fields.name;
        goto LABEL_36;
      }
    }
    sub_1B6432C(this, method);
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon;
      if ( this )
      {
        v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        TweenAlpha__Begin(v36, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
        this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)_4__this->fields.wipeIcon2;
        if ( this )
        {
          v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          TweenAlpha__Begin(v37, _4__this->fields.wipeIconFadeOutTime, 0.0, 0LL);
          this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)v2->fields._bulletinBoardMst_5__2;
          if ( this )
          {
            p_ent_5__3 = &v2->fields._ent_5__3;
            this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                                 (Il2CppObject **)&v2->fields._ent_5__3,
                                                                                                 v2->fields.id,
                                                                                                 (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !*p_ent_5__3 )
                goto LABEL_39;
              if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)(*p_ent_5__3)->fields.script, 0LL) )
              {
                wipeIconFadeOutTime = _4__this->fields.wipeIconFadeOutTime;
                v42 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v39, v40);
                UnityEngine_WaitForSeconds___ctor(v42, wipeIconFadeOutTime, 0LL);
                v2->fields.__2__current = (Il2CppObject *)v42;
                p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
                sub_1B6406C(p__2__current, (int32_t)v42, v44, v45);
                *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
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
    sub_1B64324(this);
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
  v2->fields._bulletinBoardMst_5__2 = (struct EventBulletinBoardMaster_o *)Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._bulletinBoardMst_5__2, (int32_t)Master_object, v13, v14);
  if ( !_4__this )
    goto LABEL_39;
  if ( v2->fields.isSetUp )
    v17 = 216LL;
  else
    v17 = 212LL;
  v18 = *(float *)((char *)&_4__this->klass + v17);
  v19 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, v15, v16);
  UnityEngine_WaitForSeconds___ctor(v19, v18, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v19;
  v20 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(v20, (int32_t)v19, v21, v22);
  result = 1;
  *(_DWORD *)&v20[-1].fields.isMine = 1;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__51_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FA4BF & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventBulletinBoardComponent___c_TypeInfo, v1);
    byte_49FA4BF = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(TitleInfoEventBulletinBoardComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventBulletinBoardComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  if ( (byte_49FA4C0 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass57_1_o *)sub_1B640C8(
                                                                             &Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__,
                                                                             t);
    byte_49FA4C0 = 1;
  }
  if ( !t )
    sub_1B64324(this);
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
  TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *v5; // x19
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x8
  struct TitleInfoEventBulletinBoardComponent_o *v7; // x8
  int32_t eventId; // w20
  System_Action_o *callBack; // x19

  v5 = this;
  if ( (byte_49FA4C1 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *)sub_1B640C8(
                                                                             &AtlasManager_TypeInfo,
                                                                             assetData);
    byte_49FA4C1 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.bulletinBoardAssetData = assetData,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.bulletinBoardAssetData,
          (int32_t)assetData,
          (int32_t)method,
          v3),
        (v7 = v5->fields.__4__this) == 0LL) )
  {
    sub_1B64324(this);
  }
  eventId = v7->fields.eventId;
  callBack = v5->fields.callBack;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventUI_37544396(eventId, callBack, 1, 0LL);
}