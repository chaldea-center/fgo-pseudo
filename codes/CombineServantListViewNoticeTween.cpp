void CombineServantListViewNoticeTween___ctor(
        CombineServantListViewNoticeTween_o *this,
        UnityEngine_MonoBehaviour_o *monoBehaviour,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20

  if ( (byte_4CC13BA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo);
    byte_4CC13BA = 1;
  }
  this->fields.to = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.monoBehaviour = monoBehaviour;
  sub_1C71354(&this->fields.monoBehaviour, monoBehaviour);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController___ctor__);
  this->fields.tweenControllers = (struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *)v5;
  sub_1C71354(&this->fields, v5);
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
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4CC13BB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__);
    sub_1C713B0(&CombineServantListViewNoticeTween_TweenController_TypeInfo);
    byte_4CC13BB = 1;
  }
  if ( !CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
          this,
          tweenTarget,
          (const MethodInfo *)texts) )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
    v8 = (CombineServantListViewNoticeTween_TweenController_o *)sub_1C715FC(CombineServantListViewNoticeTween_TweenController_TypeInfo);
    CombineServantListViewNoticeTween_TweenController___ctor(v8, tweenTarget, texts, v9);
    if ( !tweenControllers
      || (items = tweenControllers->fields._items,
          v13 = Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Add__,
          ++tweenControllers->fields._version,
          !items) )
    {
      sub_1C71608(v10, v11);
    }
    size = tweenControllers->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        tweenControllers,
        (Il2CppObject *)v8,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      tweenControllers->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v8;
      sub_1C71354(v15 + 4, v8);
    }
  }
}


