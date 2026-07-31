void CombineServantListViewNoticeTween___ctor(
        CombineServantListViewNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5932210 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo);
    byte_5932210 = 1;
  }
  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.monoBehaviour = monoBehaviour;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.monoBehaviour,
    (int32_t)monoBehaviour,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
  this->fields.tweenControllers = (struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *)v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v11, v12, v13, v14, v15, v16, v17);
}


void CombineServantListViewNoticeTween__AddTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tweenControllers; // x19
  CombineServantListViewNoticeTween_TweenController_o *v8; // x20
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_5932211 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__);
    sub_21FFC50(&CombineServantListViewNoticeTween_TweenController_TypeInfo);
    byte_5932211 = 1;
  }
  if ( !CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
          this,
          tweenTarget,
          (const MethodInfo *)texts) )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
    v8 = (CombineServantListViewNoticeTween_TweenController_o *)sub_21FFEBC(CombineServantListViewNoticeTween_TweenController_TypeInfo);
    CombineServantListViewNoticeTween_TweenController___ctor(v8, tweenTarget, texts, v9);
    if ( !tweenControllers
      || (items = tweenControllers->fields._items,
          v19 = Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__,
          ++tweenControllers->fields._version,
          !items) )
    {
      sub_21FFECC(v10, v11);
    }
    size = tweenControllers->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenControllers,
        (Il2CppObject *)v8,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      tweenControllers->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v8;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v8, v12, v13, v14, v15, v16, v17);
    }
  }
}


void CombineServantListViewNoticeTween__Clear(CombineServantListViewNoticeTween_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_5932214 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__);
    byte_5932214 = 1;
  }
  tweenControllers = this->fields.tweenControllers;
  if ( tweenControllers )
  {
    size = tweenControllers->fields._size;
    v5 = tweenControllers->fields._version + 1;
    tweenControllers->fields._size = 0;
    tweenControllers->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)tweenControllers->fields._items, 0, size, 0);
  }
}


bool CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(
        CombineServantListViewNoticeTween_o *this,
        TweenAlpha_array *tweenAlphas,
        const MethodInfo *method)
{
  int max_length; // w8
  bool v5; // w21
  int i; // w23
  UnityEngine_Object_o *v7; // x20

  if ( (byte_5932216 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932216 = 1;
  }
  if ( !tweenAlphas )
LABEL_14:
    sub_21FFECC(this, tweenAlphas);
  max_length = tweenAlphas->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; v5 = i < max_length )
    {
      if ( i >= (unsigned int)max_length )
        sub_21FFED4(this);
      v7 = (UnityEngine_Object_o *)tweenAlphas->m_Items[i];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tweenAlphas, method);
      this = (CombineServantListViewNoticeTween_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      if ( !v7 )
        goto LABEL_14;
      this = (CombineServantListViewNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = tweenAlphas->max_length;
      ++i;
    }
  }
  return v5;
}


bool CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tweenControllers; // x0
  int32_t v6; // w21
  int32_t size; // w25
  __int64 v8; // x2
  UnityEngine_Object_o *items; // x22

  if ( (byte_5932212 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932212 = 1;
  }
  tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
  if ( !tweenControllers )
LABEL_11:
    sub_21FFECC(tweenControllers, tweenTarget);
  v6 = 0;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( v6 >= size )
      break;
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v6,
                                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    if ( !tweenControllers )
      goto LABEL_11;
    items = (UnityEngine_Object_o *)tweenControllers->fields._items;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tweenTarget, v8);
    if ( UnityEngine_Object__op_Equality(items, (UnityEngine_Object_o *)tweenTarget, 0) )
      break;
    tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
    ++v6;
    if ( !tweenControllers )
      goto LABEL_11;
  }
  return v6 < size;
}


