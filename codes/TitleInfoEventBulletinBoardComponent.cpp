void TitleInfoEventBulletinBoardComponent___ctor(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  this->fields.rubyRelativePositionY = 12.0;
  *(_QWORD *)&this->fields.messageScrollSpeed = 0x42AA000040A00000LL;
  *(_OWORD *)&this->fields.wipeIconFadeOutStartTime = xmmword_E9CAE0;
  this->fields.wipeIconCrossFadeTime = 2.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventBulletinBoardComponent__AddRandomLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        float setPos,
        bool isNotRandom,
        bool isSetUp,
        const MethodInfo *method)
{
  Il2CppObject *baseLabel; // x22
  UnityEngine_GameObject_o *Component_object; // x0
  const MethodInfo *msg; // x1
  UnityEngine_GameObject_o *v12; // x24
  ScriptLineMessage_o *v13; // x22
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *switchInfo; // x8
  __int64 switchCount; // x9
  EventBulletinBoardEntity_BulletinBoardInfo_o *v16; // x8
  int32_t NextMessageId; // w23
  const MethodInfo *v18; // x2
  struct UISprite_o *baseIcon; // x8
  float mWidth; // s0
  const MethodInfo *v21; // x2
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v29; // x9
  __int64 klass_low; // x10
  intptr_t v31; // x8
  const MethodInfo *v32; // x3
  System_Collections_IEnumerator_o *v33; // x0
  struct UnityEngine_Coroutine_o *started; // x1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E76F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptLineMessage__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E76F = 1;
  }
  baseLabel = (Il2CppObject *)this->fields.baseLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNotRandom, isSetUp);
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                   baseLabel,
                                                   (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !Component_object )
    goto LABEL_28;
  v12 = Component_object;
  Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   Component_object,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScriptLineMessage___);
  if ( !Component_object )
    goto LABEL_28;
  v13 = (ScriptLineMessage_o *)Component_object;
  ScriptLineMessage__Init((ScriptLineMessage_o *)Component_object, 0);
  if ( isNotRandom )
  {
    switchInfo = this->fields.switchInfo;
    if ( switchInfo )
    {
      switchCount = this->fields.switchCount;
      if ( (unsigned int)switchCount >= LODWORD(switchInfo->max_length) )
        sub_2213CE4(Component_object);
      v16 = switchInfo->m_Items[switchCount];
      if ( v16 )
      {
        msg = (const MethodInfo *)v16->fields.msg;
        NextMessageId = -1;
        goto LABEL_17;
      }
    }
LABEL_28:
    sub_2213CDC(Component_object, msg);
  }
  NextMessageId = TitleInfoEventBulletinBoardComponent__GetNextMessageId(this, msg);
  Component_object = (UnityEngine_GameObject_o *)TitleInfoEventBulletinBoardComponent__GetMessage(
                                                   this,
                                                   NextMessageId,
                                                   v18);
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
  ((void (__fastcall *)(ScriptLineMessage_o *, const MethodInfo *, _QWORD, _QWORD, _QWORD, _QWORD, const MethodInfo *))v13->klass->vtable._7_SetText.methodPtr)(
    v13,
    msg,
    0,
    0,
    0,
    0,
    v13->klass->vtable._7_SetText.method);
  UnityEngine_GameObject__SetActive(v12, 1, 0);
  GameObjectExtensions__SetParent(v12, (UnityEngine_Component_o *)this->fields.scrollerPanel, 0);
  v41.fields.x = 0.0;
  v41.fields.z = 0.0;
  v41.fields.y = v13->fields.rubyLineHeight;
  GameObjectExtensions__SetLocalPosition(v12, v41, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  GameObjectExtensions__SetLocalPositionX(v12, setPos, 0);
  TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(this, v13, v21);
  Component_object = (UnityEngine_GameObject_o *)this->fields.labels;
  if ( !Component_object )
    goto LABEL_28;
  m_CachedPtr = Component_object->fields.m_CachedPtr;
  v29 = Method_System_Collections_Generic_List_ScriptLineMessage__Add__;
  ++HIDWORD(Component_object[1].klass);
  if ( !m_CachedPtr )
    goto LABEL_28;
  klass_low = SLODWORD(Component_object[1].klass);
  if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Component_object,
      (Il2CppObject *)v13,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    if ( isNotRandom )
      return;
  }
  else
  {
    v31 = m_CachedPtr + 8 * klass_low;
    LODWORD(Component_object[1].klass) = klass_low + 1;
    *(_QWORD *)(v31 + 32) = v13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)v13, v22, v23, v24, v25, v26, v27);
    if ( isNotRandom )
      return;
  }
  if ( this->fields.isDispWipeIcon )
  {
    v33 = TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(this, NextMessageId, isSetUp, v32);
    started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v33, 0);
    this->fields.coroutine = started;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.coroutine,
      (int32_t)started,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
}


void TitleInfoEventBulletinBoardComponent__AdjustLabelLocalPosition(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *lineMessage,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v4; // x19
  __int64 v5; // x2
  int m_CancellationTokenSource; // w8
  TitleInfoEventBulletinBoardComponent_o *v7; // x20
  unsigned int v8; // w23
  __int64 v9; // x24
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *v11; // x21
  TitleInfoEventBulletinBoardComponent_o *v12; // x21
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596E772 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E772 = 1;
  }
  if ( v4->fields.rubyRelativePositionY != 0.0 )
  {
    if ( !lineMessage )
      goto LABEL_22;
    this = (TitleInfoEventBulletinBoardComponent_o *)ScriptLineMessage__GetDispLabelArray(lineMessage, 0);
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
          sub_2213CE4(this);
        v9 = *((_QWORD *)&v7->fields.TerminalLocalPos.fields.x + (int)v8);
        if ( !v9 )
          break;
        v10 = *(UnityEngine_Object_o **)(v9 + 16);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, lineMessage, v5);
        this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v11 = *(UnityEngine_Object_o **)(v9 + 24);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, lineMessage, v5);
          this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Object__op_Equality(v11, 0, 0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            this = *(TitleInfoEventBulletinBoardComponent_o **)(v9 + 24);
            if ( !this )
              break;
            this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
            if ( !*(_QWORD *)(v9 + 16) )
              break;
            v12 = this;
            this = (TitleInfoEventBulletinBoardComponent_o *)UnityEngine_Component__get_transform(
                                                               *(UnityEngine_Component_o **)(v9 + 16),
                                                               0);
            if ( !this )
              break;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
            GameObjectExtensions__SetLocalPositionY(
              (UnityEngine_GameObject_o *)v12,
              localPosition.fields.y + v4->fields.rubyRelativePositionY,
              0);
          }
        }
        m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
        if ( (int)++v8 >= m_CancellationTokenSource )
          return;
      }
LABEL_22:
      sub_2213CDC(this, lineMessage);
    }
  }
}


void TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  __int128 v4; // q0
  __int128 v5; // q0
  const MethodInfo *v6; // x1
  __int128 v7; // [xsp+0h] [xbp-80h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v8; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v9; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596E775 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_596E775 = 1;
  }
  showStatusDic = this->fields.showStatusDic;
  memset(&v9, 0, 32);
  if ( !showStatusDic )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v7,
    showStatusDic,
    (const MethodInfo_3F8972C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v4 = v7;
  *(_QWORD *)&v7 = 0;
  *((_QWORD *)&v7 + 1) = &v9;
  *(_OWORD *)&v9.fields._dictionary = v4;
  v9.fields._current = v8;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v9,
            (const MethodInfo_41550C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    if ( !BYTE4(v9.fields._current.fields.key) )
    {
      System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
        &v9,
        (const MethodInfo_41551D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
      return;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v9,
    (const MethodInfo_41551D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v7,
    showStatusDic,
    (const MethodInfo_3F8972C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v5 = v7;
  *(_QWORD *)&v7 = 0;
  *((_QWORD *)&v7 + 1) = &v9;
  *(_OWORD *)&v9.fields._dictionary = v5;
  v9.fields._current = v8;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v9,
            (const MethodInfo_41550C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
    EventRewardSaveData__SetBulletInBoardMessageState(
      this->fields.eventId,
      (int32_t)v9.fields._current.fields.key,
      0,
      0);
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v9,
    (const MethodInfo_41551D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
LABEL_15:
    sub_2213CDC(showStatusDic, method);
  System_Collections_Generic_Dictionary_int__bool___Clear(
    showStatusDic,
    (const MethodInfo_3F894D0 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  TitleInfoEventBulletinBoardComponent__ResetShowStatus(this, v6);
}


void TitleInfoEventBulletinBoardComponent__DeleteLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        ScriptLineMessage_o *label,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596E76A & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E76A = 1;
  }
  if ( !label )
    sub_2213CDC(this, label);
  ScriptLineMessage__DeleteLabels(label, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)label, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


System_String_o *TitleInfoEventBulletinBoardComponent__GetEventUIAssetDataPath(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t targetEventId,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596E77B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6538/*"EventUI/Prefabs/{0}"*/);
    byte_596E77B = 1;
  }
  v6 = targetEventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v6);
  return System_String__Format((System_String_o *)StringLiteral_6538/*"EventUI/Prefabs/{0}"*/, v4, 0);
}


int32_t TitleInfoEventBulletinBoardComponent__GetFirstValidFollowId(
        EventBulletinBoardEntity_o *entity,
        const MethodInfo *method)
{
  EventBulletinBoardEntity_o *v2; // x19
  __int64 v3; // x1
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x10
  il2cpp_array_size_t max_length; // x9
  __int64 v6; // x8
  __int64 v7; // x9
  EventBulletinBoardEntity_BulletinBoardInfo_o **m_Items; // x10

  if ( entity )
  {
    v2 = entity;
    entity = (EventBulletinBoardEntity_o *)BasicHelper__IsNullOrEmpty(
                                             (System_Collections_ICollection_o *)entity->fields.script,
                                             0);
    if ( ((unsigned __int8)entity & 1) != 0 )
      goto LABEL_10;
    script = v2->fields.script;
    if ( !script )
      sub_2213CDC(entity, v3);
    max_length = script->max_length;
    if ( (int)max_length < 1 )
    {
LABEL_10:
      LODWORD(entity) = 0;
    }
    else
    {
      v6 = (unsigned int)max_length & ~((int)max_length >> 31);
      v7 = (unsigned int)script->max_length;
      m_Items = script->m_Items;
      while ( 1 )
      {
        if ( !v7 )
          sub_2213CE4(entity);
        if ( *m_Items )
        {
          entity = (EventBulletinBoardEntity_o *)(unsigned int)(*m_Items)->fields.followId;
          if ( (int)entity > 0 )
            break;
        }
        --v6;
        ++m_Items;
        --v7;
        if ( !v6 )
          goto LABEL_10;
      }
    }
  }
  return (int)entity;
}


System_String_o *TitleInfoEventBulletinBoardComponent__GetMessage(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x22
  System_String_o **p_monitor; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *monitor; // x1
  __int64 v17; // x0
  __int64 v18; // x1
  _DWORD *v19; // x8
  __int64 v20; // x8
  System_String_o *v21; // x19
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596E777 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    byte_596E777 = 1;
  }
  messages = this->fields.messages;
  memset(&v24, 0, sizeof(v24));
  if ( !messages )
    return 0;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)messages,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  do
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v24,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v6 )
    {
      v21 = 0;
      goto LABEL_17;
    }
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_2213CDC(v6, v7);
  }
  while ( LODWORD(v24.fields._current[1].klass) != id );
  p_monitor = (System_String_o **)&v24.fields._current[1].monitor;
  if ( System_String__IsNullOrEmpty((System_String_o *)v24.fields._current[1].monitor, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)current[2].monitor, 0) )
  {
    this->fields.isSwitchWipe = 1;
    monitor = (struct EventBulletinBoardEntity_BulletinBoardInfo_array *)current[2].monitor;
    this->fields.switchInfo = monitor;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.switchInfo,
      (int32_t)monitor,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v19 = current[2].monitor;
    if ( !v19 )
      sub_2213CDC(v17, v18);
    if ( !v19[6] )
      sub_2213CE4(v17);
    v20 = *((_QWORD *)v19 + 4);
    if ( !v20 )
      sub_2213CDC(v17, v18);
    p_monitor = (System_String_o **)(v20 + 32);
  }
  v21 = *p_monitor;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  return v21;
}


