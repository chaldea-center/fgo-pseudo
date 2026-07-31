void BattleServantHeadUpComponent___ctor(BattleServantHeadUpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHeadUpComponent__SetEnableTargetMark(
        BattleServantHeadUpComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetMark; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *transform; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  __int64 v10; // x1
  Il2CppObject *Component_object; // x21
  long double v12; // q0
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x1
  Il2CppObject *v16; // x20
  float v17; // s0 OVERLAPPED
  float v18; // s3
  float v19; // s1
  float v20; // s2

  if ( (byte_593BF95 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_25125/*"symbol_adjust/mapsymbol_001"*/);
    sub_21FFC50(&StringLiteral_25126/*"symbol_adjust/target"*/);
    byte_593BF95 = 1;
  }
  targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(targetMark, 0, 0) )
  {
    transform = this->fields.targetMark;
    if ( !transform )
      goto LABEL_36;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_36;
    v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                   (UnityEngine_Transform_o *)transform,
                                   (System_String_o *)StringLiteral_25126/*"symbol_adjust/target"*/,
                                   0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_36;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v9,
                           (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0,
                                                0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( enable )
        {
          LODWORD(v12) = 1.0;
          if ( !Component_object )
            goto LABEL_36;
        }
        else
        {
          LODWORD(v12) = 0.5;
          if ( !Component_object )
            goto LABEL_36;
        }
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          Component_object->klass->vtable[8].method,
          v12);
      }
    }
    transform = this->fields.targetMark;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
LABEL_36:
      sub_21FFECC(transform, v6);
    }
    v14 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                    (UnityEngine_Transform_o *)transform,
                                    (System_String_o *)StringLiteral_25125/*"symbol_adjust/mapsymbol_001"*/,
                                    0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_36;
      v16 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v14,
              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UITexture___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( enable )
        {
          if ( !v16 )
            goto LABEL_36;
          v17 = 1.0;
          v18 = 1.0;
        }
        else
        {
          if ( !v16 )
            goto LABEL_36;
          v18 = 0.0039216;
          v17 = 0.50588;
        }
        v19 = v17;
        v20 = v17;
        UIWidget__set_color((UIWidget_o *)v16, *(UnityEngine_Color_o *)&v17, 0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHeadUpComponent__ShowStatus(BattleServantHeadUpComponent_o *this, bool flg, const MethodInfo *method)
{
  BattleServantData_o *tmp_svtData; // x0
  bool isAlive; // w8
  UnityEngine_GameObject_o *rootObject; // x0
  bool v8; // w1

  tmp_svtData = this->fields.tmp_svtData;
  if ( !tmp_svtData )
  {
    rootObject = this->fields.rootObject;
    if ( !rootObject )
      goto LABEL_9;
    goto LABEL_6;
  }
  isAlive = BattleServantData__isAlive(tmp_svtData, 0, 0);
  rootObject = this->fields.rootObject;
  if ( !isAlive )
  {
    if ( !rootObject )
LABEL_9:
      sub_21FFECC(rootObject, flg);
LABEL_6:
    v8 = 0;
    goto LABEL_7;
  }
  if ( !rootObject )
    goto LABEL_9;
  v8 = flg;
LABEL_7:
  UnityEngine_GameObject__SetActive(rootObject, v8, 0);
}


void BattleServantHeadUpComponent__setData(
        BattleServantHeadUpComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_GameObject_o *targetMark; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *lockTargetMark; // x20

  if ( (byte_593BF93 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF93 = 1;
  }
  this->fields.tmp_svtData = svtData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.tmp_svtData,
    (int32_t)svtData,
    (System_String_o *)method,
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
      goto LABEL_14;
    targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
    if ( !targetMark )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(targetMark, 0, 0);
    lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality(lockTargetMark, 0, 0) )
    {
      targetMark = this->fields.lockTargetMark;
      if ( targetMark )
      {
        targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
        if ( targetMark )
        {
          UnityEngine_GameObject__SetActive(targetMark, 0, 0);
          return;
        }
      }
LABEL_14:
      sub_21FFECC(targetMark, v11);
    }
  }
  else
  {
    BattleServantHeadUpComponent__ShowStatus(this, 0, v10);
  }
}


void BattleServantHeadUpComponent__setModeAction(BattleServantHeadUpComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 0, v2);
  BattleServantHeadUpComponent__setTargetRoot(this, 0, v4);
}


