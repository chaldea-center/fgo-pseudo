void BaseDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4C3CCD2 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3CCD2 = 1;
  }
  *BaseDialog_TypeInfo->static_fields = (struct BaseDialog_StaticFields)xmmword_C0F660;
}


void BaseDialog___ctor(BaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20

  if ( (byte_4C3CCD1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_UIPanel__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_UIPanel__int__TypeInfo);
    byte_4C3CCD1 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_UIPanel__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_UIPanel__int___ctor__);
  this->fields.panelDepthList = (struct System_Collections_Generic_Dictionary_UIPanel__int__o *)v3;
  sub_1C36FFC(&this->fields.panelDepthList, v3);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BaseDialog__Awake(BaseDialog_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_UIPanel__int__o *panelDepthList; // x0
  struct UIPanel_array *basePanelList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  UIPanel_o *v7; // x20

  if ( (byte_4C3CCC9 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_UIPanel__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_UIPanel__int__Clear__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CCC9 = 1;
  }
  if ( this->fields.basePanelList )
  {
    panelDepthList = this->fields.panelDepthList;
    if ( !panelDepthList
      || (System_Collections_Generic_Dictionary_object__int___Clear(
            (System_Collections_Generic_Dictionary_object__int__o *)panelDepthList,
            (const MethodInfo_345AA88 *)Method_System_Collections_Generic_Dictionary_UIPanel__int__Clear__),
          (basePanelList = this->fields.basePanelList) == 0) )
    {
LABEL_18:
      sub_1C372B4(panelDepthList);
    }
    max_length = basePanelList->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C372BC(panelDepthList);
        v7 = basePanelList->m_Items[i];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        panelDepthList = (struct System_Collections_Generic_Dictionary_UIPanel__int__o *)UnityEngine_Object__op_Equality(
                                                                                           (UnityEngine_Object_o *)v7,
                                                                                           0,
                                                                                           0);
        if ( ((unsigned __int8)panelDepthList & 1) == 0 )
        {
          if ( !v7 )
            goto LABEL_18;
          panelDepthList = this->fields.panelDepthList;
          if ( !panelDepthList )
            goto LABEL_18;
          System_Collections_Generic_Dictionary_object__int___Add(
            (System_Collections_Generic_Dictionary_object__int__o *)panelDepthList,
            (Il2CppObject *)v7,
            v7->fields.mDepth,
            (const MethodInfo_345A900 *)Method_System_Collections_Generic_Dictionary_UIPanel__int__Add__);
        }
        LODWORD(max_length) = basePanelList->max_length;
      }
    }
  }
}