void CombineServantListViewNoticeTween__RemoveTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_List_object__o *tweenControllers; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_5932213 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
    sub_21FFC50(&System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo);
    sub_21FFC50(&Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__);
    sub_21FFC50(&CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo);
    byte_5932213 = 1;
  }
  v5 = sub_21FFEBC(CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = tweenTarget,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)tweenTarget, v8, v9, v10, v11, v12, v13),
        tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers,
        v15 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__,
          0),
        !tweenControllers) )
  {
    sub_21FFECC(v6, v7);
  }
  System_Collections_Generic_List_object___RemoveAll(
    tweenControllers,
    (System_Predicate_T__o *)v15,
    (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
}


// local variable allocation has failed, the output may be wrong!
void CombineServantListViewNoticeTween__SetTexts(
        CombineServantListViewNoticeTween_o *this,
        bool isSwitch,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tweenControllers; // x0
  int32_t v6; // w20
  int32_t v7; // w20

  if ( (byte_5932217 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    byte_5932217 = 1;
  }
  tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
  if ( !isSwitch )
  {
    if ( tweenControllers )
      goto LABEL_11;
LABEL_15:
    sub_21FFECC(tweenControllers, isSwitch);
  }
  if ( !tweenControllers )
    goto LABEL_15;
  v6 = 0;
  while ( v6 < tweenControllers->fields._size )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v6,
                                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    if ( tweenControllers )
    {
      CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        (CombineServantListViewNoticeTween_TweenController_o *)tweenControllers,
        (const MethodInfo *)isSwitch);
      tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
      ++v6;
      if ( tweenControllers )
        continue;
    }
    goto LABEL_15;
  }
LABEL_11:
  v7 = 0;
  while ( v7 < tweenControllers->fields._size )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v7,
                                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    if ( tweenControllers )
    {
      CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        (CombineServantListViewNoticeTween_TweenController_o *)tweenControllers,
        (const MethodInfo *)isSwitch);
      tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
      ++v7;
      if ( tweenControllers )
        continue;
    }
    goto LABEL_15;
  }
}


void CombineServantListViewNoticeTween__Start(CombineServantListViewNoticeTween_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_IEnumerator_o *monoBehaviour; // x0
  const MethodInfo *v5; // x1
  UnityEngine_MonoBehaviour_o *v6; // x20
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  CombineServantListViewNoticeTween__Stop(this, method);
  monoBehaviour = (System_Collections_IEnumerator_o *)this->fields.monoBehaviour;
  if ( !monoBehaviour )
    goto LABEL_6;
  if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)monoBehaviour, 0) )
  {
    v6 = this->fields.monoBehaviour;
    this->fields.isTween = 1;
    monoBehaviour = CombineServantListViewNoticeTween__TweenLoop(this, v5);
    if ( v6 )
    {
      started = UnityEngine_MonoBehaviour__StartCoroutine_83231452(v6, monoBehaviour, 0);
      this->fields.coroutine = started;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.coroutine,
        (int32_t)started,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      return;
    }
LABEL_6:
    sub_21FFECC(monoBehaviour, v3);
  }
}


void CombineServantListViewNoticeTween__Stop(CombineServantListViewNoticeTween_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  MissionNaviTransitionBoardItem_o *p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_coroutine = (MissionNaviTransitionBoardItem_o *)&this->fields.coroutine;
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_21FFECC(0, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_83232056(monoBehaviour, coroutine, 0);
    p_coroutine->klass = 0;
    sub_21FFBF4(p_coroutine, 0, v5, v6, v7, v8, v9, v10);
  }
}


System_Collections_IEnumerator_o *CombineServantListViewNoticeTween__TweenLoop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5932215 & 1) == 0 )
  {
    sub_21FFC50(&CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo);
    byte_5932215 = 1;
  }
  v3 = sub_21FFEBC(CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void CombineServantListViewNoticeTween_TweenController___ctor(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_TweenController_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._TweenTarget_k__BackingField = tweenTarget;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields, (int32_t)tweenTarget, v7, v8, v9, v10, v11, v12);
  v6->fields._Texts_k__BackingField = texts;
  v6 = (CombineServantListViewNoticeTween_TweenController_o *)((char *)v6 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v6, (int32_t)texts, v13, v14, v15, v16, v17, v18);
  LODWORD(v6->monitor) = 0;
}


void CombineServantListViewNoticeTween_TweenController__SetNextIndex(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_TweenController_o *v2; // x19
  struct System_Collections_Generic_List_string__o *Texts_k__BackingField; // x8
  int32_t index_k__BackingField; // w9
  int32_t v5; // w8

  v2 = this;
  if ( (byte_5932218 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_5932218 = 1;
  }
  Texts_k__BackingField = v2->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    sub_21FFECC(this, method);
  index_k__BackingField = v2->fields._index_k__BackingField;
  if ( index_k__BackingField == Texts_k__BackingField->fields._size - 1 )
    v5 = 0;
  else
    v5 = index_k__BackingField + 1;
  v2->fields._index_k__BackingField = v5;
}


void CombineServantListViewNoticeTween_TweenController__SetTextToLabel(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Texts_k__BackingField; // x0
  UILabel_o *TweenTarget_k__BackingField; // x20

  if ( (byte_5932219 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_5932219 = 1;
  }
  Texts_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField
    || (TweenTarget_k__BackingField = this->fields._TweenTarget_k__BackingField,
        Texts_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               Texts_k__BackingField,
                                                                               this->fields._index_k__BackingField,
                                                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__),
        !TweenTarget_k__BackingField) )
  {
    sub_21FFECC(Texts_k__BackingField, method);
  }
  UILabel__set_text(TweenTarget_k__BackingField, (System_String_o *)Texts_k__BackingField, 0);
}


