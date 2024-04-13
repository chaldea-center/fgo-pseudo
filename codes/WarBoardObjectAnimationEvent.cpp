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
  __int64 v3; // x3
  UnityEngine_Object_o *children; // x21
  struct UIWidget_array *v7; // x0
  __int64 v8; // x1
  WarBoardObjectAnimationEvent_c *klass; // x8
  const char *namespaze; // x21
  unsigned int v11; // w22
  __int64 v12; // x0

  if ( (byte_42E75C3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, (_DWORD)method, v3);
    byte_42E75C3 = 1;
  }
  if ( !LOBYTE(this->fields.myWidget) )
    WarBoardObjectAnimationEvent__Init(this, *(const MethodInfo **)&value);
  children = (UnityEngine_Object_o *)this->fields.children;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (struct UIWidget_array *)UnityEngine_Object__op_Inequality(children, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v7 = this->fields.children;
    if ( !v7 )
      goto LABEL_19;
    UIWidget__set_depth((UIWidget_o *)v7, LODWORD(v7->m_Items[17]) + value, 0LL);
  }
  klass = this[1].klass;
  if ( klass )
  {
    namespaze = klass->_1.namespaze;
    if ( namespaze )
    {
      if ( (int)namespaze >= 1 )
      {
        v11 = 0;
        do
        {
          if ( v11 >= LODWORD(klass->_1.namespaze) )
          {
            v12 = sub_B5D6C8(v7);
            sub_B5D668(v12, 0LL);
          }
          v7 = (struct UIWidget_array *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v11);
          if ( !v7 )
            break;
          UIWidget__set_depth((UIWidget_o *)v7, LODWORD(v7->m_Items[17]) + value, 0LL);
          if ( (int)++v11 >= (int)namespaze )
            return;
          klass = this[1].klass;
        }
        while ( klass );
LABEL_19:
        sub_B5D69C(v7, v8);
      }
    }
  }
}