void BaseDialog__Close(BaseDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_Object_o *baseWindow; // x20
  __int64 transform; // x0
  const MethodInfo *v7; // x1
  struct UIPanel_array *basePanelList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v10; // x23
  UnityEngine_Object_o *v11; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  BaseDialog_c *v13; // x8
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Object_o *TargetPanel; // x20
  UnityEngine_GameObject_o *v16; // x20
  BaseDialog_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x20
  BaseDialog_c *v19; // x0
  struct BaseDialog_StaticFields *static_fields; // x8
  TweenScale_o *v21; // x20
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x1
  UnityEngine_Transform_o *v25; // x20
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4C3CCCC & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5985/*"EndCloseBaseDialog"*/);
    byte_4C3CCCC = 1;
  }
  this->fields.baseCallbackFunc = callback;
  sub_1C36FFC(&this->fields.baseCallbackFunc, callback);
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(baseWindow, 0, 0);
  if ( (transform & 1) == 0 )
    goto LABEL_42;
  basePanelList = this->fields.basePanelList;
  if ( basePanelList && (max_length = basePanelList->max_length) != 0 )
  {
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= (unsigned int)max_length )
          sub_1C372BC(transform);
        v11 = (UnityEngine_Object_o *)basePanelList->m_Items[v10];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Inequality(v11, 0, 0);
        if ( (transform & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_44;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
          v13 = BaseDialog_TypeInfo;
          v14 = gameObject;
          if ( !BaseDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
            v13 = BaseDialog_TypeInfo;
          }
          transform = (__int64)TweenAlpha__Begin(v14, v13->static_fields->CLOSE_TIME, 0.0, 0);
          if ( !transform )
            goto LABEL_44;
          *(_DWORD *)(transform + 32) = 6;
        }
        basePanelList = this->fields.basePanelList;
        if ( !basePanelList )
          goto LABEL_44;
        LODWORD(max_length) = basePanelList->max_length;
        ++v10;
      }
      while ( (__int64)v10 < (int)max_length );
    }
  }
  else
  {
    TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel(this, v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality(TargetPanel, 0, 0);
    if ( (transform & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_44;
      v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TargetPanel, 0);
      v17 = BaseDialog_TypeInfo;
      if ( !BaseDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
        v17 = BaseDialog_TypeInfo;
      }
      transform = (__int64)TweenAlpha__Begin(v16, v17->static_fields->CLOSE_TIME, 0.0, 0);
      if ( !transform )
        goto LABEL_44;
      *(_DWORD *)(transform + 32) = 6;
    }
  }
  v18 = this->fields.baseWindow;
  v19 = BaseDialog_TypeInfo;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
    v19 = BaseDialog_TypeInfo;
  }
  static_fields = v19->static_fields;
  v26.fields.x = static_fields->DIALOG_CLOSE_SCALE;
  v26.fields.y = v26.fields.x;
  v26.fields.z = v26.fields.x;
  v21 = TweenScale__Begin(v18, static_fields->CLOSE_TIME, v26, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
  if ( (transform & 1) == 0 )
  {
    transform = (__int64)this->fields.baseWindow;
    if ( transform )
    {
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      v25 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4C3C921 )
      {
        transform = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      if ( v25 )
      {
        UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
LABEL_42:
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_5985/*"EndCloseBaseDialog"*/,
          0.1,
          0);
        goto LABEL_43;
      }
    }
LABEL_44:
    sub_1C372B4(transform);
  }
  if ( !v21 )
    goto LABEL_44;
  v21->fields.method = 6;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v21->fields.eventReceiver = v22;
  sub_1C36FFC(&v21->fields.eventReceiver, v22);
  v23 = StringLiteral_5985/*"EndCloseBaseDialog"*/;
  v21->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5985/*"EndCloseBaseDialog"*/;
  sub_1C36FFC(&v21->fields.callWhenFinished, v23);
LABEL_43:
  BaseDialog__ResetPanelDepth(this, v24);
}