System_Collections_Generic_List_string__o *CombineServantListViewNoticeTween_TweenController__get_Texts(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  return this->fields._Texts_k__BackingField;
}


UILabel_o *CombineServantListViewNoticeTween_TweenController__get_TweenTarget(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  return this->fields._TweenTarget_k__BackingField;
}


int32_t CombineServantListViewNoticeTween_TweenController__get_index(
        CombineServantListViewNoticeTween_TweenController_o *this,
        const MethodInfo *method)
{
  return this->fields._index_k__BackingField;
}


void CombineServantListViewNoticeTween_TweenController__set_Texts(
        CombineServantListViewNoticeTween_TweenController_o *this,
        System_Collections_Generic_List_string__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Texts_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Texts_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CombineServantListViewNoticeTween_TweenController__set_TweenTarget(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TweenTarget_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CombineServantListViewNoticeTween_TweenController__set_index(
        CombineServantListViewNoticeTween_TweenController_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._index_k__BackingField = value;
}


void CombineServantListViewNoticeTween__TweenLoop_d__13___ctor(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CombineServantListViewNoticeTween__TweenLoop_d__13__MoveNext(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct CombineServantListViewNoticeTween_o *_4__this; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  UnityEngine_WaitForSeconds_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *loopWaitOnShow_5__2; // x1
  int32_t v20; // w8
  float v21; // s0
  float to; // s1
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  __int64 size; // x1
  struct TweenAlpha_array *v25; // x0
  struct TweenAlpha_array **p_tweenAlphas_5__3; // x21
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  unsigned __int64 v33; // x22
  __int64 v34; // x2
  UnityEngine_Object_o *items; // x23
  unsigned int *v36; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_List_object__o *v44; // x23
  __int64 v45; // x1
  unsigned int *v46; // x0
  struct TweenAlpha_array *v47; // x8
  TweenAlpha_o *v48; // x8
  Il2CppObject *v49; // x1
  __int64 v50; // x0

  if ( (byte_593221B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TweenAlpha___TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_593221B = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  Item = 0;
  if ( _1__state > 2 )
  {
    if ( _1__state == 3 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_16;
      goto LABEL_46;
    }
    if ( _1__state == 4 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_21;
      goto LABEL_46;
    }
  }
  else
  {
    if ( (unsigned int)(_1__state - 1) < 2 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_24;
LABEL_46:
      sub_21FFECC(Item, method);
    }
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v12 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v12, 3.0, 0);
      this->fields._loopWaitOnShow_5__2 = v12;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._loopWaitOnShow_5__2,
        (int32_t)v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      if ( !_4__this )
        goto LABEL_46;
      if ( _4__this->fields.to == 0.0 )
      {
        loopWaitOnShow_5__2 = (Il2CppObject *)this->fields._loopWaitOnShow_5__2;
        this->fields.__2__current = loopWaitOnShow_5__2;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
          (int32_t)loopWaitOnShow_5__2,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        v20 = 1;
      }
      else
      {
        while ( 1 )
        {
LABEL_24:
          if ( !_4__this->fields.isTween )
            goto LABEL_50;
          tweenControllers = _4__this->fields.tweenControllers;
          if ( !tweenControllers || (size = (unsigned int)tweenControllers->fields._size, !(_DWORD)size) )
          {
            this->fields.__2__current = 0;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
            v20 = 2;
            goto LABEL_52;
          }
          v25 = (struct TweenAlpha_array *)sub_21FFD10(TweenAlpha___TypeInfo, size);
          this->fields._tweenAlphas_5__3 = v25;
          p_tweenAlphas_5__3 = &this->fields._tweenAlphas_5__3;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields._tweenAlphas_5__3,
            (int32_t)v25,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          Item = (System_Collections_Generic_List_object__o *)_4__this->fields.tweenControllers;
          if ( !Item )
            goto LABEL_46;
          v33 = 0;
          while ( (__int64)v33 < Item->fields._size )
          {
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  Item,
                                                                  v33,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
            if ( !Item )
              goto LABEL_46;
            items = (UnityEngine_Object_o *)Item->fields._items;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v34);
            if ( !UnityEngine_Object__op_Equality(items, 0, 0) )
            {
              Item = (System_Collections_Generic_List_object__o *)_4__this->fields.tweenControllers;
              if ( !Item )
                goto LABEL_46;
              v36 = (unsigned int *)*p_tweenAlphas_5__3;
              Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    Item,
                                                                    v33,
                                                                    (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
              if ( !Item )
                goto LABEL_46;
              Item = (System_Collections_Generic_List_object__o *)Item->fields._items;
              if ( !Item )
                goto LABEL_46;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
              Item = (System_Collections_Generic_List_object__o *)TweenAlpha__Begin(
                                                                    gameObject,
                                                                    0.5,
                                                                    _4__this->fields.to,
                                                                    0);
              if ( !v36 )
                goto LABEL_46;
              v44 = Item;
              if ( Item )
              {
                Item = (System_Collections_Generic_List_object__o *)sub_21FFDA4(
                                                                      Item,
                                                                      *(_QWORD *)(*(_QWORD *)v36 + 64LL));
                if ( !Item )
                {
                  v50 = sub_21FFEF0(0, v45);
                  sub_21FFD90(v50, 0);
                }
              }
              if ( v33 >= v36[6] )
                goto LABEL_54;
              v46 = &v36[2 * v33];
              *((_QWORD *)v46 + 4) = v44;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v46 + 8), (int32_t)v44, v38, v39, v40, v41, v42, v43);
              v47 = *p_tweenAlphas_5__3;
              if ( !*p_tweenAlphas_5__3 )
                goto LABEL_46;
              if ( v33 >= LODWORD(v47->max_length) )
LABEL_54:
                sub_21FFED4(Item);
              v48 = v47->m_Items[v33];
              if ( !v48 )
                goto LABEL_46;
              v48->fields.method = 6;
            }
            Item = (System_Collections_Generic_List_object__o *)_4__this->fields.tweenControllers;
            ++v33;
            if ( !Item )
              goto LABEL_46;
          }
LABEL_16:
          if ( CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(
                 (CombineServantListViewNoticeTween_o *)Item,
                 this->fields._tweenAlphas_5__3,
                 (const MethodInfo *)v2) )
          {
            if ( _4__this->fields.isTween )
            {
              this->fields.__2__current = 0;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
              v20 = 3;
              goto LABEL_52;
            }
LABEL_50:
            LOBYTE(Item) = 0;
            return (char)Item;
          }
          if ( !_4__this->fields.isTween )
            goto LABEL_50;
          v21 = 1.0;
          to = _4__this->fields.to;
          if ( to == 1.0 )
            v21 = 0.0;
          _4__this->fields.to = v21;
          if ( to == 1.0 )
            break;
LABEL_21:
          if ( _4__this->fields.to == 1.0 )
            CombineServantListViewNoticeTween__SetTexts(_4__this, 1, (const MethodInfo *)v2);
          this->fields._tweenAlphas_5__3 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._tweenAlphas_5__3, 0, v2, v3, v4, v5, v6, v7);
        }
        v49 = (Il2CppObject *)this->fields._loopWaitOnShow_5__2;
        this->fields.__2__current = v49;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
          (int32_t)v49,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7);
        v20 = 4;
      }
LABEL_52:
      LOBYTE(Item) = 1;
      this->fields.__1__state = v20;
    }
  }
  return (char)Item;
}