int32_t TitleInfoEventBulletinBoardComponent__GetNextMessageId(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x22
  void *showStatusDic; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_object__o *v13; // x21
  __int128 v14; // q0
  Il2CppObject *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  bool v18; // zf
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x23
  System_Func_object__bool__o *v20; // x24
  Il2CppObject *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_int__o *v33; // x23
  System_Collections_Generic_List_int__o **v34; // x22
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t FollowId; // w0
  __int64 v42; // x1
  System_Collections_Generic_List_int__o *v43; // x0
  struct System_Int32_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  System_Func_object__bool__o *v47; // x22
  int32_t eventId; // w0
  int32_t v49; // w0
  System_Func_object__bool__o *v50; // x22
  Il2CppObject *v51; // x0
  const MethodInfo *v52; // x3
  __int64 v54; // x22
  System_Func_object__bool__o *v55; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  __int64 v57; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x23
  TitleInfoEventBulletinBoardComponent___c_c *v59; // x0
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__59_4; // x23
  Il2CppObject *v62; // x24
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  TitleInfoEventBulletinBoardComponent___c_c *v71; // x0
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *v72; // x8
  System_Func_T1__T2__TResult__o *_9__59_5; // x24
  Il2CppObject *v74; // x25
  struct TitleInfoEventBulletinBoardComponent___c_StaticFields *v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  System_Func_object__bool__o *v82; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_List_object__o *v84; // x23
  WeightRate_int__o *v85; // x22
  int32_t Data; // w0
  _BOOL8 v87; // x0
  __int64 v88; // x1
  int32_t v89; // w0
  int32_t v90; // w0
  __int64 v91; // [xsp+8h] [xbp-C8h]
  __int128 v92; // [xsp+10h] [xbp-C0h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o v93; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v95; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_596E776 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
    sub_2213A60(&Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__get_Current__);
    sub_2213A60(&System_Func_EventBulletinBoardEntity__bool__TypeInfo);
    sub_2213A60(&System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
    sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__59_4__);
    sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__59_5__);
    sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__GetNextMessageId_b__0__);
    sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__GetNextMessageId_b__2__);
    sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__GetNextMessageId_b__3__);
    sub_2213A60(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_1__GetNextMessageId_b__1__);
    sub_2213A60(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_1_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_2__GetNextMessageId_b__6__);
    sub_2213A60(&TitleInfoEventBulletinBoardComponent___c__DisplayClass59_2_TypeInfo);
    sub_2213A60(&TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getData___91703016);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    sub_2213A60(&WeightRate_int__TypeInfo);
    byte_596E776 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  memset(&v95, 0, 32);
  v3 = sub_2213CCC(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_72;
  v91 = v3;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventBulletinBoardEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventBulletinBoardEntity___ctor__);
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_72;
  System_Collections_Generic_Dictionary_int__bool___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v92,
    (System_Collections_Generic_Dictionary_int__bool__o *)showStatusDic,
    (const MethodInfo_3F8972C *)Method_System_Collections_Generic_Dictionary_int__bool__GetEnumerator__);
  v14 = v92;
  *(_QWORD *)&v92 = 0;
  *((_QWORD *)&v92 + 1) = &v95;
  *(_OWORD *)&v95.fields._dictionary = v14;
  v95.fields._current = v93;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__bool___MoveNext(
            &v95,
            (const MethodInfo_41550C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__MoveNext__) )
  {
    v15 = (Il2CppObject *)sub_2213CCC(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_1_TypeInfo);
    System_Object___ctor(v15, 0);
    if ( !v15 )
      sub_2213CDC(v16, v17);
    v18 = ((__int64)v95.fields._current.fields.key & 0xFF00000000LL) == 0;
    v15[1].klass = (Il2CppClass *)v95.fields._current.fields.key;
    if ( v18 )
    {
      messages = this->fields.messages;
      v20 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v20,
        v15,
        Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_1__GetNextMessageId_b__1__,
        0);
      v21 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
              (System_Collections_Generic_IEnumerable_TSource__o *)messages,
              (System_Func_TSource__bool__o *)v20,
              (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
      v28 = v21;
      if ( !v13
        || (items = v13->fields._items,
            v30 = Method_System_Collections_Generic_List_EventBulletinBoardEntity__Add__,
            ++v13->fields._version,
            !items) )
      {
        sub_2213CDC(v21, v21);
      }
      size = v13->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          v21,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__bool___Dispose(
    &v95,
    (const MethodInfo_41551D4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__bool__Dispose__);
  v33 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v91 + 24) = v33;
  v34 = (System_Collections_Generic_List_int__o **)(v91 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v91 + 24), (int32_t)v33, v35, v36, v37, v38, v39, v40);
  if ( !v13 )
    goto LABEL_72;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v92,
    v13,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v94.fields._current = v93.fields.key;
  *(_OWORD *)&v94.fields._list = v92;
  *(_QWORD *)&v92 = 0;
  *((_QWORD *)&v92 + 1) = &v94;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__) )
  {
    if ( v94.fields._current )
    {
      FollowId = EventBulletinBoardEntity__GetFollowId((EventBulletinBoardEntity_o *)v94.fields._current, 0);
      v42 = (unsigned int)FollowId;
      if ( FollowId >= 1 )
      {
        v43 = *v34;
        if ( !*v34
          || (v44 = v43->fields._items,
              v45 = Method_System_Collections_Generic_List_int__Add__,
              ++v43->fields._version,
              !v44) )
        {
          sub_2213CDC(v43, v42);
        }
        v46 = v43->fields._size;
        if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v43,
            v42,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v43->fields._size = v46 + 1;
          v44->m_Items[v46] = v42;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  if ( this->fields.followMessageId >= 1 )
  {
    v47 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v47,
      (Il2CppObject *)v91,
      Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__GetNextMessageId_b__2__,
      0);
    System_Linq_Enumerable__FirstOrDefault_object__59254852(
      (System_Collections_Generic_IEnumerable_TSource__o *)v13,
      (System_Func_TSource__bool__o *)v47,
      (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
    *(_DWORD *)(v91 + 32) = this->fields.followMessageId;
    goto LABEL_27;
  }
  v54 = sub_2213CCC(TitleInfoEventBulletinBoardComponent___c__DisplayClass59_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v54, 0);
  v55 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v55,
    (Il2CppObject *)v91,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__GetNextMessageId_b__3__,
    0);
  v56 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__bool__o *)v55,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
  showStatusDic = System_Linq_Enumerable__ToList_object_(
                    v56,
                    (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  if ( !showStatusDic )
    goto LABEL_72;
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)showStatusDic;
  if ( *((int *)showStatusDic + 6) <= 0 )
  {
    v59 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
    if ( !*(&TitleInfoEventBulletinBoardComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventBulletinBoardComponent___c_TypeInfo, v5, v57);
      v59 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
    }
    static_fields = v59->static_fields;
    _9__59_4 = (System_Func_object__bool__o *)static_fields->__9__59_4;
    if ( !_9__59_4 )
    {
      if ( !*(&v59->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v59, v5, v57);
        static_fields = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
      }
      v62 = (Il2CppObject *)static_fields->__9;
      _9__59_4 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__59_4,
        v62,
        Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__59_4__,
        0);
      v63 = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
      v63->__9__59_4 = (struct System_Func_EventBulletinBoardEntity__bool__o *)_9__59_4;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v63->__9__59_4, (int32_t)_9__59_4, v64, v65, v66, v67, v68, v69);
    }
    v70 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v13,
            (System_Func_TSource__bool__o *)_9__59_4,
            (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
    v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_object_(
                                                                 v70,
                                                                 (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  }
  v71 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  if ( !*(&TitleInfoEventBulletinBoardComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventBulletinBoardComponent___c_TypeInfo, v5, v57);
    v71 = TitleInfoEventBulletinBoardComponent___c_TypeInfo;
  }
  v72 = v71->static_fields;
  _9__59_5 = (System_Func_T1__T2__TResult__o *)v72->__9__59_5;
  if ( !_9__59_5 )
  {
    if ( !*(&v71->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v71, v5, v57);
      v72 = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    }
    v74 = (Il2CppObject *)v72->__9;
    _9__59_5 = (System_Func_T1__T2__TResult__o *)sub_2213CCC(System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__TypeInfo);
    System_Func_object__object__object____ctor(
      _9__59_5,
      v74,
      Method_TitleInfoEventBulletinBoardComponent___c__GetNextMessageId_b__59_5__,
      0);
    v75 = TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields;
    v75->__9__59_5 = (struct System_Func_EventBulletinBoardEntity__EventBulletinBoardEntity__EventBulletinBoardEntity__o *)_9__59_5;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v75->__9__59_5, (int32_t)_9__59_5, v76, v77, v78, v79, v80, v81);
  }
  showStatusDic = System_Linq_Enumerable__Aggregate_object_(
                    v58,
                    (System_Func_TSource__TSource__TSource__o *)_9__59_5,
                    (const MethodInfo_38622C4 *)Method_System_Linq_Enumerable_Aggregate_EventBulletinBoardEntity___);
  if ( !showStatusDic )
    goto LABEL_72;
  if ( !v54 )
    goto LABEL_72;
  *(_DWORD *)(v54 + 16) = *((_DWORD *)showStatusDic + 8);
  v82 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v82,
    (Il2CppObject *)v54,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_2__GetNextMessageId_b__6__,
    0);
  v83 = System_Linq_Enumerable__Where_object_(
          v58,
          (System_Func_TSource__bool__o *)v82,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_EventBulletinBoardEntity___);
  v84 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v83,
                                                       (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_EventBulletinBoardEntity___);
  v85 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v85, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
  if ( !v84 )
    goto LABEL_72;
  if ( v84->fields._size >= 2 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v92,
      v84,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    *(_OWORD *)&v94.fields._list = v92;
    v94.fields._current = v93.fields.key;
    *(_QWORD *)&v92 = 0;
    *((_QWORD *)&v92 + 1) = &v94;
    while ( 1 )
    {
      v87 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v94,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v87 )
        break;
      if ( !v94.fields._current )
        sub_2213CDC(v87, v88);
      if ( !v85 )
        sub_2213CDC(v87, v88);
      WeightRate_int___setWeight(
        v85,
        HIDWORD(v94.fields._current[2].klass),
        (int32_t)v94.fields._current[1].klass,
        (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v94,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    if ( !v85 )
      goto LABEL_72;
    v89 = UnityEngine_Random__Range_83400680(0, v85->fields.totalweight, 0);
    Data = WeightRate_int___getData(v85, v89, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
  }
  else
  {
    showStatusDic = System_Collections_Generic_List_object___get_Item(
                      v84,
                      0,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Item__);
    if ( !showStatusDic )
      goto LABEL_72;
    Data = *((_DWORD *)showStatusDic + 4);
  }
  *(_DWORD *)(v91 + 32) = Data;
  if ( this->fields.isLastSeed )
  {
    showStatusDic = (void *)System_Linq_Enumerable__Count_object_(
                              (System_Collections_Generic_IEnumerable_TSource__o *)v84,
                              (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_EventBulletinBoardEntity___);
    if ( (int)showStatusDic >= 2 && *(_DWORD *)(v91 + 32) == this->fields.lastMessageId )
    {
      if ( v85 )
      {
        v90 = UnityEngine_Random__Range_83400680(0, v85->fields.totalweight, 0);
        *(_DWORD *)(v91 + 32) = WeightRate_int___getData_64624612(
                                  v85,
                                  v90,
                                  this->fields.lastMessageId,
                                  (const MethodInfo_3DA17E4 *)Method_WeightRate_int__getData___91703016);
        goto LABEL_27;
      }
LABEL_72:
      sub_2213CDC(showStatusDic, v5);
    }
  }
LABEL_27:
  if ( this->fields.isLastSeed )
  {
    eventId = this->fields.eventId;
    this->fields.isLastSeed = 0;
    EventRewardSaveData__SetBulletInBoardLastMessageId(eventId, 0, 0);
  }
  if ( v13->fields._size == 1 )
  {
    this->fields.isLastSeed = 1;
    v49 = *(_DWORD *)(v91 + 32);
    this->fields.lastMessageId = v49;
    EventRewardSaveData__SetBulletInBoardLastMessageId(v49, 0, 0);
  }
  v50 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventBulletinBoardEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v50,
    (Il2CppObject *)v91,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0__GetNextMessageId_b__0__,
    0);
  v51 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__bool__o *)v50,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_EventBulletinBoardEntity___);
  if ( v51 )
    LODWORD(v51) = EventBulletinBoardEntity__GetFollowId((EventBulletinBoardEntity_o *)v51, 0);
  this->fields.followMessageId = (int)v51;
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, *(_DWORD *)(v91 + 32), 1, 0);
  TitleInfoEventBulletinBoardComponent__SetShowStatus(this, *(_DWORD *)(v91 + 32), 1, v52);
  return *(_DWORD *)(v91 + 32);
}


int32_t TitleInfoEventBulletinBoardComponent__GetNextRandomIdx(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *randomQue; // x0
  System_Collections_Generic_List_T__o **p_randomQue; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *Item; // x0
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  int v8; // w21
  int32_t v9; // w22
  struct System_Object_array *items; // x9
  _QWORD *v11; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1

  if ( (byte_596E77D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    byte_596E77D = 1;
  }
  p_randomQue = (System_Collections_Generic_List_T__o **)&this->fields.randomQue;
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    System_Collections_Generic_List_int___RemoveAt(
      randomQue,
      0,
      (const MethodInfo_44689B4 *)Method_System_Collections_Generic_List_int__RemoveAt__);
    Item = *p_randomQue;
    if ( !*p_randomQue )
      goto LABEL_16;
    if ( Item->fields._size <= 1 )
    {
      Item = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_int___get_Item(
                                                       (System_Collections_Generic_List_int__o *)Item,
                                                       0,
                                                       (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
      messages = this->fields.messages;
      if ( !messages )
        goto LABEL_16;
      v8 = (int)Item;
      v9 = 0;
      while ( v9 < messages->fields._size )
      {
        if ( v8 != v9 )
        {
          Item = *p_randomQue;
          if ( !*p_randomQue )
            goto LABEL_16;
          items = Item->fields._items;
          v11 = Method_System_Collections_Generic_List_int__Add__;
          ++Item->fields._version;
          if ( !items )
            goto LABEL_16;
          size = Item->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Item,
              v9,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
            messages = this->fields.messages;
          }
          else
          {
            Item->fields._size = size + 1;
            *((_DWORD *)items->m_Items + size) = v9;
          }
        }
        ++v9;
        if ( !messages )
          goto LABEL_16;
      }
      TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        *p_randomQue,
        1,
        (const MethodInfo_39B3FFC *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    }
  }
  else
  {
    v13 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.randomQue = v13;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.randomQue, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v20);
  }
  Item = *p_randomQue;
  if ( !*p_randomQue )
LABEL_16:
    sub_2213CDC(Item, v5);
  return System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)Item,
           0,
           (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
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
  UnityEngine_GameObject_o *v11; // x23
  UnityEngine_Component_o *bulletinBg; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct UIPanel_o *scrollerPanel; // x8
  UISprite_o *baseIcon; // x23
  System_String_o *baseIconName; // x24
  AtlasManager_c *v18; // x0
  float v19; // s0
  int v20; // w8
  __int64 v21; // x2
  UISprite_o *wipeIconFrame; // x23
  System_String_o *wipeIconFrameName; // x24
  System_Collections_Generic_Dictionary_int__bool__c *v24; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t BulletInBoardLastMessageId; // w8
  const MethodInfo *v33; // x2
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596E76B & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    byte_596E76B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v34 = TitleInfoEventBulletinBoardComponent__localPosByDispType(this, dispType, v10);
  GameObjectExtensions__SetLocalPosition(gameObject, v34, 0);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  scrollerPanel = this->fields.scrollerPanel;
  if ( !scrollerPanel )
    goto LABEL_18;
  baseIcon = this->fields.baseIcon;
  baseIconName = this->fields.baseIconName;
  v18 = AtlasManager_TypeInfo;
  v19 = scrollerPanel->fields.mClipRange.fields.z * 0.5;
  v20 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
  this->fields.left = -v19;
  this->fields.right = v19;
  if ( !v20 )
    j_il2cpp_runtime_class_init_0(v18, v13, v14);
  AtlasManager__SetBanner(baseIcon, baseIconName, 0);
  AtlasManager__SetBanner(this->fields.bulletinBg, this->fields.bulletinBgName, 0);
  AtlasManager__SetBanner(this->fields.bulletinTitle, this->fields.bulletinTitleName, 0);
  if ( this->fields.isDispWipeIcon )
  {
    wipeIconFrame = this->fields.wipeIconFrame;
    wipeIconFrameName = this->fields.wipeIconFrameName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v21);
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
    sub_2213CDC(bulletinBg, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bulletinBg, this->fields.isDispBaseIcon, 0);
  v24 = System_Collections_Generic_Dictionary_int__bool__TypeInfo;
  this->fields.currentDispType = dispType;
  this->fields.eventId = eventId;
  v25 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_2213CCC(v24);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v25,
    (const MethodInfo_3F88990 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.showStatusDic = v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.showStatusDic,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  BulletInBoardLastMessageId = EventRewardSaveData__GetBulletInBoardLastMessageId(this->fields.eventId, 0);
  this->fields.lastMessageId = BulletInBoardLastMessageId;
  this->fields.isLastSeed = BulletInBoardLastMessageId > 0;
  TitleInfoEventBulletinBoardComponent__LoadAssetData(this, callBack, v33);
}


System_Collections_Generic_List_T__o *TitleInfoEventBulletinBoardComponent__ListShuffle___Il2CppFullySharedGenericType_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_39B40D8 *method)
{
  const MethodInfo_39B40D8_RGCTXs *rgctx_data; // x21
  size_t actualSize; // x2
  _QWORD *v8; // x22
  void *v9; // x0
  __int64 v10; // x1
  int32_t v11; // w0
  int32_t v12; // w21
  int32_t v13; // w26
  const MethodInfo_39B40D8_RGCTXs *v14; // x8
  MethodInfo *_2_System_Collections_Generic_List_T__get_Item; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  int32_t v18; // w0
  const MethodInfo_39B40D8_RGCTXs *v19; // x8
  int32_t v20; // w28
  MethodInfo *v21; // x1
  Il2CppMethodPointer v22; // x0
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  const MethodInfo_39B40D8_RGCTXs *v24; // x8
  _QWORD *v25; // x4
  MethodInfo *_4_System_Collections_Generic_List_T__set_Item; // x1
  Il2CppMethodPointer v27; // x0
  void (__fastcall *v28)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int32_t **); // x8
  const MethodInfo_39B40D8_RGCTXs *v29; // x8
  _QWORD *v30; // x4
  MethodInfo *v31; // x1
  Il2CppMethodPointer v32; // x0
  void (__fastcall *v33)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int32_t **); // x8
  __int64 v35; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 StatusReg; // [xsp+8h] [xbp-38h]
  int32_t v37; // [xsp+14h] [xbp-2Ch]
  size_t v38; // [xsp+18h] [xbp-28h]
  int32_t *v39; // [xsp+20h] [xbp-20h] BYREF
  _QWORD *v40; // [xsp+28h] [xbp-18h]
  int32_t v41; // [xsp+34h] [xbp-Ch] BYREF
  __int64 v42; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v42 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964();
    rgctx_data = method->rgctx_data;
  }
  actualSize = rgctx_data->_3_T->_2.actualSize;
  v8 = (__int64 *)((char *)&v35 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v38 = actualSize;
  v9 = memset(v8, 0, actualSize);
  if ( !list )
    sub_2213CDC(v9, v10);
  v11 = ((__int64 (__fastcall *)(System_Collections_Generic_List_T__o *))rgctx_data->_1_System_Collections_Generic_List_T__get_Count->methodPointer)(list);
  v37 = withoutFirst;
  if ( v11 > v37 )
  {
    v12 = v37;
    v13 = v11;
    do
    {
      v14 = method->rgctx_data;
      v41 = v12;
      _2_System_Collections_Generic_List_T__get_Item = v14->_2_System_Collections_Generic_List_T__get_Item;
      methodPointer = _2_System_Collections_Generic_List_T__get_Item->methodPointer;
      invoker_method = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_2_System_Collections_Generic_List_T__get_Item->invoker_method;
      v39 = &v41;
      v40 = v8;
      invoker_method(methodPointer, _2_System_Collections_Generic_List_T__get_Item, list, &v39, v8);
      memcpy(v8, v8, v38);
      v18 = UnityEngine_Random__Range_83400680(v37, v13, 0);
      v19 = method->rgctx_data;
      v20 = v18;
      v41 = v18;
      v21 = v19->_2_System_Collections_Generic_List_T__get_Item;
      v22 = v21->methodPointer;
      v23 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v21->invoker_method;
      v39 = &v41;
      v40 = v8;
      v23(v22, v21, list, &v39, v8);
      v24 = method->rgctx_data;
      v25 = v8;
      if ( (v24->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v25 = (_QWORD *)*v8;
      _4_System_Collections_Generic_List_T__set_Item = v24->_4_System_Collections_Generic_List_T__set_Item;
      v41 = v12;
      v27 = _4_System_Collections_Generic_List_T__set_Item->methodPointer;
      v28 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int32_t **))_4_System_Collections_Generic_List_T__set_Item->invoker_method;
      v39 = &v41;
      v40 = v25;
      v28(v27, _4_System_Collections_Generic_List_T__set_Item, list, &v39);
      memcpy(v8, v8, v38);
      v29 = method->rgctx_data;
      v30 = v8;
      v31 = v29->_4_System_Collections_Generic_List_T__set_Item;
      v32 = v31->methodPointer;
      if ( (v29->_3_T->_1.byval_arg.bits & 0x80000000) == 0 )
        v30 = (_QWORD *)*v8;
      v33 = (void (__fastcall *)(Il2CppMethodPointer, MethodInfo *, System_Collections_Generic_List_T__o *, int32_t **))v31->invoker_method;
      v41 = v20;
      v39 = &v41;
      v40 = v30;
      v33(v32, v31, list, &v39);
      ++v12;
    }
    while ( v13 != v12 );
  }
  return list;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_T__o *TitleInfoEventBulletinBoardComponent__ListShuffle_int_(
        System_Collections_Generic_List_T__o *list,
        bool withoutFirst,
        const MethodInfo_39B3FFC *method)
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
    list = (System_Collections_Generic_List_T__o *)sub_224B964();
  if ( !v5 )
    sub_2213CDC(list, withoutFirst);
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
               (const MethodInfo_4466F78 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      v10 = UnityEngine_Random__Range_83400680(v7, size, 0);
      v11 = System_Collections_Generic_List_int___get_Item(
              v5,
              v10,
              (const MethodInfo_4466F78 *)method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
      System_Collections_Generic_List_int___set_Item(
        v5,
        v8,
        v11,
        (const MethodInfo_4466FCC *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
      System_Collections_Generic_List_int___set_Item(
        v5,
        v10,
        Item,
        (const MethodInfo_4466FCC *)method->rgctx_data->_4_System_Collections_Generic_List_T__set_Item);
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
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  AssetLoader_LoadEndDataHandler_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2

  if ( (byte_596E778 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0__LoadAssetData_b__0__);
    sub_2213A60(&TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0_TypeInfo);
    sub_2213A60(&StringLiteral_6532/*"EventUI/Prefabs/"*/);
    byte_596E778 = 1;
  }
  v5 = sub_2213CCC(TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callBack;
  v14 = v5 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callBack, v15, v16, v17, v18, v19, v20);
  v21 = System_Int32__ToString((int)this + 256, 0);
  v22 = System_String__Concat_75651716((System_String_o *)StringLiteral_6532/*"EventUI/Prefabs/"*/, v21, 0);
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0__LoadAssetData_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v24, v25);
  if ( !AssetManager__loadAssetStorage(v22, v23, 1, 0, 0) )
  {
    if ( *(_QWORD *)v14 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
  }
}


void TitleInfoEventBulletinBoardComponent__OnDestroy(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *size; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Coroutine_o *coroutine; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Collections_Generic_List_ScriptLineMessage__o *labels; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *current; // x20
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x2
  __int64 v22; // x0
  __int64 v23; // x1
  struct System_Collections_Generic_List_ScriptLineMessage__o *v24; // x8
  int v25; // w9
  struct System_Collections_Generic_List_int__o *randomQue; // x8
  int v27; // w9
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  const MethodInfo *v29; // x2
  const MethodInfo *v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596E779 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptLineMessage__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E779 = 1;
  }
  coroutine = this->fields.coroutine;
  memset(&v31, 0, sizeof(v31));
  if ( coroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_83445360((UnityEngine_MonoBehaviour_o *)this, coroutine, 0);
    this->fields.coroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.coroutine, 0, v10, v11, v12, v13, v14, v15);
  }
  labels = this->fields.labels;
  if ( labels )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      (System_Collections_Generic_List_object__o *)labels,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__) )
    {
      current = v31.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v20 )
        TitleInfoEventBulletinBoardComponent__DeleteLabel(
          (TitleInfoEventBulletinBoardComponent_o *)v20,
          (ScriptLineMessage_o *)current,
          v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    v24 = this->fields.labels;
    if ( !v24 )
      sub_2213CDC(v22, v23);
    size = (System_String_o *)(unsigned int)v24->fields._size;
    v25 = v24->fields._version + 1;
    v24->fields._size = 0;
    v24->fields._version = v25;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)v24->fields._items, 0, (int32_t)size, 0);
  }
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    v27 = randomQue->fields._version + 1;
    randomQue->fields._size = 0;
    randomQue->fields._version = v27;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( showStatusDic )
    System_Collections_Generic_Dictionary_int__bool___Clear(
      showStatusDic,
      (const MethodInfo_3F894D0 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  this->fields.switchInfo = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.switchInfo, 0, size, v3, v4, v5, v6, v7);
  TitleInfoEventBulletinBoardComponent__ReleaseEventUIAssetData(this, this->fields.eventId, v29);
  TitleInfoEventBulletinBoardComponent__ReleaseLocalAtlas(this, v30);
}