void BaseDialog__EndCloseBaseDialog(BaseDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_baseCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *baseCallbackFunc; // t1

  BaseDialog__Init(this, method);
  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = &this->fields.baseCallbackFunc;
  v4 = baseCallbackFunc;
  if ( baseCallbackFunc )
  {
    *p_baseCallbackFunc = 0;
    sub_1C36FFC(p_baseCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void BaseDialog__EndOpenBaseDialog(BaseDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_baseCallbackFunc; // x0
  struct System_Action_o *v3; // x19
  struct System_Action_o *baseCallbackFunc; // t1

  baseCallbackFunc = this->fields.baseCallbackFunc;
  p_baseCallbackFunc = &this->fields.baseCallbackFunc;
  v3 = baseCallbackFunc;
  *((_DWORD *)p_baseCallbackFunc + 6) = 2;
  if ( baseCallbackFunc )
  {
    *p_baseCallbackFunc = 0;
    sub_1C36FFC(p_baseCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v3->fields.invoke_impl)(v3->fields.method_code, v3->fields.method);
  }
}


void BaseDialog__Init(BaseDialog_o *this, const MethodInfo *method)
{
  _BOOL4 refuseInit; // w8
  UnityEngine_GameObject_o *gameObject; // x0

  refuseInit = this->fields.refuseInit;
  this->fields.baseState = 0;
  if ( !refuseInit )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
}


void BaseDialog__OnEnable(BaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  System_String_o *v4; // x0
  UnityEngine_Transform_o *transform; // x20
  System_String_o *v6; // x0
  UnityEngine_Object_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_4C3CCD0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CCD0 = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BaseDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_closeBtnObject.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v3, 0, 0) )
    goto LABEL_14;
  v4 = (System_String_o *)((__int64 (__fastcall *)(BaseDialog_o *, const MethodInfo *))this->klass->vtable._6_get_closeBtnPath.methodPtr)(
                            this,
                            this->klass->vtable._6_get_closeBtnPath.method);
  if ( System_String__IsNullOrEmpty(v4, 0) )
    return;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v6 = (System_String_o *)((__int64 (__fastcall *)(BaseDialog_o *, const MethodInfo *))this->klass->vtable._6_get_closeBtnPath.methodPtr)(
                            this,
                            this->klass->vtable._6_get_closeBtnPath.method);
  if ( !transform )
LABEL_15:
    sub_1C372B4(v6);
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, v6, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (System_String_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( v7 )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0);
      ((void (__fastcall *)(BaseDialog_o *, UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._5_set_closeBtnObject.methodPtr)(
        this,
        gameObject,
        this->klass->vtable._5_set_closeBtnObject.method);
LABEL_14:
      v9 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(BaseDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                         this,
                                         this->klass->vtable._4_get_closeBtnObject.method);
      AndroidBackKeyManager__AddBackBtn(v9, 0);
      return;
    }
    goto LABEL_15;
  }
}


void BaseDialog__Open(
        BaseDialog_o *this,
        System_Action_o *callback,
        int32_t type,
        bool isLateScale,
        const MethodInfo *method)
{
  long double v5; // q8
  __int64 v10; // x21
  __int64 transform; // x0
  UnityEngine_Object_o *baseWindow; // x24
  UnityEngine_Transform_o *v13; // x24
  BaseDialog_c *v14; // x8
  UnityEngine_Object_o *maskSprite; // x23
  __int64 *v16; // x8
  UnityEngine_Object_o *v17; // x22
  const MethodInfo *v18; // x1
  struct UIPanel_array *basePanelList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v21; // x23
  UnityEngine_Object_o *v22; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  BaseDialog_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_Object_o *TargetPanel; // x22
  UnityEngine_GameObject_o *v27; // x22
  BaseDialog_c *v28; // x8
  System_Action_o *v29; // x20
  System_Collections_IEnumerator_o *v30; // x0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3CCCB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BaseDialog_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_BaseDialog___c__DisplayClass23_0__Open_g__TweenScaleWindow_0__);
    sub_1C37058(&BaseDialog___c__DisplayClass23_0_TypeInfo);
    sub_1C37058(&StringLiteral_21434/*"mask00"*/);
    sub_1C37058(&StringLiteral_17297/*"black00"*/);
    sub_1C37058(&StringLiteral_18000/*"clear00"*/);
    byte_4C3CCCB = 1;
  }
  v10 = sub_1C372A4(BaseDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_60;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C36FFC(v10 + 16, this);
  if ( isLateScale )
  {
    baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
    {
      transform = (__int64)this->fields.baseWindow;
      if ( !transform )
        goto LABEL_60;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      v13 = (UnityEngine_Transform_o *)transform;
      v14 = BaseDialog_TypeInfo;
      if ( !BaseDialog_TypeInfo->_2.cctor_finished )
      {
        transform = j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
        v14 = BaseDialog_TypeInfo;
      }
      if ( !v13 )
        goto LABEL_60;
      v31.fields.x = v14->static_fields->DIALOG_INITIAL_SCALE;
      v31.fields.y = v31.fields.x;
      v31.fields.z = v31.fields.x;
      UnityEngine_Transform__set_localScale(v13, v31, 0);
    }
  }
  transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
  this->fields.baseCallbackFunc = callback;
  sub_1C36FFC(&this->fields.baseCallbackFunc, callback);
  *(_BYTE *)(v10 + 24) = 1;
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
    goto LABEL_27;
  if ( type == 2 )
  {
    transform = (__int64)this->fields.maskSprite;
    if ( !transform )
      goto LABEL_60;
    v16 = &StringLiteral_17297/*"black00"*/;
  }
  else if ( type == 1 )
  {
    transform = (__int64)this->fields.maskSprite;
    if ( !transform )
      goto LABEL_60;
    v16 = &StringLiteral_21434/*"mask00"*/;
  }
  else
  {
    if ( type )
      goto LABEL_27;
    transform = (__int64)this->fields.maskSprite;
    if ( !transform )
      goto LABEL_60;
    v16 = &StringLiteral_18000/*"clear00"*/;
  }
  UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)*v16, 0);