void BattleServantHeadUpComponent__setModeCommand(BattleServantHeadUpComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 1, v2);
  BattleServantHeadUpComponent__setTargetRoot(this, 1, v4);
}


void BattleServantHeadUpComponent__setModeTac(BattleServantHeadUpComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 1, v2);
  BattleServantHeadUpComponent__setTargetRoot(this, 1, v4);
}


void BattleServantHeadUpComponent__setModeWaveStart(BattleServantHeadUpComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHeadUpComponent__setTargetMark(
        BattleServantHeadUpComponent_o *this,
        int32_t uniqueId,
        bool isTargetLock,
        const MethodInfo *method)
{
  struct BattleServantData_o *tmp_svtData; // x8
  int32_t v8; // w22
  UnityEngine_GameObject_o *targetMark; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_Object_o *lockTargetMark; // x21
  bool v13; // w1
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x21
  UpHateData_o *upHateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593BF94 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF94 = 1;
  }
  tmp_svtData = this->fields.tmp_svtData;
  upHateData = 0;
  if ( tmp_svtData )
  {
    v8 = tmp_svtData->fields.uniqueId;
    targetMark = this->fields.targetMark;
    if ( isTargetLock )
    {
      if ( targetMark )
      {
        targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
        if ( targetMark )
        {
          UnityEngine_GameObject__SetActive(targetMark, v8 == uniqueId, 0);
          targetMark = this->fields.lockTargetMark;
          if ( targetMark )
          {
            targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
            if ( targetMark )
            {
              UnityEngine_GameObject__SetActive(targetMark, 0, 0);
              targetMark = (UnityEngine_GameObject_o *)this->fields.tmp_svtData;
              if ( targetMark )
              {
                if ( !BattleServantData__IsApplicableUpHate((BattleServantData_o *)targetMark, 0) )
                  goto LABEL_30;
                targetMark = (UnityEngine_GameObject_o *)this->fields.tmp_svtData;
                if ( !targetMark )
                  goto LABEL_32;
                if ( !BattleServantData__isUpHate((BattleServantData_o *)targetMark, 0, &upHateData, 0, 0) )
                {
LABEL_30:
                  BattleServantHeadUpComponent__SetEnableTargetMark(this, !isTargetLock, v10);
                  return;
                }
                targetMark = this->fields.targetMark;
                if ( targetMark )
                {
                  targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
                  if ( targetMark )
                  {
                    UnityEngine_GameObject__SetActive(targetMark, 0, 0);
                    lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
                    if ( !UnityEngine_Object__op_Inequality(lockTargetMark, 0, 0) )
                      goto LABEL_30;
                    targetMark = this->fields.lockTargetMark;
                    if ( targetMark )
                    {
                      targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
                      if ( targetMark )
                      {
                        v13 = 1;
LABEL_29:
                        UnityEngine_GameObject__SetActive(targetMark, v13, 0);
                        goto LABEL_30;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else if ( targetMark )
    {
      targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
      if ( targetMark )
      {
        UnityEngine_GameObject__SetActive(targetMark, v8 == uniqueId, 0);
        v15 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        if ( !UnityEngine_Object__op_Inequality(v15, 0, 0) )
          goto LABEL_30;
        targetMark = this->fields.lockTargetMark;
        if ( targetMark )
        {
          targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
          if ( targetMark )
          {
            v13 = 0;
            goto LABEL_29;
          }
        }
      }
    }
LABEL_32:
    sub_21FFECC(targetMark, *(_QWORD *)&uniqueId);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHeadUpComponent__setTargetRoot(
        BattleServantHeadUpComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetRoot; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_593BF92 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593BF92 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(targetRoot, 0, 0) )
  {
    v7 = this->fields.targetRoot;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UnityEngine_GameObject__SetActive(v7, flg, 0);
  }
}


void BattleServantHeadUpComponent__updateView(BattleServantHeadUpComponent_o *this, const MethodInfo *method)
{
  BattleServantData_o *tmp_svtData; // x0
  const MethodInfo *v4; // x2

  tmp_svtData = this->fields.tmp_svtData;
  if ( tmp_svtData )
  {
    if ( !BattleServantData__isAlive(tmp_svtData, 0, 0) )
      BattleServantHeadUpComponent__ShowStatus(this, 0, v4);
  }
}