void TitleInfoEventBulletinBoardComponent__ReleaseEventUIAssetData(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t releaseEventId,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *EventUIAssetDataPath; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v4 = this;
  if ( (byte_596E77A & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_2213A60(&AssetManager_TypeInfo);
    byte_596E77A = 1;
  }
  if ( v4->fields.bulletinBoardAssetData )
  {
    EventUIAssetDataPath = TitleInfoEventBulletinBoardComponent__GetEventUIAssetDataPath(this, releaseEventId, method);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
    AssetManager__releaseAssetStorage(EventUIAssetDataPath, 0);
    v4->fields.bulletinBoardAssetData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.bulletinBoardAssetData, 0, v8, v9, v10, v11, v12, v13);
  }
}


void TitleInfoEventBulletinBoardComponent__ReleaseLocalAtlas(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseIcon; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UISprite_o *v7; // x0
  UnityEngine_Object_o *bulletinBg; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *bulletinTitle; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *wipeIcon; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *wipeIcon2; // x20
  __int64 v15; // x2
  UnityEngine_Object_o *wipeIconFrame; // x20

  if ( (byte_596E77C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E77C = 1;
  }
  baseIcon = (UnityEngine_Object_o *)this->fields.baseIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(baseIcon, 0, 0) )
  {
    v7 = this->fields.baseIcon;
    if ( !v7 )
      goto LABEL_34;
    UISprite__set_atlas(v7, 0, 0);
  }
  bulletinBg = (UnityEngine_Object_o *)this->fields.bulletinBg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(bulletinBg, 0, 0) )
  {
    v7 = this->fields.bulletinBg;
    if ( !v7 )
      goto LABEL_34;
    UISprite__set_atlas(v7, 0, 0);
  }
  bulletinTitle = (UnityEngine_Object_o *)this->fields.bulletinTitle;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(bulletinTitle, 0, 0) )
  {
    v7 = this->fields.bulletinTitle;
    if ( !v7 )
      goto LABEL_34;
    UISprite__set_atlas(v7, 0, 0);
  }
  wipeIcon = (UnityEngine_Object_o *)this->fields.wipeIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
  if ( UnityEngine_Object__op_Inequality(wipeIcon, 0, 0) )
  {
    v7 = this->fields.wipeIcon;
    if ( !v7 )
      goto LABEL_34;
    UISprite__set_atlas(v7, 0, 0);
  }
  wipeIcon2 = (UnityEngine_Object_o *)this->fields.wipeIcon2;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v13);
  if ( UnityEngine_Object__op_Inequality(wipeIcon2, 0, 0) )
  {
    v7 = this->fields.wipeIcon2;
    if ( !v7 )
      goto LABEL_34;
    UISprite__set_atlas(v7, 0, 0);
  }
  wipeIconFrame = (UnityEngine_Object_o *)this->fields.wipeIconFrame;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v15);
  if ( UnityEngine_Object__op_Inequality(wipeIconFrame, 0, 0) )
  {
    v7 = this->fields.wipeIconFrame;
    if ( v7 )
    {
      UISprite__set_atlas(v7, 0, 0);
      return;
    }
LABEL_34:
    sub_2213CDC(v7, v5);
  }
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
  if ( (byte_596E77E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
    byte_596E77E = 1;
  }
  messages = v2->fields.messages;
  if ( !messages )
LABEL_12:
    sub_2213CDC(this, method);
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
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
    (const MethodInfo_39B3FFC *)Method_TitleInfoEventBulletinBoardComponent_ListShuffle_int___);
}


