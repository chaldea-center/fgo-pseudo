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
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UIWidget_o *v9; // x0
  WarBoardObjectAnimationEvent_c *klass; // x8
  const char *namespaze; // x21
  unsigned int v12; // w22
  UIWidget_o *v13; // x0

  if ( (byte_40F8586 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    byte_40F8586 = 1;
  }
  if ( !LOBYTE(this->fields.myWidget) )
    WarBoardObjectAnimationEvent__Init(this, *(const MethodInfo **)&value);
  children = (UnityEngine_Object_o *)this->fields.children;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(children, 0LL, 0LL);
  if ( v6 )
  {
    v9 = (UIWidget_o *)this->fields.children;
    if ( !v9 )
      goto LABEL_19;
    UIWidget__set_depth(v9, v9->fields.mDepth + value, 0LL);
  }
  klass = this[1].klass;
  if ( klass )
  {
    namespaze = klass->_1.namespaze;
    if ( namespaze )
    {
      if ( (int)namespaze >= 1 )
      {
        v12 = 0;
        do
        {
          if ( v12 >= LODWORD(klass->_1.namespaze) )
          {
            sub_B17100(v6, v7, v8);
            sub_B170A0();
          }
          v13 = (UIWidget_o *)*((_QWORD *)&klass->_1.byval_arg.data + (int)v12);
          if ( !v13 )
            break;
          UIWidget__set_depth(v13, v13->fields.mDepth + value, 0LL);
          if ( (int)++v12 >= (int)namespaze )
            return;
          klass = this[1].klass;
        }
        while ( klass );
LABEL_19:
        sub_B170D4();
      }
    }
  }
}