LABEL_27:
  v17 = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = UnityEngine_Object__op_Inequality(v17, 0, 0);
  if ( (transform & 1) != 0 )
  {
    basePanelList = this->fields.basePanelList;
    if ( basePanelList )
    {
      max_length = basePanelList->max_length;
      if ( max_length )
      {
        if ( (int)max_length >= 1 )
        {
          LODWORD(v5) = 1000593162;
          v21 = 0;
          do
          {
            if ( v21 >= (unsigned int)max_length )
              sub_1C372BC(transform);
            v22 = (UnityEngine_Object_o *)basePanelList->m_Items[v21];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = UnityEngine_Object__op_Inequality(v22, 0, 0);
            if ( (transform & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_60;
              ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, long double))v22->klass[1]._1.element_class)(
                v22,
                v22->klass[1]._1.castClass,
                v5);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
              v24 = BaseDialog_TypeInfo;
              v25 = gameObject;
              if ( !BaseDialog_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
                v24 = BaseDialog_TypeInfo;
              }
              transform = (__int64)TweenAlpha__Begin(v25, v24->static_fields->OPEN_TIME, 1.0, 0);
              if ( !transform )
                goto LABEL_60;
              *(_DWORD *)(transform + 32) = 6;
            }
            basePanelList = this->fields.basePanelList;
            if ( !basePanelList )
              goto LABEL_60;
            LODWORD(max_length) = basePanelList->max_length;
            ++v21;
          }
          while ( (__int64)v21 < (int)max_length );
        }
        goto LABEL_54;
      }
    }
    TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel(this, v18);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = UnityEngine_Object__op_Inequality(TargetPanel, 0, 0);
    if ( (transform & 1) == 0 )
    {
LABEL_54:
      if ( isLateScale )
      {
        v29 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v29,
          (Il2CppObject *)v10,
          Method_BaseDialog___c__DisplayClass23_0__Open_g__TweenScaleWindow_0__,
          0);
        v30 = BasicHelper__DelayCall(0.0, v29, 1, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v30, 0);
      }
      else
      {
        BaseDialog___c__DisplayClass23_0___Open_g__TweenScaleWindow_0((BaseDialog___c__DisplayClass23_0_o *)v10, v18);
      }
      goto LABEL_57;
    }
    if ( TargetPanel )
    {
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))TargetPanel->klass[1]._1.element_class)(
        TargetPanel,
        TargetPanel->klass[1]._1.castClass,
        0.005);
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)TargetPanel, 0);
      v28 = BaseDialog_TypeInfo;
      if ( !BaseDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
        v28 = BaseDialog_TypeInfo;
      }
      transform = (__int64)TweenAlpha__Begin(v27, v28->static_fields->OPEN_TIME, 1.0, 0);
      if ( transform )
      {
        *(_DWORD *)(transform + 32) = 6;
        goto LABEL_54;
      }
    }
LABEL_60:
    sub_1C372B4(transform);
  }
LABEL_57:
  if ( *(_BYTE *)(v10 + 24) )
    BaseDialog__EndOpenBaseDialog(this, v18);
}


void BaseDialog__ResetPanelDepth(BaseDialog_o *this, const MethodInfo *method)
{
  BaseDialog_o *v2; // x19
  struct UIPanel_array *basePanelList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x22
  UnityEngine_Object_o *v6; // x20
  int32_t value; // [xsp+Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4C3CCCE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_UIPanel__int__TryGetValue__);
    this = (BaseDialog_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CCCE = 1;
  }
  value = 0;
  basePanelList = v2->fields.basePanelList;
  if ( !basePanelList )
LABEL_17:
    sub_1C372B4(this);
  max_length = basePanelList->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C372BC(this);
      v6 = (UnityEngine_Object_o *)basePanelList->m_Items[v5];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BaseDialog_o *)UnityEngine_Object__op_Equality(v6, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BaseDialog_o *)v2->fields.panelDepthList;
        if ( !this )
          goto LABEL_17;
        this = (BaseDialog_o *)System_Collections_Generic_Dictionary_object__int___TryGetValue(
                                 (System_Collections_Generic_Dictionary_object__int__o *)this,
                                 (Il2CppObject *)v6,
                                 &value,
                                 (const MethodInfo_345C0BC *)Method_System_Collections_Generic_Dictionary_UIPanel__int__TryGetValue__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v6 )
            goto LABEL_17;
          UIPanel__set_depth((UIPanel_o *)v6, value, 0);
        }
      }
      LODWORD(max_length) = basePanelList->max_length;
      ++v5;
    }
    while ( (__int64)v5 < (int)max_length );
  }
}


void BaseDialog__SafeClose(BaseDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  if ( this->fields.baseState == 2 )
  {
    this->fields.baseState = 3;
    BaseDialog__Close(this, callback, method);
  }
}


void BaseDialog__SafeOpen(BaseDialog_o *this, System_Action_o *callback, int32_t type, const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( !this->fields.baseState )
  {
    this->fields.baseState = 1;
    BaseDialog__Open(this, callback, type, 0, v4);
  }
}