void TitleInfoEventBulletinBoardComponent__ResetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x24
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v11; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_int__bool__o *v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596E774 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    byte_596E774 = 1;
  }
  messages = this->fields.messages;
  memset(&v16, 0, sizeof(v16));
  if ( !messages )
    sub_2213CDC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)messages,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
  v16 = v15;
  v15.fields._list = 0;
  *(_QWORD *)&v15.fields._index = &v16;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v16,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    if ( !v4 )
      break;
    current = v16.fields._current;
    if ( !v16.fields._current )
      sub_2213CDC(v4, v5);
    if ( EventRewardSaveData__GetBulletInBoardMessageState(
           this->fields.eventId,
           (int32_t)v16.fields._current[1].klass,
           0) )
    {
      TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 1, v8);
    }
    showStatusDic = this->fields.showStatusDic;
    if ( !showStatusDic )
      sub_2213CDC(0, v7);
    if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
            showStatusDic,
            (int32_t)current[1].klass,
            (const MethodInfo_3F8953C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      goto LABEL_14;
    v11 = this->fields.showStatusDic;
    if ( !v11 )
      sub_2213CDC(0, v10);
    if ( System_Collections_Generic_Dictionary_int__bool___get_Item(
           v11,
           (int32_t)current[1].klass,
           (const MethodInfo_3F892A0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__) )
    {
LABEL_14:
      v13 = this->fields.showStatusDic;
      if ( !v13 )
        sub_2213CDC(0, v10);
      if ( System_Collections_Generic_Dictionary_int__bool___ContainsKey(
             v13,
             (int32_t)current[1].klass,
             (const MethodInfo_3F8953C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
      {
        continue;
      }
    }
    TitleInfoEventBulletinBoardComponent__SetShowStatus(this, (int32_t)current[1].klass, 0, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
  TitleInfoEventBulletinBoardComponent__CheckAllShowStatus(this, v14);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventBulletinBoardComponent__SetShowStatus(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isShow,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *showStatusDic; // x0
  bool v8; // w8

  if ( (byte_596E773 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    byte_596E773 = 1;
  }
  showStatusDic = this->fields.showStatusDic;
  if ( !showStatusDic )
    goto LABEL_10;
  v8 = System_Collections_Generic_Dictionary_int__bool___ContainsKey(
         showStatusDic,
         id,
         (const MethodInfo_3F8953C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
  showStatusDic = this->fields.showStatusDic;
  if ( !v8 )
  {
    if ( showStatusDic )
    {
      System_Collections_Generic_Dictionary_int__bool___Add(
        showStatusDic,
        id,
        isShow,
        (const MethodInfo_3F89344 *)Method_System_Collections_Generic_Dictionary_int__bool__Add__);
      goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(showStatusDic, *(_QWORD *)&id);
  }
  if ( !showStatusDic )
    goto LABEL_10;
  System_Collections_Generic_Dictionary_int__bool___set_Item(
    showStatusDic,
    id,
    isShow,
    (const MethodInfo_3F89330 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
LABEL_9:
  EventRewardSaveData__SetBulletInBoardMessageState(this->fields.eventId, id, isShow, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventBulletinBoardComponent__SetUp(
        TitleInfoEventBulletinBoardComponent_o *this,
        System_Collections_Generic_List_EventBulletinBoardEntity__o *boardMessages,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v11; // x1
  UnityEngine_Coroutine_o *coroutine; // x1
  UILabel_o *svtNameLabel; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x3
  __int64 v18; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_object__o *v19; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596E76D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E76D = 1;
  }
  memset(&v20, 0, sizeof(v20));
  this->fields.messages = boardMessages;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.messages,
    (int32_t)boardMessages,
    *(System_String_o **)&eventId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.eventId = eventId;
  TitleInfoEventBulletinBoardComponent__resetLabelList(this, v11);
  coroutine = this->fields.coroutine;
  if ( coroutine )
    UnityEngine_MonoBehaviour__StopCoroutine_83445360((UnityEngine_MonoBehaviour_o *)this, coroutine, 0);
  svtNameLabel = this->fields.svtNameLabel;
  if ( !svtNameLabel )
    goto LABEL_20;
  UILabel__set_text(svtNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  svtNameLabel = (UILabel_o *)this->fields.wipeIcon;
  if ( !svtNameLabel )
    goto LABEL_20;
  UISprite__set_atlas((UISprite_o *)svtNameLabel, 0, 0);
  svtNameLabel = (UILabel_o *)this->fields.wipeIcon2;
  if ( !svtNameLabel )
    goto LABEL_20;
  UISprite__set_atlas((UISprite_o *)svtNameLabel, 0, 0);
  if ( boardMessages )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      (System_Collections_Generic_List_object__o *)boardMessages,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventBulletinBoardEntity__GetEnumerator__);
    v18 = 0;
    v19 = &v20;
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__MoveNext__);
      if ( !v14 )
        break;
      if ( !v20.fields._current )
        sub_2213CDC(v14, v15);
      EventRewardSaveData__SetBulletInBoardMessageState(
        eventId,
        *(_DWORD *)((char *)&v20.fields._current->klass + (unsigned __int64)&word_10),
        0,
        0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventBulletinBoardEntity__Dispose__);
    this->fields.isLastSeed = 0;
  }
  svtNameLabel = (UILabel_o *)this->fields.showStatusDic;
  if ( !svtNameLabel )
LABEL_20:
    sub_2213CDC(svtNameLabel, coroutine);
  System_Collections_Generic_Dictionary_int__bool___Clear(
    (System_Collections_Generic_Dictionary_int__bool__o *)svtNameLabel,
    (const MethodInfo_3F894D0 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  this->fields.followMessageId = 0;
  TitleInfoEventBulletinBoardComponent__ResetShowStatus(this, v16);
  if ( boardMessages && boardMessages->fields._size >= 1 )
    TitleInfoEventBulletinBoardComponent__AddRandomLabel(
      this,
      this->fields.right + this->fields.setUpSpaceBetweenMessages,
      0,
      1,
      v17);
}


System_Collections_IEnumerator_o *TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel(
        TitleInfoEventBulletinBoardComponent_o *this,
        int32_t id,
        bool isSetUp,
        const MethodInfo *method)
{
  bool v7; // w22
  __int64 v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_596E770 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_TypeInfo);
    byte_596E770 = 1;
  }
  v7 = isSetUp;
  v8 = sub_2213CCC(TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 40), (int32_t)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 48) = id;
  result = (System_Collections_IEnumerator_o *)v8;
  *(_BYTE *)(v8 + 32) = v7;
  return result;
}


void TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(
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
  int32_t eventId; // w20
  UISprite_o *v11; // x21
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x22
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v19; // x8
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_596E771 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    this = (TitleInfoEventBulletinBoardComponent_o *)sub_2213A60(&StringLiteral_20285/*"face_{0:D3}"*/);
    byte_596E771 = 1;
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
  v6 = v2->fields.switchInfo;
  v7 = 176;
  if ( (switchCount & 1) == 0 )
    v7 = 168;
  if ( !v6 )
    goto LABEL_24;
  v8 = v2->fields.switchCount;
  if ( (unsigned int)v8 >= LODWORD(v6->max_length) )
LABEL_25:
    sub_2213CE4(this);
  v9 = v6->m_Items[v8];
  if ( !v9 )
    goto LABEL_24;
  eventId = v2->fields.eventId;
  v11 = *(UISprite_o **)((char *)&v2->klass + v7);
  iconId = v9->fields.iconId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &iconId);
  v15 = System_String__Format((System_String_o *)StringLiteral_20285/*"face_{0:D3}"*/, v12, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
  AtlasManager__SetEventUI_47569484(eventId, v11, v15, 0);
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
    sub_2213CDC(this, method);
  }
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon2;
  if ( !this )
    goto LABEL_24;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  TweenAlpha__Begin(v16, v2->fields.wipeIconCrossFadeTime, 0.0, 0);
  this = (TitleInfoEventBulletinBoardComponent_o *)v2->fields.wipeIcon;
  if ( !this )
    goto LABEL_24;
LABEL_20:
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (TitleInfoEventBulletinBoardComponent_o *)TweenAlpha__Begin(v18, v2->fields.wipeIconCrossFadeTime, 1.0, 0);
  v19 = v2->fields.switchInfo;
  if ( !v19 )
    goto LABEL_24;
  if ( v2->fields.switchCount >= LODWORD(v19->max_length) - 1 )
  {
    v2->fields.isSwitchWipe = 0;
    v2->fields.switchCount = 0;
  }
}


void TitleInfoEventBulletinBoardComponent__Update(
        TitleInfoEventBulletinBoardComponent_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_EventBulletinBoardEntity__o *messages; // x8
  float v6; // s0
  char v7; // w22
  float v8; // s9
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x20
  UnityEngine_GameObject_o *gameObject; // x21
  float v13; // s0
  UnityEngine_GameObject_o *v14; // x0
  float LocalPositionX; // s8
  const MethodInfo *v16; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v18; // x2
  float right; // s0
  const MethodInfo *v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596E769 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventBulletinBoardEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_596E769 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  if ( MissionNotifyManager__IsPause(Instance, 0) )
    return;
  Instance = (MissionNotifyManager_o *)this->fields.labels;
  if ( !Instance )
    return;
  messages = this->fields.messages;
  if ( !messages )
    goto LABEL_24;
  if ( messages->fields._size < 1 )
    return;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
  v6 = 0.0;
  v7 = 0;
  v22 = v21;
  v21.fields._list = 0;
  *(_QWORD *)&v21.fields._index = &v22;
LABEL_9:
  v8 = v6;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v22,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
    if ( !v9 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_2213CDC(v9, v10);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22.fields._current, 0);
    v13 = -(float)(this->fields.messageScrollSpeed * UnityEngine_Time__get_deltaTime(0));
    GameObjectExtensions__AddLocalPositionX(gameObject, v13, 0);
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
    LocalPositionX = GameObjectExtensions__GetLocalPositionX(v14, 0);
    v6 = LocalPositionX + ScriptLineMessage__GetPrintedSize((ScriptLineMessage_o *)current, 0).fields.x;
    v7 |= v6 < this->fields.left;
    if ( v6 > v8 )
      goto LABEL_9;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
  if ( (v7 & 1) == 0 )
    goto LABEL_18;
  Instance = (MissionNotifyManager_o *)this->fields.labels;
  if ( !Instance
    || (Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 0,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ScriptLineMessage__get_Item__),
        TitleInfoEventBulletinBoardComponent__DeleteLabel(
          (TitleInfoEventBulletinBoardComponent_o *)Item,
          (ScriptLineMessage_o *)Item,
          v18),
        (Instance = (MissionNotifyManager_o *)this->fields.labels) == 0) )
  {
LABEL_24:
    sub_2213CDC(Instance, v4);
  }
  System_Collections_Generic_List_object___RemoveAt(
    (System_Collections_Generic_List_object__o *)Instance,
    0,
    (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_ScriptLineMessage__RemoveAt__);
LABEL_18:
  right = this->fields.right;
  if ( v8 < right )
  {
    if ( this->fields.isSwitchWipe )
    {
      ++this->fields.switchCount;
      TitleInfoEventBulletinBoardComponent__AddRandomLabel(this, right, 1, 0, v16);
      TitleInfoEventBulletinBoardComponent__SwitchWipeIconAndSvtNameLabel(this, v20);
    }
    else
    {
      TitleInfoEventBulletinBoardComponent__AddRandomLabel(this, v8 + this->fields.spaceBetweenMessages, 0, 0, v16);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596E76C & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    byte_596E76C = 1;
  }
  if ( this->fields.enableFSPos )
  {
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, *(_QWORD *)&dispType, method);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_List_int__o *randomQue; // x8
  int v20; // w9
  __int64 v21; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v22; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596E76E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptLineMessage__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ScriptLineMessage__TypeInfo);
    byte_596E76E = 1;
  }
  memset(&v23, 0, sizeof(v23));
  p_labels = &this->fields.labels;
  labels = this->fields.labels;
  if ( labels )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)labels,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ScriptLineMessage__GetEnumerator__);
    v21 = 0;
    v22 = &v23;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v23,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__MoveNext__);
      if ( !v5 )
        break;
      TitleInfoEventBulletinBoardComponent__DeleteLabel(
        (TitleInfoEventBulletinBoardComponent_o *)v5,
        (ScriptLineMessage_o *)v23.fields._current,
        v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ScriptLineMessage__Dispose__);
    v9 = *p_labels;
    if ( !*p_labels )
      sub_2213CDC(v7, v8);
    size = v9->fields._size;
    v11 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
  }
  else
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ScriptLineMessage__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ScriptLineMessage___ctor__);
    *p_labels = (struct System_Collections_Generic_List_ScriptLineMessage__o *)v12;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.labels, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  }
  randomQue = this->fields.randomQue;
  if ( randomQue )
  {
    v20 = randomQue->fields._version + 1;
    randomQue->fields._size = 0;
    randomQue->fields._version = v20;
    TitleInfoEventBulletinBoardComponent__ResetRandomQueue(this, v8);
  }
}


void TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53___ctor(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53__MoveNext(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *v3; // x19
  int32_t _1__state; // w8
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x23
  Il2CppObject *Master_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  float *p_setUpWipeIconFadeOutStartTime; // x8
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  struct EventBulletinBoardEntity_o *v16; // x8
  System_String_o *name; // x1
  struct EventBulletinBoardEntity_o *ent_5__3; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *script; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v20; // x8
  int32_t eventId; // w20
  UISprite_o *wipeIcon; // x21
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_String_o *v26; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventBulletinBoardEntity_o *v28; // x8
  struct EventBulletinBoardEntity_BulletinBoardInfo_array *v29; // x8
  EventBulletinBoardEntity_BulletinBoardInfo_o *v30; // x8
  bool result; // w0
  float v32; // s8
  UnityEngine_WaitForSeconds_o *v33; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  float wipeIconFadeOutTime; // s8
  UnityEngine_WaitForSeconds_o *v42; // x20
  MissionNaviTransitionBoardItem_o *v43; // x19
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t iconId; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_596E784 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventBulletinBoardMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_20285/*"face_{0:D3}"*/);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E784 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_40;
    ent_5__3 = v3->fields._ent_5__3;
    if ( !ent_5__3 )
      goto LABEL_40;
    script = ent_5__3->fields.script;
    if ( !script )
      goto LABEL_40;
    if ( !LODWORD(script->max_length) )
      goto LABEL_41;
    v20 = script->m_Items[0];
    if ( !v20 )
      goto LABEL_40;
    eventId = _4__this->fields.eventId;
    wipeIcon = _4__this->fields.wipeIcon;
    iconId = v20->fields.iconId;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &iconId);
    v26 = System_String__Format((System_String_o *)StringLiteral_20285/*"face_{0:D3}"*/, v23, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24, v25);
    AtlasManager__SetEventUI_47569484(eventId, wipeIcon, v26, 0);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *)_4__this->fields.wipeIcon;
    if ( !this )
      goto LABEL_40;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *)TweenAlpha__Begin(
                                                                                         gameObject,
                                                                                         _4__this->fields.wipeIconFadeInTime,
                                                                                         1.0,
                                                                                         0);
    v28 = v3->fields._ent_5__3;
    if ( !v28 )
      goto LABEL_40;
    v29 = v28->fields.script;
    if ( !v29 )
      goto LABEL_40;
    if ( !LODWORD(v29->max_length) )