void __fastcall WarBoardObjectAnimationEvent__ForceEndInProgressTask(
        WarBoardObjectAnimationEvent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x8

  if ( (byte_42E75C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E75C5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  v6 = *(_QWORD *)&Instance[9].fields.isButtonEnable;
  if ( v6 )
    *(_BYTE *)(v6 + 25) = 1;
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
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  struct WebViewObject_o *webView; // x8

  if ( (byte_42E75C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E75C6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  webView = Instance[9].fields.webView;
  if ( webView )
    BYTE1(webView->fields.onJS) = 1;
}


void __fastcall WarBoardObjectAnimationEvent__Init(WarBoardObjectAnimationEvent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarBoardObjectAnimationEvent_c *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *children; // x21
  WebViewObject_o *Component_WebViewObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42E75C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E75C1 = 1;
  }
  if ( !LOBYTE(this->fields.myWidget) )
  {
    if ( !this[1].klass )
    {
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardObjectAnimationEvent_c *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                                    (UnityEngine_Component_o *)this,
                                                                                                    1,
                                                                                                    (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
      this[1].klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this[1],
        (System_Int32_array **)ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
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
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.children = (struct UIWidget_array *)Component_WebViewObject;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.children,
        (System_Int32_array **)Component_WebViewObject,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    LOBYTE(this->fields.myWidget) = 1;
  }
}


void __fastcall WarBoardObjectAnimationEvent__SetDispBgDiff(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Char_array *Instance; // x0
  System_Char_array *v12; // x1
  __int64 v13; // x21
  System_Char_array *v14; // x19
  System_Char_array *v15; // x20
  unsigned __int64 v16; // x22
  unsigned __int64 v17; // x23
  unsigned __int64 v18; // x24
  System_String_o **v19; // x26
  char v20; // w21
  __int64 v21; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E75C4 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_14710/*"True"*/, v8, v9, v10);
    byte_42E75C4 = 1;
  }
  result = 0;
  Instance = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_18;
  v12 = Instance;
  if ( !Instance->max_length )
    goto LABEL_17;
  Instance->m_Items[2] = 44;
  if ( !value || (Instance = (System_Char_array *)System_String__Split(value, Instance, 0LL)) == 0LL )
LABEL_18:
    sub_B5D69C(Instance, v12);
  v13 = *(_QWORD *)&Instance->max_length;
  v14 = Instance;
  if ( (int)v13 >= 2 )
  {
    Instance = (System_Char_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v15 = Instance;
    v16 = 0LL;
    v17 = 0LL;
    v18 = (unsigned int)v13 >> 1;
    while ( v16 + 1 < v14->max_length )
    {
      v19 = (System_String_o **)(&v14->obj.klass + v16);
      Instance = (System_Char_array *)System_String__op_Equality(v19[5], (System_String_o *)StringLiteral_14710/*"True"*/, 0LL);
      if ( v16 >= v14->max_length )
        break;
      v20 = (char)Instance;
      Instance = (System_Char_array *)System_Int32__TryParse(v19[4], &result, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v15 )
          goto LABEL_18;
        Instance = *(System_Char_array **)&v15->m_Items[158];
        if ( !Instance )
          goto LABEL_18;
        WarBoardBackgroundComponent__SetDispBgDiff((WarBoardBackgroundComponent_o *)Instance, result, v20 & 1, 0LL);
      }
      ++v17;
      v16 += 2LL;
      if ( v17 >= v18 )
        return;
    }
LABEL_17:
    v21 = sub_B5D6C8(Instance);
    sub_B5D668(v21, 0LL);
  }
}


void __fastcall WarBoardObjectAnimationEvent__SetWidgetDepth(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *nameAndDepth,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Char_array *v9; // x0
  System_Char_array *v10; // x1
  __int64 v11; // x8
  System_Char_array *v12; // x20
  unsigned __int64 v13; // x23
  unsigned __int64 max_length; // x8
  __int64 v15; // x9
  __int64 v16; // x24
  System_String_o *v17; // x21
  unsigned __int64 v18; // x9
  UnityEngine_Object_o *children; // x22
  System_String_o *name; // x0
  WarBoardObjectAnimationEvent_c *klass; // x8
  const char *namespaze; // x22
  int v23; // w26
  int v24; // w9
  __int64 v25; // x27
  System_String_o *v26; // x0
  WarBoardObjectAnimationEvent_c *v27; // x8
  __int64 v28; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E75C2 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)nameAndDepth, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E75C2 = 1;
  }
  result = 0;
  if ( !LOBYTE(this->fields.myWidget) )
    WarBoardObjectAnimationEvent__Init(this, (const MethodInfo *)nameAndDepth);
  v9 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v9 )
    goto LABEL_40;
  v10 = v9;
  if ( !v9->max_length )
    goto LABEL_38;
  v9->m_Items[2] = 44;
  if ( !nameAndDepth || (v9 = (System_Char_array *)System_String__Split(nameAndDepth, v9, 0LL)) == 0LL )
LABEL_40:
    sub_B5D69C(v9, v10);
  v11 = *(_QWORD *)&v9->max_length;
  v12 = v9;
  if ( (int)v11 >= 2 )
  {
    v13 = (unsigned int)v11 >> 1;
    if ( (_DWORD)v13 )
    {
      max_length = (unsigned int)*(_QWORD *)&v9->max_length;
      v15 = 0LL;
      v16 = 0LL;
      while ( 1 )
      {
        v17 = *(System_String_o **)((char *)&v12->m_Items[2] + (v16 << 33 >> 29));
        v18 = v15 | 1;
        result = 0;
        if ( v18 >= max_length )
          goto LABEL_38;
        v9 = (System_Char_array *)System_Int32__TryParse(
                                    *(System_String_o **)&v12->m_Items[4 * (int)v18 + 2],
                                    &result,
                                    0LL);
        if ( ((unsigned __int8)v9 & 1) != 0 )
        {
          children = (UnityEngine_Object_o *)this->fields.children;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v9 = (System_Char_array *)UnityEngine_Object__op_Inequality(children, 0LL, 0LL);
          if ( ((unsigned __int8)v9 & 1) != 0 )
          {
            v9 = (System_Char_array *)this->fields.children;
            if ( !v9 )
              goto LABEL_40;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v9, 0LL);
            v9 = (System_Char_array *)System_String__op_Equality(name, v17, 0LL);
            if ( ((unsigned __int8)v9 & 1) != 0 )
            {
              v9 = (System_Char_array *)this->fields.children;
              if ( !v9 )
                goto LABEL_40;
              UIWidget__set_depth((UIWidget_o *)v9, result, 0LL);
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
        if ( ++v16 >= v13 )
          return;
        max_length = v12->max_length;
        v15 = 2 * v16;
        if ( 2 * v16 >= max_length )
          goto LABEL_38;
      }
      v23 = 1;
      while ( 1 )
      {
        v24 = v23 - 1;
        if ( (unsigned int)(v23 - 1) >= LODWORD(klass->_1.namespaze) )
          break;
        v25 = v24;
        v9 = (System_Char_array *)*((_QWORD *)&klass->_1.byval_arg.data + v24);
        if ( !v9 )
          goto LABEL_40;
        v26 = UnityEngine_Object__get_name((UnityEngine_Object_o *)v9, 0LL);
        v9 = (System_Char_array *)System_String__op_Equality(v26, v17, 0LL);
        if ( ((unsigned __int8)v9 & 1) != 0 )
        {
          v27 = this[1].klass;
          if ( !v27 )
            goto LABEL_40;
          if ( (unsigned int)v25 >= LODWORD(v27->_1.namespaze) )
            break;
          v9 = (System_Char_array *)*((_QWORD *)&v27->_1.byval_arg.data + v25);
          if ( !v9 )
            goto LABEL_40;
          UIWidget__set_depth((UIWidget_o *)v9, result, 0LL);
        }
        if ( v23 >= (int)namespaze )
          goto LABEL_36;
        klass = this[1].klass;
        ++v23;
        if ( !klass )
          goto LABEL_40;
      }
LABEL_38:
      v28 = sub_B5D6C8(v9);
      sub_B5D668(v28, 0LL);
    }
  }
}