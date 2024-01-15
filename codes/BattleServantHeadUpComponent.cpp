void __fastcall BattleServantHeadUpComponent___ctor(BattleServantHeadUpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHeadUpComponent__SetEnableTargetMark(
        BattleServantHeadUpComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *targetMark; // x21
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v12; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x21
  long double v14; // q0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Component_o *v17; // x20
  WebViewObject_o *v18; // x20
  int v19; // s0
  int v23; // s0
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8

  if ( (byte_40FCCD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UISprite___, enable);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UITexture___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22402/*"symbol_adjust/mapsymbol_001"*/, v7);
    sub_B16FFC(&StringLiteral_22403/*"symbol_adjust/target"*/, v8);
    byte_40FCCD5 = 1;
  }
  targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(targetMark, 0LL, 0LL) )
  {
    v10 = this->fields.targetMark;
    if ( !v10 )
      goto LABEL_40;
    transform = UnityEngine_GameObject__get_transform(v10, 0LL);
    if ( !transform )
      goto LABEL_40;
    v12 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_22403/*"symbol_adjust/target"*/, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
    {
      if ( !v12 )
        goto LABEL_40;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v12,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
      {
        if ( !Component_WebViewObject )
          goto LABEL_40;
        if ( enable )
          LODWORD(v14) = 1.0;
        else
          LODWORD(v14) = 0.5;
        ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, long double))Component_WebViewObject->klass[1]._1.castClass)(
          Component_WebViewObject,
          Component_WebViewObject->klass[1]._1.declaringType,
          v14);
      }
    }
    v15 = this->fields.targetMark;
    if ( !v15 || (v16 = UnityEngine_GameObject__get_transform(v15, 0LL)) == 0LL )
LABEL_40:
      sub_B170D4();
    v17 = (UnityEngine_Component_o *)UnityEngine_Transform__Find(v16, (System_String_o *)StringLiteral_22402/*"symbol_adjust/mapsymbol_001"*/, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL) )
    {
      if ( !v17 )
        goto LABEL_40;
      v18 = UnityEngine_Component__GetComponent_WebViewObject_(
              v17,
              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UITexture___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
      {
        if ( enable )
        {
          *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
          if ( v18 )
          {
            UIWidget__set_color((UIWidget_o *)v18, *(UnityEngine_Color_o *)&v19, 0LL);
            return;
          }
          goto LABEL_40;
        }
        p_c = (UnityEngine_Color32_o)&c;
        c.fields.rgba = 0;
        UnityEngine_Color32___ctor(p_c, 0x81u, 0x81u, 0x81u, 1u, 0LL);
        rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
        *(UnityEngine_Color_o *)&v23 = UnityEngine_Color32__op_Implicit_40668984(rgba, 0LL);
        if ( !v18 )
          goto LABEL_40;
        UIWidget__set_color((UIWidget_o *)v18, *(UnityEngine_Color_o *)&v23, 0LL);
      }
    }
  }
}


void __fastcall BattleServantHeadUpComponent__ShowStatus(
        BattleServantHeadUpComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleServantData_o *tmp_svtData; // x0
  bool isAlive; // w0
  bool v7; // w1
  UnityEngine_GameObject_o *rootObject; // x0

  tmp_svtData = this->fields.tmp_svtData;
  if ( !tmp_svtData )
  {
    rootObject = this->fields.rootObject;
    if ( rootObject )
    {
LABEL_8:
      v7 = 0;
      goto LABEL_9;
    }
LABEL_6:
    sub_B170D4();
  }
  isAlive = BattleServantData__isAlive(tmp_svtData, 0, 0LL);
  if ( !this->fields.rootObject )
    goto LABEL_6;
  if ( !isAlive )
  {
    rootObject = this->fields.rootObject;
    goto LABEL_8;
  }
  v7 = flg;
  rootObject = this->fields.rootObject;
LABEL_9:
  UnityEngine_GameObject__SetActive(rootObject, v7, 0LL);
}


void __fastcall BattleServantHeadUpComponent__setData(
        BattleServantHeadUpComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *targetMark; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *lockTargetMark; // x20
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0

  if ( (byte_40FCCD3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, svtData);
    byte_40FCCD3 = 1;
  }
  this->fields.tmp_svtData = svtData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tmp_svtData,
    (System_Int32_array **)svtData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.tmp_svtData )
  {
    BattleServantHeadUpComponent__ShowStatus(this, 1, v10);
    targetMark = this->fields.targetMark;
    if ( !targetMark )
      goto LABEL_15;
    gameObject = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
    if ( !gameObject )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lockTargetMark, 0LL, 0LL) )
    {
      v14 = this->fields.lockTargetMark;
      if ( v14 )
      {
        v15 = UnityEngine_GameObject__get_gameObject(v14, 0LL);
        if ( v15 )
        {
          UnityEngine_GameObject__SetActive(v15, 0, 0LL);
          return;
        }
      }
LABEL_15:
      sub_B170D4();
    }
  }
  else
  {
    BattleServantHeadUpComponent__ShowStatus(this, 0, v10);
  }
}