LABEL_41:
      sub_2213CE4(this);
    v30 = v29->m_Items[0];
    if ( !v30 )
      goto LABEL_40;
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *)_4__this->fields.svtNameLabel;
    if ( !this )
      goto LABEL_40;
    name = v30->fields.name;
    goto LABEL_34;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventBulletinBoardMaster___);
      v3->fields._bulletinBoardMst_5__2 = (struct EventBulletinBoardMaster_o *)Master_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v3->fields._bulletinBoardMst_5__2,
        (int32_t)Master_object,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      if ( v3->fields.isSetUp )
      {
        if ( _4__this )
        {
          p_setUpWipeIconFadeOutStartTime = &_4__this->fields.setUpWipeIconFadeOutStartTime;
LABEL_38:
          v32 = *p_setUpWipeIconFadeOutStartTime;
          v33 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v33, v32, 0);
          v3->fields.__2__current = (Il2CppObject *)v33;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
          sub_2213A04(p__2__current, (int32_t)v33, v35, v36, v37, v38, v39, v40);
          result = 1;
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return result;
        }
      }
      else if ( _4__this )
      {
        p_setUpWipeIconFadeOutStartTime = &_4__this->fields.wipeIconFadeOutStartTime;
        goto LABEL_38;
      }
LABEL_40:
      sub_2213CDC(this, method);
    }
    return 0;
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_40;
  this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *)_4__this->fields.wipeIcon;
  if ( !this )
    goto LABEL_40;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  TweenAlpha__Begin(v14, _4__this->fields.wipeIconFadeOutTime, 0.0, 0);
  this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *)_4__this->fields.wipeIcon2;
  if ( !this )
    goto LABEL_40;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  TweenAlpha__Begin(v15, _4__this->fields.wipeIconFadeOutTime, 0.0, 0);
  this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *)v3->fields._bulletinBoardMst_5__2;
  if ( !this )
    goto LABEL_40;
  this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                       (Il2CppObject **)&v3->fields._ent_5__3,
                                                                                       v3->fields.id,
                                                                                       (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventBulletinBoardMaster__EventBulletinBoardEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_18;
  v16 = v3->fields._ent_5__3;
  if ( !v16 )
    goto LABEL_40;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v16->fields.script, 0) )
  {
LABEL_18:
    this = (TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *)_4__this->fields.svtNameLabel;
    if ( !this )
      goto LABEL_40;
    name = (System_String_o *)StringLiteral_1/*""*/;
LABEL_34:
    UILabel__set_text((UILabel_o *)this, name, 0);
    return 0;
  }
  wipeIconFadeOutTime = _4__this->fields.wipeIconFadeOutTime;
  v42 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v42, wipeIconFadeOutTime, 0);
  v3->fields.__2__current = (Il2CppObject *)v42;
  v43 = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_2213A04(v43, (int32_t)v42, v44, v45, v46, v47, v48, v49);
  result = 1;
  v43[-1].fields._BoardType_k__BackingField = 2;
  return result;
}