void BaseDialog__SetMask(BaseDialog_o *this, bool forceMaskClear, const MethodInfo *method)
{
  long double v3; // q8
  __int64 gameObject; // x0
  UnityEngine_Object_o *maskSprite; // x21
  const MethodInfo *v8; // x1
  __int64 *v9; // x8
  struct UIPanel_array *basePanelList; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v12; // x21
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Object_o *TargetPanel; // x20
  UnityEngine_Object_o *baseWindow; // x20
  UnityEngine_Transform_o *v16; // x19

  if ( (byte_4C3CCCA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_21434/*"mask00"*/);
    sub_1C37058(&StringLiteral_18000/*"clear00"*/);
    byte_4C3CCCA = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(maskSprite, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_38;
    v9 = &StringLiteral_18000/*"clear00"*/;
    if ( !forceMaskClear )
      v9 = &StringLiteral_21434/*"mask00"*/;
    UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)*v9, 0);
  }
  basePanelList = this->fields.basePanelList;
  if ( basePanelList && (max_length = basePanelList->max_length) != 0 )
  {
    if ( (int)max_length >= 1 )
    {
      LODWORD(v3) = 1000593162;
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)max_length )
          sub_1C372BC(gameObject);
        v13 = (UnityEngine_Object_o *)basePanelList->m_Items[v12];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = UnityEngine_Object__op_Inequality(v13, 0, 0);
        if ( (gameObject & 1) != 0 )
        {
          if ( !v13 )
            break;
          gameObject = ((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, long double))v13->klass[1]._1.element_class)(
                         v13,
                         v13->klass[1]._1.castClass,
                         v3);
        }
        basePanelList = this->fields.basePanelList;
        if ( !basePanelList )
          break;
        LODWORD(max_length) = basePanelList->max_length;
        if ( (__int64)++v12 >= (int)max_length )
          goto LABEL_29;
      }
LABEL_38:
      sub_1C372B4(gameObject);
    }
  }
  else
  {
    TargetPanel = (UnityEngine_Object_o *)BaseDialog__get_TargetPanel(this, v8);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality(TargetPanel, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      if ( !TargetPanel )
        goto LABEL_38;
      ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))TargetPanel->klass[1]._1.element_class)(
        TargetPanel,
        TargetPanel->klass[1]._1.castClass,
        0.005);
    }
  }
LABEL_29:
  baseWindow = (UnityEngine_Object_o *)this->fields.baseWindow;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseWindow, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseWindow;
    if ( !gameObject )
      goto LABEL_38;
    gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
    v16 = (UnityEngine_Transform_o *)gameObject;
    if ( !byte_4C3C921 )
    {
      gameObject = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    if ( !v16 )
      goto LABEL_38;
    UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  }
}


void BaseDialog__SetMaskSpritePosition(BaseDialog_o *this, UnityEngine_Vector3_o pos, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_1C372B4(0);
  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  gameObject = UnityEngine_Component__get_gameObject(maskSprite, 0);
  v8.fields.y = y;
  v8.fields.z = z;
  v8.fields.x = x;
  GameObjectExtensions__SetLocalPosition(gameObject, v8, 0);
}


void BaseDialog__SetMaskTouchCloseEnabled(BaseDialog_o *this, bool canClose, const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  struct UISprite_o *v6; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C3CCCD & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UITouchPress___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CCCD = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(maskSprite, 0, 0) )
  {
    v6 = this->fields.maskSprite;
    if ( v6 )
    {
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v6,
                           (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UITouchPress___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v6 = (struct UISprite_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)v6 & 1) != 0 )
        return;
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, canClose, 0);
        return;
      }
    }
    sub_1C372B4(v6);
  }
}


void BaseDialog__SetPanelDepth(BaseDialog_o *this, int32_t depth, const MethodInfo *method)
{
  struct UIPanel_array *basePanelList; // x20
  int max_length; // w8
  unsigned int v6; // w21

  basePanelList = this->fields.basePanelList;
  if ( !basePanelList )
    goto LABEL_9;
  max_length = basePanelList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C372BC(this);
      this = (BaseDialog_o *)basePanelList->m_Items[v6];
      if ( !this )
        break;
      UIPanel__set_depth((UIPanel_o *)this, depth, 0);
      max_length = basePanelList->max_length;
      if ( (int)++v6 >= max_length )
        return;
    }
LABEL_9:
    sub_1C372B4(this);
  }
}


int32_t BaseDialog__get_GetState(BaseDialog_o *this, const MethodInfo *method)
{
  return this->fields.baseState;
}


