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
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x21
  long double v13; // q0
  UnityEngine_Object_o *v14; // x20
  WebViewObject_o *v15; // x20
  int v16; // s0
  int v20; // s0
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8

  if ( (byte_4217241 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, enable);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UITexture___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_22571/*"symbol_adjust/mapsymbol_001"*/, v7);
    sub_B0D8A4(&StringLiteral_22572/*"symbol_adjust/target"*/, v8);
    byte_4217241 = 1;
  }
  targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(targetMark, 0LL, 0LL) )
  {
    transform = this->fields.targetMark;
    if ( !transform )
      goto LABEL_40;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_40;
    v11 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                    (UnityEngine_Transform_o *)transform,
                                    (System_String_o *)StringLiteral_22572/*"symbol_adjust/target"*/,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_40;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)v11,
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_WebViewObject )
          goto LABEL_40;
        if ( enable )
          LODWORD(v13) = 1.0;
        else
          LODWORD(v13) = 0.5;
        ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, long double))Component_WebViewObject->klass[1]._1.castClass)(
          Component_WebViewObject,
          Component_WebViewObject->klass[1]._1.declaringType,
          v13);
      }
    }
    transform = this->fields.targetMark;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
    {
LABEL_40:
      sub_B0D97C(transform);
    }
    v14 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                    (UnityEngine_Transform_o *)transform,
                                    (System_String_o *)StringLiteral_22571/*"symbol_adjust/mapsymbol_001"*/,
                                    0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_40;
      v15 = UnityEngine_Component__GetComponent_WebViewObject_(
              (UnityEngine_Component_o *)v14,
              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
      {
        if ( enable )
        {
          *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
          if ( v15 )
          {
            UIWidget__set_color((UIWidget_o *)v15, *(UnityEngine_Color_o *)&v16, 0LL);
            return;
          }
          goto LABEL_40;
        }
        p_c = (UnityEngine_Color32_o)&c;
        c.fields.rgba = 0;
        UnityEngine_Color32___ctor(p_c, 0x81u, 0x81u, 0x81u, 1u, 0LL);
        rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
        *(UnityEngine_Color_o *)&v20 = UnityEngine_Color32__op_Implicit_40760496(rgba, 0LL);
        if ( !v15 )
          goto LABEL_40;
        UIWidget__set_color((UIWidget_o *)v15, *(UnityEngine_Color_o *)&v20, 0LL);
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
  UnityEngine_GameObject_o *rootObject; // x0
  bool v7; // w1

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
    sub_B0D97C(rootObject);
  }
  rootObject = (UnityEngine_GameObject_o *)BattleServantData__isAlive(tmp_svtData, 0, 0LL);
  if ( !this->fields.rootObject )
    goto LABEL_6;
  if ( ((unsigned __int8)rootObject & 1) == 0 )
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
  UnityEngine_Object_o *lockTargetMark; // x20

  if ( (byte_421723F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, svtData);
    byte_421723F = 1;
  }
  this->fields.tmp_svtData = svtData;
  sub_B0D840(
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
    targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
    if ( !targetMark )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(targetMark, 0, 0LL);
    lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(lockTargetMark, 0LL, 0LL) )
    {
      targetMark = this->fields.lockTargetMark;
      if ( targetMark )
      {
        targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
        if ( targetMark )
        {
          UnityEngine_GameObject__SetActive(targetMark, 0, 0LL);
          return;
        }
      }
LABEL_15:
      sub_B0D97C(targetMark);
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
  UnityEngine_Object_o *lockTargetMark; // x21
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *v12; // x21
  bool v13; // w1

  if ( (byte_4217240 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4217240 = 1;
  }
  tmp_svtData = this->fields.tmp_svtData;
  if ( tmp_svtData )
  {
    targetMark = this->fields.targetMark;
    if ( targetMark )
    {
      v9 = tmp_svtData->fields.uniqueId;
      targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
      if ( targetMark )
      {
        UnityEngine_GameObject__SetActive(targetMark, v9 == uniqueId, 0LL);
        lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
        if ( isTargetLock )
        {
          if ( lockTargetMark )
          {
            targetMark = UnityEngine_GameObject__get_gameObject(this->fields.lockTargetMark, 0LL);
            if ( targetMark )
            {
              UnityEngine_GameObject__SetActive(targetMark, 0, 0LL);
              targetMark = (UnityEngine_GameObject_o *)this->fields.tmp_svtData;
              if ( targetMark )
              {
                if ( !BattleServantData__isAlive((BattleServantData_o *)targetMark, 0, 0LL) )
                {
                  targetMark = (UnityEngine_GameObject_o *)this->fields.tmp_svtData;
                  if ( !targetMark )
                    goto LABEL_34;
                  if ( !BattleServantData__isGuts((BattleServantData_o *)targetMark, 0LL) )
                    goto LABEL_33;
                }
                targetMark = (UnityEngine_GameObject_o *)this->fields.tmp_svtData;
                if ( !targetMark )
                  goto LABEL_34;
                if ( !BattleServantData__isUpHate((BattleServantData_o *)targetMark, 0LL, 0LL) )
                {
LABEL_33:
                  BattleServantHeadUpComponent__SetEnableTargetMark(this, !isTargetLock, v11);
                  return;
                }
                targetMark = this->fields.targetMark;
                if ( targetMark )
                {
                  targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
                  if ( targetMark )
                  {
                    UnityEngine_GameObject__SetActive(targetMark, 0, 0LL);
                    v12 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    if ( !UnityEngine_Object__op_Inequality(v12, 0LL, 0LL) )
                      goto LABEL_33;
                    targetMark = this->fields.lockTargetMark;
                    if ( targetMark )
                    {
                      targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
                      if ( targetMark )
                      {
                        v13 = 1;
LABEL_32:
                        UnityEngine_GameObject__SetActive(targetMark, v13, 0LL);
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
          targetMark = this->fields.lockTargetMark;
          if ( targetMark )
          {
            targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
            if ( targetMark )
            {
              v13 = 0;
              goto LABEL_32;
            }
          }
        }
      }
    }
LABEL_34:
    sub_B0D97C(targetMark);
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

  if ( (byte_421723E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, flg);
    byte_421723E = 1;
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
      sub_B0D97C(0LL);
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