Il2CppObject *TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53__System_Collections_IEnumerator_Reset(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53__System_Collections_IEnumerator_get_Current(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53__System_IDisposable_Dispose(
        TitleInfoEventBulletinBoardComponent__SetWipeIconAndSvtNameLabel_d__53_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventBulletinBoardComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596E77F & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventBulletinBoardComponent___c_TypeInfo);
    byte_596E77F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(TitleInfoEventBulletinBoardComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields->__9 = (struct TitleInfoEventBulletinBoardComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventBulletinBoardComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TitleInfoEventBulletinBoardComponent___c___ctor(
        TitleInfoEventBulletinBoardComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventBulletinBoardComponent___c___GetNextMessageId_b__59_4(
        TitleInfoEventBulletinBoardComponent___c_o *this,
        EventBulletinBoardEntity_o *x,
        const MethodInfo *method)
{
  return x != 0;
}


EventBulletinBoardEntity_o *TitleInfoEventBulletinBoardComponent___c___GetNextMessageId_b__59_5(
        TitleInfoEventBulletinBoardComponent___c_o *this,
        EventBulletinBoardEntity_o *a,
        EventBulletinBoardEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_2213CDC(this, a);
  if ( a->fields.dispOrder >= b->fields.dispOrder )
    return b;
  else
    return a;
}


void TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___GetNextMessageId_b__0(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *this,
        EventBulletinBoardEntity_o *x,
        const MethodInfo *method)
{
  return x && x->fields.id == this->fields.nextMessageId;
}


bool TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___GetNextMessageId_b__2(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *this,
        EventBulletinBoardEntity_o *x,
        const MethodInfo *method)
{
  struct TitleInfoEventBulletinBoardComponent_o *_4__this; // x8

  if ( !x )
    return 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(this, x);
  return x->fields.id == _4__this->fields.followMessageId;
}


bool TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0___GetNextMessageId_b__3(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_0_o *this,
        EventBulletinBoardEntity_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *followTargetList; // x0

  if ( (byte_596E780 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    byte_596E780 = 1;
  }
  if ( x )
  {
    followTargetList = this->fields.followTargetList;
    if ( !followTargetList )
      sub_2213CDC(0, x);
    return !System_Collections_Generic_List_int___Contains(
              followTargetList,
              x->fields.id,
              (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    return 0;
  }
}


void TitleInfoEventBulletinBoardComponent___c__DisplayClass59_1___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventBulletinBoardComponent___c__DisplayClass59_1___GetNextMessageId_b__1(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_1_o *this,
        EventBulletinBoardEntity_o *t,
        const MethodInfo *method)
{
  TitleInfoEventBulletinBoardComponent___c__DisplayClass59_1_o *v4; // x20

  v4 = this;
  if ( (byte_596E781 & 1) == 0 )
  {
    this = (TitleInfoEventBulletinBoardComponent___c__DisplayClass59_1_o *)sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Key__);
    byte_596E781 = 1;
  }
  if ( !t )
    sub_2213CDC(this, t);
  return t->fields.id == v4->fields.showStatus.fields.key;
}


void TitleInfoEventBulletinBoardComponent___c__DisplayClass59_2___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventBulletinBoardComponent___c__DisplayClass59_2___GetNextMessageId_b__6(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass59_2_o *this,
        EventBulletinBoardEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.dispOrder == this->fields.minDispOrderNum;
}


void TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0___ctor(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0___LoadAssetData_b__0(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *_4__this; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct TitleInfoEventBulletinBoardComponent_o *v14; // x8
  System_String_o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *v18; // x19
  __int64 v19; // x2
  struct TitleInfoEventBulletinBoardComponent_o *v20; // x8
  int32_t eventId; // w20
  System_Action_o *_9__1; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  if ( (byte_596E782 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0__LoadAssetData_b__1__);
    sub_2213A60(&StringLiteral_6532/*"EventUI/Prefabs/"*/);
    byte_596E782 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, assetData, method);
  v6 = UnityEngine_Object__op_Equality(_4__this, 0, 0);
  v14 = this->fields.__4__this;
  if ( v6 )
  {
    if ( v14 )
    {
      v15 = System_Int32__ToString((int)v14 + 256, 0);
      v18 = System_String__Concat_75651716((System_String_o *)StringLiteral_6532/*"EventUI/Prefabs/"*/, v15, 0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16, v17);
      AssetManager__releaseAssetStorage(v18, 0);
      return;
    }
LABEL_17:
    sub_2213CDC(v6, v7);
  }
  if ( !v14 )
    goto LABEL_17;
  v14->fields.bulletinBoardAssetData = assetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v14->fields.bulletinBoardAssetData,
    (int32_t)assetData,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_17;
  eventId = v20->fields.eventId;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0__LoadAssetData_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v23, v24, v25, v26, v27, v28);
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v19);
  AtlasManager__LoadEventUI_47569188(eventId, _9__1, 1, 0);
}


void TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0___LoadAssetData_b__1(
        TitleInfoEventBulletinBoardComponent___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *_4__this; // x20
  __int64 bulletinBg; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct TitleInfoEventBulletinBoardComponent_o *v8; // x8
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *v12; // x19
  UISprite_o *baseIcon; // x21
  System_String_o *baseIconName; // x22
  int32_t eventId; // w20
  struct TitleInfoEventBulletinBoardComponent_o *v16; // x8
  struct TitleInfoEventBulletinBoardComponent_o *v17; // x8
  __int64 v18; // x2
  struct TitleInfoEventBulletinBoardComponent_o *v19; // x8
  UISprite_o *wipeIconFrame; // x21
  System_String_o *wipeIconFrameName; // x22
  int32_t v22; // w20
  struct TitleInfoEventBulletinBoardComponent_o *v23; // x8
  struct TitleInfoEventBulletinBoardComponent_o *v24; // x8
  struct System_Action_o *callBack; // x8

  if ( (byte_596E783 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6532/*"EventUI/Prefabs/"*/);
    byte_596E783 = 1;
  }
  _4__this = (UnityEngine_Object_o *)this->fields.__4__this;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  bulletinBg = UnityEngine_Object__op_Equality(_4__this, 0, 0);
  v8 = this->fields.__4__this;
  if ( (bulletinBg & 1) != 0 )
  {
    if ( v8 )
    {
      v9 = System_Int32__ToString((int)v8 + 256, 0);
      v12 = System_String__Concat_75651716((System_String_o *)StringLiteral_6532/*"EventUI/Prefabs/"*/, v9, 0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10, v11);
      AssetManager__releaseAssetStorage(v12, 0);
      return;
    }
LABEL_28:
    sub_2213CDC(bulletinBg, v6);
  }
  if ( !v8 )
    goto LABEL_28;
  baseIcon = v8->fields.baseIcon;
  baseIconName = v8->fields.baseIconName;
  eventId = v8->fields.eventId;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  bulletinBg = AtlasManager__SetEventUI_47569484(eventId, baseIcon, baseIconName, 0);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_28;
  bulletinBg = AtlasManager__SetEventUI_47569484(
                 v16->fields.eventId,
                 v16->fields.bulletinBg,
                 v16->fields.bulletinBgName,
                 0);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_28;
  bulletinBg = AtlasManager__SetEventUI_47569484(
                 v17->fields.eventId,
                 v17->fields.bulletinTitle,
                 v17->fields.bulletinTitleName,
                 0);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_28;
  if ( v19->fields.isDispWipeIcon )
  {
    wipeIconFrame = v19->fields.wipeIconFrame;
    wipeIconFrameName = v19->fields.wipeIconFrameName;
    v22 = v19->fields.eventId;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v18);
    bulletinBg = AtlasManager__SetEventUI_47569484(v22, wipeIconFrame, wipeIconFrameName, 0);
    v19 = this->fields.__4__this;
    if ( !v19 )
      goto LABEL_28;
  }
  bulletinBg = (__int64)v19->fields.baseIcon;
  if ( !bulletinBg )
    goto LABEL_28;
  bulletinBg = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bulletinBg + 840LL))(
                 bulletinBg,
                 *(_QWORD *)(*(_QWORD *)bulletinBg + 848LL));
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_28;
  bulletinBg = (__int64)v23->fields.bulletinBg;
  if ( !bulletinBg )
    goto LABEL_28;
  bulletinBg = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bulletinBg + 840LL))(
                 bulletinBg,
                 *(_QWORD *)(*(_QWORD *)bulletinBg + 848LL));
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_28;
  bulletinBg = (__int64)v24->fields.bulletinTitle;
  if ( !bulletinBg )
    goto LABEL_28;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bulletinBg + 840LL))(
    bulletinBg,
    *(_QWORD *)(*(_QWORD *)bulletinBg + 848LL));
  callBack = this->fields.callBack;
  if ( callBack )
    ((void (__fastcall *)(intptr_t, intptr_t))callBack->fields.invoke_impl)(
      callBack->fields.method_code,
      callBack->fields.method);
}