void __fastcall WarBoardObjectAnimationEvent__ForceEndInProgressTask(
        WarBoardObjectAnimationEvent_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  struct System_Action_o *callbackFunc; // x8

  if ( (byte_40F8588 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8588 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  callbackFunc = Instance[9].fields.callbackFunc;
  if ( callbackFunc )
    BYTE1(callbackFunc->fields.m_target) = 1;
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
  __int64 v3; // x8

  if ( (byte_40F8589 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8589 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  v3 = *(_QWORD *)&Instance[9].fields.isButtonEnable;
  if ( v3 )
    *(_BYTE *)(v3 + 25) = 1;
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

  if ( (byte_40F8584 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F8584 = 1;
  }
  if ( !LOBYTE(this->fields.myWidget) )
  {
    if ( !this[1].klass )
    {
      ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardObjectAnimationEvent_c *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                                                    (UnityEngine_Component_o *)this,
                                                                                                    1,
                                                                                                    (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
      this[1].klass = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
      sub_B16F98(
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
                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      this->fields.children = (struct UIWidget_array *)Component_WebViewObject;
      sub_B16F98(
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
  WebViewManager_o *Instance; // x0
  __int64 v7; // x2
  WebViewManager_o *v8; // x1
  System_String_array *v9; // x0
  __int64 v10; // x21
  System_String_array *v11; // x19
  WebViewManager_o *v12; // x20
  unsigned __int64 v13; // x22
  unsigned __int64 v14; // x23
  unsigned __int64 v15; // x24
  System_String_o **v16; // x26
  char v17; // w21
  WarBoardBackgroundComponent_o *basePanel; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F8587 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, value);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_14493, v5);
    byte_40F8587 = 1;
  }
  result = 0;
  Instance = (WebViewManager_o *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !Instance )
    goto LABEL_18;
  v8 = Instance;
  if ( !LODWORD(Instance->fields.basePanel) )
    goto LABEL_17;
  LOWORD(Instance->fields.baseWindow) = 44;
  if ( !value || (v9 = System_String__Split(value, (System_Char_array *)Instance, 0LL)) == 0LL )
LABEL_18:
    sub_B170D4();
  v10 = *(_QWORD *)&v9->max_length;
  v11 = v9;
  if ( (int)v10 >= 2 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v12 = Instance;
    v13 = 0LL;
    v14 = 0LL;
    v15 = (unsigned int)v10 >> 1;
    while ( v13 + 1 < v11->max_length )
    {
      v16 = (System_String_o **)(&v11->obj.klass + v13);
      Instance = (WebViewManager_o *)System_String__op_Equality(v16[5], (System_String_o *)StringLiteral_14493, 0LL);
      if ( v13 >= v11->max_length )
        break;
      v17 = (char)Instance;
      Instance = (WebViewManager_o *)System_Int32__TryParse(v16[4], &result, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_18;
        basePanel = (WarBoardBackgroundComponent_o *)v12[3].fields.basePanel;
        if ( !basePanel )
          goto LABEL_18;
        WarBoardBackgroundComponent__SetDispBgDiff(basePanel, result, v17 & 1, 0LL);
      }
      ++v14;
      v13 += 2LL;
      if ( v14 >= v15 )
        return;
    }
LABEL_17:
    sub_B17100(Instance, v8, v7);
    sub_B170A0();
  }
}


void __fastcall WarBoardObjectAnimationEvent__SetWidgetDepth(
        WarBoardObjectAnimationEvent_o *this,
        System_String_o *nameAndDepth,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array *v6; // x0
  __int64 v7; // x2
  System_String_array *v8; // x1
  __int64 v9; // x8
  System_String_array *v10; // x20
  unsigned __int64 v11; // x23
  unsigned __int64 max_length; // x8
  __int64 v13; // x9
  __int64 v14; // x24
  System_String_o *v15; // x21
  unsigned __int64 v16; // x9
  UnityEngine_Object_o *children; // x22
  UnityEngine_Object_o *v18; // x0
  System_String_o *name; // x0
  UIWidget_o *v20; // x0
  WarBoardObjectAnimationEvent_c *klass; // x8
  const char *namespaze; // x22
  int v23; // w26
  int v24; // w9
  __int64 v25; // x27
  UnityEngine_Object_o *v26; // x0
  System_String_o *v27; // x0
  WarBoardObjectAnimationEvent_c *v28; // x8
  UIWidget_o *v29; // x0
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F8585 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, nameAndDepth);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F8585 = 1;
  }
  result = 0;
  if ( !LOBYTE(this->fields.myWidget) )
    WarBoardObjectAnimationEvent__Init(this, (const MethodInfo *)nameAndDepth);
  v6 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v6 )
    goto LABEL_40;
  v8 = v6;
  if ( !v6->max_length )
    goto LABEL_38;
  LOWORD(v6->m_Items[0]) = 44;
  if ( !nameAndDepth || (v6 = System_String__Split(nameAndDepth, (System_Char_array *)v6, 0LL)) == 0LL )
LABEL_40:
    sub_B170D4();
  v9 = *(_QWORD *)&v6->max_length;
  v10 = v6;
  if ( (int)v9 >= 2 )
  {
    v11 = (unsigned int)v9 >> 1;
    if ( (_DWORD)v11 )
    {
      max_length = (unsigned int)*(_QWORD *)&v6->max_length;
      v13 = 0LL;
      v14 = 0LL;
      while ( 1 )
      {
        v15 = *(System_String_o **)((char *)v10->m_Items + (v14 << 33 >> 29));
        v16 = v13 | 1;
        result = 0;
        if ( v16 >= max_length )
          goto LABEL_38;
        v6 = (System_String_array *)System_Int32__TryParse(v10->m_Items[(int)v16], &result, 0LL);
        if ( ((unsigned __int8)v6 & 1) != 0 )
        {
          children = (UnityEngine_Object_o *)this->fields.children;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v6 = (System_String_array *)UnityEngine_Object__op_Inequality(children, 0LL, 0LL);
          if ( ((unsigned __int8)v6 & 1) != 0 )
          {
            v18 = (UnityEngine_Object_o *)this->fields.children;
            if ( !v18 )
              goto LABEL_40;
            name = UnityEngine_Object__get_name(v18, 0LL);
            v6 = (System_String_array *)System_String__op_Equality(name, v15, 0LL);
            if ( ((unsigned __int8)v6 & 1) != 0 )
            {
              v20 = (UIWidget_o *)this->fields.children;
              if ( !v20 )
                goto LABEL_40;
              UIWidget__set_depth(v20, result, 0LL);
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
        if ( ++v14 >= v11 )
          return;
        max_length = v10->max_length;
        v13 = 2 * v14;
        if ( 2 * v14 >= max_length )
          goto LABEL_38;
      }
      v23 = 1;
      while ( 1 )
      {
        v24 = v23 - 1;
        if ( (unsigned int)(v23 - 1) >= LODWORD(klass->_1.namespaze) )
          break;
        v25 = v24;
        v26 = (UnityEngine_Object_o *)*((_QWORD *)&klass->_1.byval_arg.data + v24);
        if ( !v26 )
          goto LABEL_40;
        v27 = UnityEngine_Object__get_name(v26, 0LL);
        v6 = (System_String_array *)System_String__op_Equality(v27, v15, 0LL);
        if ( ((unsigned __int8)v6 & 1) != 0 )
        {
          v28 = this[1].klass;
          if ( !v28 )
            goto LABEL_40;
          if ( (unsigned int)v25 >= LODWORD(v28->_1.namespaze) )
            break;
          v29 = (UIWidget_o *)*((_QWORD *)&v28->_1.byval_arg.data + v25);
          if ( !v29 )
            goto LABEL_40;
          UIWidget__set_depth(v29, result, 0LL);
        }
        if ( v23 >= (int)namespaze )
          goto LABEL_36;
        klass = this[1].klass;
        ++v23;
        if ( !klass )
          goto LABEL_40;
      }
LABEL_38:
      sub_B17100(v6, v8, v7);
      sub_B170A0();
    }
  }
}