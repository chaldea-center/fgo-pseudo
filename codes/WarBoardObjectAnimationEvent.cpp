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
  WarBoardObjectAnimationEvent_c *klass; // x8
  const char *namespaze; // x21
  unsigned int v9; // w22
  __int64 v10; // x0

  if ( (byte_42132EF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    byte_42132EF = 1;
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
        v9 = 0;
        do
        {
          if ( v9 >= LODWORD(klass->_1.namespaze) )
          {
            v10 = sub_B0D9A8(v6);
            sub_B0D948(v10, 0LL);
          }
          v6 = (struct UIWidget_array *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v9);
          if ( !v6 )
            break;
          UIWidget__set_depth((UIWidget_o *)v6, LODWORD(v6->m_Items[17]) + value, 0LL);
          if ( (int)++v9 >= (int)namespaze )
            return;
          klass = this[1].klass;
        }
        while ( klass );
LABEL_19:
        sub_B0D97C(v6);
      }
    }
  }
}


void __fastcall WarBoardObjectAnimationEvent__ForceEndInProgressTask(
        WarBoardObjectAnimationEvent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x8

  if ( (byte_42132F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42132F1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  v3 = *(_QWORD *)&Instance[9].fields.isButtonEnable;
  if ( v3 )
    *(_BYTE *)(v3 + 25) = 1;
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
  struct WebViewObject_o *webView; // x8

  if ( (byte_42132F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42132F2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  webView = Instance[9].fields.webView;
  if ( webView )
    BYTE1(webView->fields.onJS) = 1;
}


void __fastcall WarBoardObjectAnimationEvent__Init(WarBoardObjectAnimationEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarBoardObjectAnimationEvent_c *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *children; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_42132ED & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_42132ED = 1;
  }
  if ( !LOBYTE(this->fields.myWidget) )
  {
    if ( !this[1].klass )
    {
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardObjectAnimationEvent_c *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                                    (UnityEngine_Component_o *)this,
                                                                                                    1,
                                                                                                    (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
      this[1].klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this[1],
        (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
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
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.children = (struct UIWidget_array *)Component_WebViewObject;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.children,
        (System_Int32_array **)Component_WebViewObject,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    LOBYTE(this->fields.myWidget) = 1;
  }
}


void __fastcall WarBoardObjectAnimationEvent__SetDispBgDiff(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  System_Char_array *Instance; // x0
  __int64 v7; // x21
  System_Char_array *v8; // x19
  System_Char_array *v9; // x20
  unsigned __int64 v10; // x22
  unsigned __int64 v11; // x23
  unsigned __int64 v12; // x24
  System_String_o **v13; // x26
  char v14; // w21
  __int64 v15; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42132F0 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, value);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_14598/*"True"*/, v5);
    byte_42132F0 = 1;
  }
  result = 0;
  Instance = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_18;
  if ( !Instance->max_length )
    goto LABEL_17;
  Instance->m_Items[2] = 44;
  if ( !value || (Instance = (System_Char_array *)System_String__Split(value, Instance, 0LL)) == 0LL )
LABEL_18:
    sub_B0D97C(Instance);
  v7 = *(_QWORD *)&Instance->max_length;
  v8 = Instance;
  if ( (int)v7 >= 2 )
  {
    Instance = (System_Char_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v9 = Instance;
    v10 = 0LL;
    v11 = 0LL;
    v12 = (unsigned int)v7 >> 1;
    while ( v10 + 1 < v8->max_length )
    {
      v13 = (System_String_o **)(&v8->obj.klass + v10);
      Instance = (System_Char_array *)System_String__op_Equality(v13[5], (System_String_o *)StringLiteral_14598/*"True"*/, 0LL);
      if ( v10 >= v8->max_length )
        break;
      v14 = (char)Instance;
      Instance = (System_Char_array *)System_Int32__TryParse(v13[4], &result, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_18;
        Instance = *(System_Char_array **)&v9->m_Items[158];
        if ( !Instance )
          goto LABEL_18;
        WarBoardBackgroundComponent__SetDispBgDiff((WarBoardBackgroundComponent_o *)Instance, result, v14 & 1, 0LL);
      }
      ++v11;
      v10 += 2LL;
      if ( v11 >= v12 )
        return;
    }
LABEL_17:
    v15 = sub_B0D9A8(Instance);
    sub_B0D948(v15, 0LL);
  }
}


void __fastcall WarBoardObjectAnimationEvent__SetWidgetDepth(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *nameAndDepth,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Char_array *v6; // x0
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

  if ( (byte_42132EE & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, nameAndDepth);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42132EE = 1;
  }
  result = 0;
  if ( !LOBYTE(this->fields.myWidget) )
    WarBoardObjectAnimationEvent__Init(this, (const MethodInfo *)nameAndDepth);
  v6 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_40;
  if ( !v6->max_length )
    goto LABEL_38;
  v6->m_Items[2] = 44;
  if ( !nameAndDepth || (v6 = (System_Char_array *)System_String__Split(nameAndDepth, v6, 0LL)) == 0LL )
LABEL_40:
    sub_B0D97C(v6);
  v7 = *(_QWORD *)&v6->max_length;
  v8 = v6;
  if ( (int)v7 >= 2 )
  {
    v9 = (unsigned int)v7 >> 1;
    if ( (_DWORD)v9 )
    {
      max_length = (unsigned int)*(_QWORD *)&v6->max_length;
      v11 = 0LL;
      v12 = 0LL;
      while ( 1 )
      {
        v13 = *(System_String_o **)((char *)&v8->m_Items[2] + (v12 << 33 >> 29));
        v14 = v11 | 1;
        result = 0;
        if ( v14 >= max_length )
          goto LABEL_38;
        v6 = (System_Char_array *)System_Int32__TryParse(
                                    *(System_String_o **)&v8->m_Items[4 * (int)v14 + 2],
                                    &result,
                                    0LL);
        if ( ((unsigned __int8)v6 & 1) != 0 )
        {
          children = (UnityEngine_Object_o *)this->fields.children;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v6 = (System_Char_array *)UnityEngine_Object__op_Inequality(children, 0LL, 0LL);
          if ( ((unsigned __int8)v6 & 1) != 0 )
          {
            v6 = (System_Char_array *)this->fields.children;
            if ( !v6 )
              goto LABEL_40;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0LL);
            v6 = (System_Char_array *)System_String__op_Equality(name, v13, 0LL);
            if ( ((unsigned __int8)v6 & 1) != 0 )
            {
              v6 = (System_Char_array *)this->fields.children;
              if ( !v6 )
                goto LABEL_40;
              UIWidget__set_depth((UIWidget_o *)v6, result, 0LL);
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
        v6 = (System_Char_array *)*((_QWORD *)&klass->_1.byval_arg.data + v20);
        if ( !v6 )
          goto LABEL_40;
        v22 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v6, 0LL);
        v6 = (System_Char_array *)System_String__op_Equality(v22, v13, 0LL);
        if ( ((unsigned __int8)v6 & 1) != 0 )
        {
          v23 = this[1].klass;
          if ( !v23 )
            goto LABEL_40;
          if ( (unsigned int)v21 >= LODWORD(v23->_1.namespaze) )
            break;
          v6 = (System_Char_array *)*((_QWORD *)&v23->_1.byval_arg.data + v21);
          if ( !v6 )
            goto LABEL_40;
          UIWidget__set_depth((UIWidget_o *)v6, result, 0LL);
        }
        if ( v19 >= (int)namespaze )
          goto LABEL_36;
        klass = this[1].klass;
        ++v19;
        if ( !klass )
          goto LABEL_40;
      }
LABEL_38:
      v24 = sub_B0D9A8(v6);
      sub_B0D948(v24, 0LL);
    }
  }
}