void CombineServantListViewNoticeTween__Clear(CombineServantListViewNoticeTween_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4CC13BE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__Clear__);
    byte_4CC13BE = 1;
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
  unsigned int v5; // w21
  UnityEngine_Object_o *v6; // x20

  if ( (byte_4CC13C0 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC13C0 = 1;
  }
  if ( !tweenAlphas )
LABEL_16:
    sub_1C71608(this, tweenAlphas);
  max_length = tweenAlphas->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
      sub_1C71610(this);
    v6 = (UnityEngine_Object_o *)tweenAlphas->m_Items[v5];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (CombineServantListViewNoticeTween_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    if ( !v6 )
      goto LABEL_16;
    this = (CombineServantListViewNoticeTween_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    max_length = tweenAlphas->max_length;
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


bool CombineServantListViewNoticeTween__IsTweenControllersContainsTarget(
        CombineServantListViewNoticeTween_o *this,
        UILabel_o *tweenTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *tweenControllers; // x0
  int32_t v6; // w21
  int32_t size; // w25
  UnityEngine_Object_o *items; // x22

  if ( (byte_4CC13BC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC13BC = 1;
  }
  tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
  if ( !tweenControllers )
LABEL_11:
    sub_1C71608(tweenControllers, tweenTarget);
  v6 = 0;
  while ( 1 )
  {
    size = tweenControllers->fields._size;
    if ( v6 >= size )
      break;
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v6,
                                                                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    if ( !tweenControllers )
      goto LABEL_11;
    items = (UnityEngine_Object_o *)tweenControllers->fields._items;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *tweenControllers; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4CC13BD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
    sub_1C713B0(&System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo);
    sub_1C713B0(&Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__);
    sub_1C713B0(&CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo);
    byte_4CC13BD = 1;
  }
  v5 = (Il2CppObject *)sub_1C715FC(CombineServantListViewNoticeTween___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5
    || (v5[1].klass = (Il2CppClass *)tweenTarget,
        sub_1C71354(&v5[1], tweenTarget),
        tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers,
        v9 = (System_Predicate_object__o *)sub_1C715FC(System_Predicate_CombineServantListViewNoticeTween_TweenController__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          v5,
          Method_CombineServantListViewNoticeTween___c__DisplayClass9_0__RemoveTarget_b__0__,
          0),
        !tweenControllers) )
  {
    sub_1C71608(v6, v7);
  }
  System_Collections_Generic_List_object___RemoveAll(
    tweenControllers,
    (System_Predicate_T__o *)v9,
    (const MethodInfo_3811D74 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__RemoveAll__);
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

  if ( (byte_4CC13C1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    byte_4CC13C1 = 1;
  }
  tweenControllers = (System_Collections_Generic_List_object__o *)this->fields.tweenControllers;
  if ( !isSwitch )
  {
    if ( tweenControllers )
      goto LABEL_11;
LABEL_15:
    sub_1C71608(tweenControllers, isSwitch);
  }
  if ( !tweenControllers )
    goto LABEL_15;
  v6 = 0;
  while ( v6 < tweenControllers->fields._size )
  {
    tweenControllers = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      tweenControllers,
                                                                      v6,
                                                                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
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
                                                                      (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
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
      started = UnityEngine_MonoBehaviour__StartCoroutine_71709800(v6, monoBehaviour, 0);
      this->fields.coroutine = started;
      sub_1C71354(&this->fields.coroutine, started);
      return;
    }
LABEL_6:
    sub_1C71608(monoBehaviour, v3);
  }
}


void CombineServantListViewNoticeTween__Stop(CombineServantListViewNoticeTween_o *this, const MethodInfo *method)
{
  UnityEngine_Coroutine_o *coroutine; // x1
  struct UnityEngine_Coroutine_o **p_coroutine; // x19
  UnityEngine_MonoBehaviour_o *monoBehaviour; // x0

  p_coroutine = &this->fields.coroutine;
  coroutine = this->fields.coroutine;
  this->fields.isTween = 0;
  if ( coroutine )
  {
    monoBehaviour = this->fields.monoBehaviour;
    if ( !monoBehaviour )
      sub_1C71608(0, coroutine);
    UnityEngine_MonoBehaviour__StopCoroutine_71710420(monoBehaviour, coroutine, 0);
    *p_coroutine = 0;
    sub_1C71354(p_coroutine, 0);
  }
}


System_Collections_IEnumerator_o *CombineServantListViewNoticeTween__TweenLoop(
        CombineServantListViewNoticeTween_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4CC13BF & 1) == 0 )
  {
    sub_1C713B0(&CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo);
    byte_4CC13BF = 1;
  }
  v3 = sub_1C715FC(CombineServantListViewNoticeTween__TweenLoop_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354(v3 + 32, this);
  return (System_Collections_IEnumerator_o *)v3;
}


void CombineServantListViewNoticeTween_TweenController___ctor(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *tweenTarget,
        System_Collections_Generic_List_string__o *texts,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_TweenController_o *v6; // x21

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields._TweenTarget_k__BackingField = tweenTarget;
  sub_1C71354(&v6->fields, tweenTarget);
  v6->fields._Texts_k__BackingField = texts;
  v6 = (CombineServantListViewNoticeTween_TweenController_o *)((char *)v6 + 24);
  sub_1C71354(v6, texts);
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
  if ( (byte_4CC13C2 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween_TweenController_o *)sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4CC13C2 = 1;
  }
  Texts_k__BackingField = v2->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField )
    sub_1C71608(this, method);
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

  if ( (byte_4CC13C3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4CC13C3 = 1;
  }
  Texts_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._Texts_k__BackingField;
  if ( !Texts_k__BackingField
    || (TweenTarget_k__BackingField = this->fields._TweenTarget_k__BackingField,
        Texts_k__BackingField = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               Texts_k__BackingField,
                                                                               this->fields._index_k__BackingField,
                                                                               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_string__get_Item__),
        !TweenTarget_k__BackingField) )
  {
    sub_1C71608(Texts_k__BackingField, method);
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
  this->fields._Texts_k__BackingField = value;
  sub_1C71354(&this->fields._Texts_k__BackingField, value);
}


void CombineServantListViewNoticeTween_TweenController__set_TweenTarget(
        CombineServantListViewNoticeTween_TweenController_o *this,
        UILabel_o *value,
        const MethodInfo *method)
{
  this->fields._TweenTarget_k__BackingField = value;
  sub_1C71354(&this->fields, value);
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
  const MethodInfo *v2; // x2
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v3; // x19
  struct CombineServantListViewNoticeTween_o *_4__this; // x20
  UnityEngine_WaitForSeconds_o *v5; // x21
  Il2CppObject *loopWaitOnShow_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  bool v9; // zf
  float v10; // s0
  struct System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__o *tweenControllers; // x8
  __int64 size; // x1
  __int64 v13; // x0
  unsigned int **p_tweenAlphas_5__3; // x21
  unsigned __int64 v15; // x22
  UnityEngine_Object_o *v16; // x23
  unsigned int *v17; // x27
  UnityEngine_GameObject_o *gameObject; // x0
  CombineServantListViewNoticeTween__TweenLoop_d__13_o *v19; // x23
  unsigned int *v20; // x0
  unsigned int *v21; // x8
  __int64 v22; // x8
  Il2CppObject **v23; // x19
  int v24; // w8
  Il2CppObject *v25; // x1
  __int64 v26; // x0

  v3 = this;
  if ( (byte_4CC13C5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&TweenAlpha___TypeInfo);
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CC13C5 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      v5 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v5, 3.0, 0);
      v3->fields._loopWaitOnShow_5__2 = v5;
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_1C71354(&v3->fields._loopWaitOnShow_5__2, v5);
      if ( !_4__this )
        goto LABEL_40;
      if ( _4__this->fields.to == 0.0 )
      {
        loopWaitOnShow_5__2 = (Il2CppObject *)v3->fields._loopWaitOnShow_5__2;
        v3->fields.__2__current = loopWaitOnShow_5__2;
        p__2__current = &v3->fields.__2__current;
        sub_1C71354(p__2__current, loopWaitOnShow_5__2);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
      break;
    case 1:
    case 2:
      v3->fields.__1__state = -1;
      goto LABEL_17;
    case 3:
      v3->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_9;
      goto LABEL_40;
    case 4:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      goto LABEL_14;
    default:
      return 0;
  }
  while ( 1 )
  {
LABEL_17:
    if ( !_4__this )
LABEL_40:
      sub_1C71608(this, method);
    if ( !_4__this->fields.isTween )
      return 0;
    tweenControllers = _4__this->fields.tweenControllers;
    if ( !tweenControllers || (size = (unsigned int)tweenControllers->fields._size, !(_DWORD)size) )
    {
      v3->fields.__2__current = 0;
      v23 = &v3->fields.__2__current;
      sub_1C71354(v23, 0);
      v24 = 2;
      goto LABEL_48;
    }
    v13 = sub_1C71458(TweenAlpha___TypeInfo, size);
    v3->fields._tweenAlphas_5__3 = (struct TweenAlpha_array *)v13;
    p_tweenAlphas_5__3 = (unsigned int **)&v3->fields._tweenAlphas_5__3;
    sub_1C71354(&v3->fields._tweenAlphas_5__3, v13);
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)_4__this->fields.tweenControllers;
    if ( !this )
      goto LABEL_40;
    v15 = 0;
    while ( (__int64)v15 < SLODWORD(this->fields.__2__current) )
    {
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)System_Collections_Generic_List_object___get_Item(
                                                                       (System_Collections_Generic_List_object__o *)this,
                                                                       v15,
                                                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
      if ( !this )
        goto LABEL_40;
      v16 = *(UnityEngine_Object_o **)&this->fields.__1__state;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(v16, 0, 0) )
      {
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)_4__this->fields.tweenControllers;
        if ( !this )
          goto LABEL_40;
        v17 = *p_tweenAlphas_5__3;
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)System_Collections_Generic_List_object___get_Item(
                                                                         (System_Collections_Generic_List_object__o *)this,
                                                                         v15,
                                                                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_CombineServantListViewNoticeTween_TweenController__get_Item__);
        if ( !this )
          goto LABEL_40;
        this = *(CombineServantListViewNoticeTween__TweenLoop_d__13_o **)&this->fields.__1__state;
        if ( !this )
          goto LABEL_40;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)TweenAlpha__Begin(
                                                                         gameObject,
                                                                         0.5,
                                                                         _4__this->fields.to,
                                                                         0);
        if ( !v17 )
          goto LABEL_40;
        v19 = this;
        if ( this )
        {
          this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_1C714EC(
                                                                           this,
                                                                           *(_QWORD *)(*(_QWORD *)v17 + 64LL));
          if ( !this )
          {
            v26 = sub_1C7162C();
            sub_1C714D8(v26, 0);
          }
        }
        if ( v15 >= v17[6] )
          goto LABEL_49;
        v20 = &v17[2 * v15];
        *((_QWORD *)v20 + 4) = v19;
        this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_1C71354(v20 + 8, v19);
        v21 = *p_tweenAlphas_5__3;
        if ( !*p_tweenAlphas_5__3 )
          goto LABEL_40;
        if ( v15 >= v21[6] )
LABEL_49:
          sub_1C71610(this);
        v22 = *(_QWORD *)&v21[2 * v15 + 8];
        if ( !v22 )
          goto LABEL_40;
        *(_DWORD *)(v22 + 32) = 6;
      }
      this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)_4__this->fields.tweenControllers;
      ++v15;
      if ( !this )
        goto LABEL_40;
    }
LABEL_9:
    if ( CombineServantListViewNoticeTween__GetIsTweenAlphaEnabled(
           (CombineServantListViewNoticeTween_o *)this,
           v3->fields._tweenAlphas_5__3,
           v2) )
    {
      break;
    }
    if ( !_4__this->fields.isTween )
      return 0;
    v9 = _4__this->fields.to == 1.0;
    v10 = 0.0;
    if ( _4__this->fields.to != 1.0 )
      v10 = 1.0;
    _4__this->fields.to = v10;
    if ( v9 )
    {
      v25 = (Il2CppObject *)v3->fields._loopWaitOnShow_5__2;
      v3->fields.__2__current = v25;
      v23 = &v3->fields.__2__current;
      sub_1C71354(v23, v25);
      v24 = 4;
      goto LABEL_48;
    }
LABEL_14:
    if ( _4__this->fields.to == 1.0 )
      CombineServantListViewNoticeTween__SetTexts(_4__this, 1, v2);
    v3->fields._tweenAlphas_5__3 = 0;
    this = (CombineServantListViewNoticeTween__TweenLoop_d__13_o *)sub_1C71354(&v3->fields._tweenAlphas_5__3, 0);
  }
  if ( !_4__this->fields.isTween )
    return 0;
  v3->fields.__2__current = 0;
  v23 = &v3->fields.__2__current;
  sub_1C71354(v23, 0);
  v24 = 3;
LABEL_48:
  *((_DWORD *)v23 - 2) = v24;
  return 1;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_CombineServantListViewNoticeTween__TweenLoop_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  if ( (byte_4CC13C4 & 1) == 0 )
  {
    this = (CombineServantListViewNoticeTween___c__DisplayClass9_0_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC13C4 = 1;
  }
  if ( !t )
    sub_1C71608(this, t);
  TweenTarget_k__BackingField = (UnityEngine_Object_o *)t->fields._TweenTarget_k__BackingField;
  tweenTarget = (UnityEngine_Object_o *)v4->fields.tweenTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(TweenTarget_k__BackingField, tweenTarget, 0);
}