Il2CppObject *CombineServantListViewNoticeTween__TweenLoop_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CombineServantListViewNoticeTween__TweenLoop_d__13__System_Collections_IEnumerator_Reset(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_CombineServantListViewNoticeTween__TweenLoop_d__13_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *CombineServantListViewNoticeTween__TweenLoop_d__13__System_Collections_IEnumerator_get_Current(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CombineServantListViewNoticeTween__TweenLoop_d__13__System_IDisposable_Dispose(
        CombineServantListViewNoticeTween__TweenLoop_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void CombineServantListViewNoticeTween___c__DisplayClass9_0___ctor(
        CombineServantListViewNoticeTween___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineServantListViewNoticeTween___c__DisplayClass9_0___RemoveTarget_b__0(
        CombineServantListViewNoticeTween___c__DisplayClass9_0_o *this,
        CombineServantListViewNoticeTween_TweenController_o *t,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween___c__DisplayClass9_0_o *v4; // x20
  UnityEngine_Object_o *TweenTarget_k__BackingField; // x19
  UnityEngine_Object_o *tweenTarget; // x20

  v4 = this;
  if ( (byte_593221A & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593221A = 1;
  }
  if ( !t )
    sub_21FFECC(this, t);
  TweenTarget_k__BackingField = (UnityEngine_Object_o *)t->fields._TweenTarget_k__BackingField;
  tweenTarget = (UnityEngine_Object_o *)v4->fields.tweenTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, t, method);
  return UnityEngine_Object__op_Equality(TweenTarget_k__BackingField, tweenTarget, 0);
}