void __fastcall BattleServantHeadUpComponent__setModeAction(
        BattleServantHeadUpComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 0, v2);
  this->fields.mode = 4;
  BattleServantHeadUpComponent__setTargetRoot(this, 0, v4);
}


void __fastcall BattleServantHeadUpComponent__setModeCommand(
        BattleServantHeadUpComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 1, v2);
  this->fields.mode = 2;
  BattleServantHeadUpComponent__setTargetRoot(this, 1, v4);
}


void __fastcall BattleServantHeadUpComponent__setModeTac(
        BattleServantHeadUpComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 1, v2);
  this->fields.mode = 3;
  BattleServantHeadUpComponent__setTargetRoot(this, 1, v4);
}


void __fastcall BattleServantHeadUpComponent__setModeWaveStart(
        BattleServantHeadUpComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 0, v2);
  this->fields.mode = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHeadUpComponent__setTargetMark(
        BattleServantHeadUpComponent_o *this,
        int32_t uniqueId,
        bool isTargetLock,
        const MethodInfo *method)
{
  struct BattleServantData_o *tmp_svtData; // x8
  UnityEngine_GameObject_o *targetMark; // x0
  int32_t v9; // w22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *lockTargetMark; // x21
  UnityEngine_GameObject_o *v12; // x0
  BattleServantData_o *v13; // x0
  BattleServantData_o *v14; // x0
  const MethodInfo *v15; // x2
  BattleServantData_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Object_o *v19; // x21
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  bool v22; // w1
  UnityEngine_GameObject_o *v23; // x0

  if ( (byte_40FCCD4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_40FCCD4 = 1;
  }
  tmp_svtData = this->fields.tmp_svtData;
  if ( tmp_svtData )
  {
    targetMark = this->fields.targetMark;
    if ( targetMark )
    {
      v9 = tmp_svtData->fields.uniqueId;
      gameObject = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v9 == uniqueId, 0LL);
        lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
        if ( isTargetLock )
        {
          if ( lockTargetMark )
          {
            v12 = UnityEngine_GameObject__get_gameObject(this->fields.lockTargetMark, 0LL);
            if ( v12 )
            {
              UnityEngine_GameObject__SetActive(v12, 0, 0LL);
              v13 = this->fields.tmp_svtData;
              if ( v13 )
              {
                if ( !BattleServantData__isAlive(v13, 0, 0LL) )
                {
                  v14 = this->fields.tmp_svtData;
                  if ( !v14 )
                    goto LABEL_34;
                  if ( !BattleServantData__isGuts(v14, 0LL) )
                    goto LABEL_33;
                }
                v16 = this->fields.tmp_svtData;
                if ( !v16 )
                  goto LABEL_34;
                if ( !BattleServantData__isUpHate(v16, 0LL, 0LL) )
                {
LABEL_33:
                  BattleServantHeadUpComponent__SetEnableTargetMark(this, !isTargetLock, v15);
                  return;
                }
                v17 = this->fields.targetMark;
                if ( v17 )
                {
                  v18 = UnityEngine_GameObject__get_gameObject(v17, 0LL);
                  if ( v18 )
                  {
                    UnityEngine_GameObject__SetActive(v18, 0, 0LL);
                    v19 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
                      goto LABEL_33;
                    v20 = this->fields.lockTargetMark;
                    if ( v20 )
                    {
                      v21 = UnityEngine_GameObject__get_gameObject(v20, 0LL);
                      if ( v21 )
                      {
                        v22 = 1;
LABEL_32:
                        UnityEngine_GameObject__SetActive(v21, v22, 0LL);
                        goto LABEL_33;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(lockTargetMark, 0LL, 0LL) )
            goto LABEL_33;
          v23 = this->fields.lockTargetMark;
          if ( v23 )
          {
            v21 = UnityEngine_GameObject__get_gameObject(v23, 0LL);
            if ( v21 )
            {
              v22 = 0;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_34:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHeadUpComponent__setTargetRoot(
        BattleServantHeadUpComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetRoot; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40FCCD2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, flg);
    byte_40FCCD2 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
  {
    v6 = this->fields.targetRoot;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, flg, 0LL);
  }
}


void __fastcall BattleServantHeadUpComponent__updateView(
        BattleServantHeadUpComponent_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *tmp_svtData; // x0
  const MethodInfo *v4; // x2

  tmp_svtData = this->fields.tmp_svtData;
  if ( tmp_svtData )
  {
    if ( !BattleServantData__isAlive(tmp_svtData, 0, 0LL) )
      BattleServantHeadUpComponent__ShowStatus(this, 0, v4);
  }
}