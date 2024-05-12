void __fastcall WarBoardObjectAnimationEvent___ctor(WarBoardObjectAnimationEvent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardObjectAnimationEvent__AllWidgetDepthIncrement(
        WarBoardObjectAnimationEvent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *children; // x21
  struct UIWidget_array *v6; // x0
  __int64 v7; // x1
  WarBoardObjectAnimationEvent_c *klass; // x8
  const char *namespaze; // x21
  unsigned int v10; // w22
  __int64 v11; // x0

  if ( (byte_438AEAE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AEAE = 1;
  }
  if ( !LOBYTE(this->fields.myWidget) )
    WarBoardObjectAnimationEvent__Init(this, *(const MethodInfo **)&value);
  children = (UnityEngine_Object_o *)this->fields.children;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (struct UIWidget_array *)UnityEngine_Object__op_Inequality(children, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v6 = this->fields.children;
    if ( !v6 )
      goto LABEL_19;
    UIWidget__set_depth((UIWidget_o *)v6, LODWORD(v6->m_Items[17]) + value, 0LL);
  }
  klass = this[1].klass;
  if ( klass )
  {
    namespaze = klass->_1.namespaze;
    if ( namespaze )
    {
      if ( (int)namespaze >= 1 )
      {
        v10 = 0;
        do
        {
          if ( v10 >= LODWORD(klass->_1.namespaze) )
          {
            v11 = sub_B776C8(v6);
            sub_B77668(v11, 0LL);
          }
          v6 = (struct UIWidget_array *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v10);
          if ( !v6 )
            break;
          UIWidget__set_depth((UIWidget_o *)v6, LODWORD(v6->m_Items[17]) + value, 0LL);
          if ( (int)++v10 >= (int)namespaze )
            return;
          klass = this[1].klass;
        }
        while ( klass );
LABEL_19:
        sub_B7769C(v6, v7);
      }
    }
  }
}


void __fastcall WarBoardObjectAnimationEvent__ForceEndInProgressTask(
        WarBoardObjectAnimationEvent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x8

  if ( (byte_438AEB0 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438AEB0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  v4 = *(_QWORD *)&Instance[9].fields.isButtonEnable;
  if ( v4 )
    *(_BYTE *)(v4 + 25) = 1;
}


void __fastcall WarBoardObjectAnimationEvent__ForceEndTask(
        WarBoardObjectAnimationEvent_o *this,
        WarBoardTaskBase_o *task,
        const MethodInfo *method)
{
  if ( task )
    task->fields.IsForceEnd = 1;
}


void __fastcall WarBoardObjectAnimationEvent__ForceEndWallBreakAnimTask(
        WarBoardObjectAnimationEvent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  struct WebViewObject_o *webView; // x8

  if ( (byte_438AEB1 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438AEB1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v3);
  webView = Instance[9].fields.webView;
  if ( webView )
    BYTE1(webView->fields.onJS) = 1;
}


void __fastcall WarBoardObjectAnimationEvent__Init(WarBoardObjectAnimationEvent_o *this, const MethodInfo *method)
{
  WarBoardObjectAnimationEvent_c *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *children; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438AEAC & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69484016);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AEAC = 1;
  }
  if ( !LOBYTE(this->fields.myWidget) )
  {
    if ( !this[1].klass )
    {
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardObjectAnimationEvent_c *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                                    (UnityEngine_Component_o *)this,
                                                                                                    1,
                                                                                                    (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69484016);
      this[1].klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      sub_B77560(
        (BattleServantConfConponent_o *)&this[1],
        (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
        v4,
        v5,
        v6,
        v7,
        v8,
        v9);
    }
    children = (UnityEngine_Object_o *)this->fields.children;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(children, 0LL, 0LL) )
    {
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.children = (struct UIWidget_array *)Component_WebViewObject;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.children,
        (System_Int32_array **)Component_WebViewObject,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    LOBYTE(this->fields.myWidget) = 1;
  }
}


void __fastcall WarBoardObjectAnimationEvent__SetDispBgDiff(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_Char_array *Instance; // x0
  System_Char_array *v5; // x1
  __int64 v6; // x21
  System_Char_array *v7; // x19
  System_Char_array *v8; // x20
  unsigned __int64 v9; // x22
  unsigned __int64 v10; // x23
  unsigned __int64 v11; // x24
  System_String_o **v12; // x26
  char v13; // w21
  __int64 v14; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438AEAF & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&StringLiteral_14804/*"True"*/);
    byte_438AEAF = 1;
  }
  result = 0;
  Instance = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_18;
  v5 = Instance;
  if ( !Instance->max_length )
    goto LABEL_17;
  Instance->m_Items[2] = 44;
  if ( !value || (Instance = (System_Char_array *)System_String__Split(value, Instance, 0LL)) == 0LL )
LABEL_18:
    sub_B7769C(Instance, v5);
  v6 = *(_QWORD *)&Instance->max_length;
  v7 = Instance;
  if ( (int)v6 >= 2 )
  {
    Instance = (System_Char_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v8 = Instance;
    v9 = 0LL;
    v10 = 0LL;
    v11 = (unsigned int)v6 >> 1;
    while ( v9 + 1 < v7->max_length )
    {
      v12 = (System_String_o **)(&v7->obj.klass + v9);
      Instance = (System_Char_array *)System_String__op_Equality(v12[5], (System_String_o *)StringLiteral_14804/*"True"*/, 0LL);
      if ( v9 >= v7->max_length )
        break;
      v13 = (char)Instance;
      Instance = (System_Char_array *)System_Int32__TryParse(v12[4], &result, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_18;
        Instance = *(System_Char_array **)&v8->m_Items[158];
        if ( !Instance )
          goto LABEL_18;
        WarBoardBackgroundComponent__SetDispBgDiff((WarBoardBackgroundComponent_o *)Instance, result, v13 & 1, 0LL);
      }
      ++v10;
      v9 += 2LL;
      if ( v10 >= v11 )
        return;
    }
LABEL_17:
    v14 = sub_B776C8(Instance);
    sub_B77668(v14, 0LL);
  }
}


void __fastcall WarBoardObjectAnimationEvent__SetWidgetDepth(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *nameAndDepth,
        const MethodInfo *method)
{
  System_Char_array *v5; // x0
  System_Char_array *v6; // x1
  __int64 v7; // x8
  System_Char_array *v8; // x20
  unsigned __int64 v9; // x23
  unsigned __int64 max_length; // x8
  __int64 v11; // x9
  __int64 v12; // x24
  System_String_o *v13; // x21
  unsigned __int64 v14; // x9
  UnityEngine_Object_o *children; // x22
  System_String_o *name; // x0
  WarBoardObjectAnimationEvent_c *klass; // x8
  const char *namespaze; // x22
  int v19; // w26
  int v20; // w9
  __int64 v21; // x27
  System_String_o *v22; // x0
  WarBoardObjectAnimationEvent_c *v23; // x8
  __int64 v24; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_438AEAD & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AEAD = 1;
  }
  result = 0;
  if ( !LOBYTE(this->fields.myWidget) )
    WarBoardObjectAnimationEvent__Init(this, (const MethodInfo *)nameAndDepth);
  v5 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_40;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_38;
  v5->m_Items[2] = 44;
  if ( !nameAndDepth || (v5 = (System_Char_array *)System_String__Split(nameAndDepth, v5, 0LL)) == 0LL )
LABEL_40:
    sub_B7769C(v5, v6);
  v7 = *(_QWORD *)&v5->max_length;
  v8 = v5;
  if ( (int)v7 >= 2 )
  {
    v9 = (unsigned int)v7 >> 1;
    if ( (_DWORD)v9 )
    {
      max_length = (unsigned int)*(_QWORD *)&v5->max_length;
      v11 = 0LL;
      v12 = 0LL;
      while ( 1 )
      {
        v13 = *(System_String_o **)((char *)&v8->m_Items[2] + (v12 << 33 >> 29));
        v14 = v11 | 1;
        result = 0;
        if ( v14 >= max_length )
          goto LABEL_38;
        v5 = (System_Char_array *)System_Int32__TryParse(
                                    *(System_String_o **)&v8->m_Items[4 * (int)v14 + 2],
                                    &result,
                                    0LL);
        if ( ((unsigned __int8)v5 & 1) != 0 )
        {
          children = (UnityEngine_Object_o *)this->fields.children;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v5 = (System_Char_array *)UnityEngine_Object__op_Inequality(children, 0LL, 0LL);
          if ( ((unsigned __int8)v5 & 1) != 0 )
          {
            v5 = (System_Char_array *)this->fields.children;
            if ( !v5 )
              goto LABEL_40;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0LL);
            v5 = (System_Char_array *)System_String__op_Equality(name, v13, 0LL);
            if ( ((unsigned __int8)v5 & 1) != 0 )
            {
              v5 = (System_Char_array *)this->fields.children;
              if ( !v5 )
                goto LABEL_40;
              UIWidget__set_depth((UIWidget_o *)v5, result, 0LL);
            }
          }
          klass = this[1].klass;
          if ( klass )
          {
            namespaze = klass->_1.namespaze;
            if ( namespaze )
            {
              if ( (int)namespaze >= 1 )
                break;
            }
          }
        }
LABEL_36:
        if ( ++v12 >= v9 )
          return;
        max_length = v8->max_length;
        v11 = 2 * v12;
        if ( 2 * v12 >= max_length )
          goto LABEL_38;
      }
      v19 = 1;
      while ( 1 )
      {
        v20 = v19 - 1;
        if ( (unsigned int)(v19 - 1) >= LODWORD(klass->_1.namespaze) )
          break;
        v21 = v20;
        v5 = (System_Char_array *)*((_QWORD *)&klass->_1.byval_arg.data + v20);
        if ( !v5 )
          goto LABEL_40;
        v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v5, 0LL);
        v5 = (System_Char_array *)System_String__op_Equality(v22, v13, 0LL);
        if ( ((unsigned __int8)v5 & 1) != 0 )
        {
          v23 = this[1].klass;
          if ( !v23 )
            goto LABEL_40;
          if ( (unsigned int)v21 >= LODWORD(v23->_1.namespaze) )
            break;
          v5 = (System_Char_array *)*((_QWORD *)&v23->_1.byval_arg.data + v21);
          if ( !v5 )
            goto LABEL_40;
          UIWidget__set_depth((UIWidget_o *)v5, result, 0LL);
        }
        if ( v19 >= (int)namespaze )
          goto LABEL_36;
        klass = this[1].klass;
        ++v19;
        if ( !klass )
          goto LABEL_40;
      }
LABEL_38:
      v24 = sub_B776C8(v5);
      sub_B77668(v24, 0LL);
    }
  }
}