bool BaseDialog__get_IsBusy(BaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


UIPanel_o *BaseDialog__get_TargetPanel(BaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C3CCC8 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_UIPanel___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CCC8 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(basePanel, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_17;
    basePanel = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                          gameObject,
                                          (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(basePanel, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0);
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
            return (UIPanel_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                  gameObject,
                                  (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_UIPanel___);
        }
      }
    }
LABEL_17:
    sub_1C372B4(gameObject);
  }
  return (UIPanel_o *)basePanel;
}


UnityEngine_GameObject_o *BaseDialog__get_closeBtnObject(BaseDialog_o *this, const MethodInfo *method)
{
  return this->fields._closeBtnObject;
}


System_String_o *BaseDialog__get_closeBtnPath(BaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3CCCF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3CCCF = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}


void BaseDialog__set_closeBtnObject(BaseDialog_o *this, UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  this->fields._closeBtnObject = value;
  sub_1C36FFC(&this->fields._closeBtnObject, value);
}


void BaseDialog___c__DisplayClass23_0___ctor(BaseDialog___c__DisplayClass23_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BaseDialog___c__DisplayClass23_0___Open_g__TweenScaleWindow_0(
        BaseDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  BaseDialog___c__DisplayClass23_0_o *v2; // x19
  struct BaseDialog_o *_4__this; // x8
  BaseDialog_c *v4; // x8
  BaseDialog___c__DisplayClass23_0_o *v5; // x20
  struct BaseDialog_o *v6; // x8
  UnityEngine_GameObject_o *baseWindow; // x20
  float OPEN_TIME; // s8
  TweenScale_o *v9; // x20
  struct BaseDialog_o *v10; // x8
  char v11; // w22
  BaseDialog___c__DisplayClass23_0_o *v12; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C3CCD3 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (BaseDialog___c__DisplayClass23_0_o *)sub_1C37058(&StringLiteral_6018/*"EndOpenBaseDialog"*/);
    byte_4C3CCD3 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_26;
  this = (BaseDialog___c__DisplayClass23_0_o *)_4__this->fields.baseWindow;
  if ( !this )
    goto LABEL_26;
  this = (BaseDialog___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
  v4 = BaseDialog_TypeInfo;
  v5 = this;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
  {
    this = (BaseDialog___c__DisplayClass23_0_o *)j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
    v4 = BaseDialog_TypeInfo;
  }
  if ( !v5 )
    goto LABEL_26;
  v15.fields.x = v4->static_fields->DIALOG_INITIAL_SCALE;
  v15.fields.y = v15.fields.x;
  v15.fields.z = v15.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v5, v15, 0);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_26;
  baseWindow = v6->fields.baseWindow;
  OPEN_TIME = BaseDialog_TypeInfo->static_fields->OPEN_TIME;
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  v9 = TweenScale__Begin(baseWindow, OPEN_TIME, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BaseDialog___c__DisplayClass23_0_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_26;
  v11 = (char)this;
  this = (BaseDialog___c__DisplayClass23_0_o *)v10->fields.baseWindow;
  if ( !this )
    goto LABEL_26;
  this = (BaseDialog___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0);
  v12 = this;
  if ( (v11 & 1) != 0 )
  {
    this = (BaseDialog___c__DisplayClass23_0_o *)BaseDialog_TypeInfo;
    if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
      this = (BaseDialog___c__DisplayClass23_0_o *)BaseDialog_TypeInfo;
    }
    if ( v12 )
    {
      v16.fields.x = *(float *)(*(_QWORD *)&this[5].fields.isCallback + 8LL);
      v16.fields.y = v16.fields.x;
      v16.fields.z = v16.fields.x;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v12, v16, 0);
      if ( v9 )
      {
        v9->fields.method = 6;
        this = (BaseDialog___c__DisplayClass23_0_o *)v2->fields.__4__this;
        if ( this )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v9->fields.eventReceiver = gameObject;
          sub_1C36FFC(&v9->fields.eventReceiver, gameObject);
          v14 = StringLiteral_6018/*"EndOpenBaseDialog"*/;
          v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6018/*"EndOpenBaseDialog"*/;
          sub_1C36FFC(&v9->fields.callWhenFinished, v14);
          v2->fields.isCallback = 0;
          return;
        }
      }
    }
LABEL_26:
    sub_1C372B4(this);
  }
  if ( !byte_4C3C926 )
  {
    this = (BaseDialog___c__DisplayClass23_0_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v12 )
    goto LABEL_26;
  UnityEngine_Transform__set_localScale(
    (UnityEngine_Transform_o *)v12,
    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
    0);
}