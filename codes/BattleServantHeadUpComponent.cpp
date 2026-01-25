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
  UnityEngine_Object_o *v8; // x21
  Il2CppObject *Component_object; // x21
  long double v10; // q0
  UnityEngine_Object_o *v11; // x20
  Il2CppObject *v12; // x20
  float v13; // s0 OVERLAPPED
  float v14; // s1
  float v15; // s2
  float v16; // s3
  UIWidget_o *v17; // x0

  if ( (byte_4CF1D8F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24133/*"symbol_adjust/mapsymbol_001"*/);
    sub_1C7BAE8(&StringLiteral_24134/*"symbol_adjust/target"*/);
    byte_4CF1D8F = 1;
  }
  targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(targetMark, 0, 0) )
  {
    transform = this->fields.targetMark;
    if ( !transform )
      goto LABEL_36;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0);
    if ( !transform )
      goto LABEL_36;
    v8 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                   (UnityEngine_Transform_o *)transform,
                                   (System_String_o *)StringLiteral_24134/*"symbol_adjust/target"*/,
                                   0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_36;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v8,
                           (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0,
                                                0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_36;
        if ( enable )
          LODWORD(v10) = 1.0;
        else
          LODWORD(v10) = 0.5;
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *, long double))Component_object->klass->vtable[8].methodPtr)(
          Component_object,
          Component_object->klass->vtable[8].method,
          v10);
      }
    }
    transform = this->fields.targetMark;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
    {
LABEL_36:
      sub_1C7BD40(transform, v6);
    }
    v11 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                    (UnityEngine_Transform_o *)transform,
                                    (System_String_o *)StringLiteral_24133/*"symbol_adjust/mapsymbol_001"*/,
                                    0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_36;
      v12 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v11,
              (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UITexture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( enable )
        {
          if ( v12 )
          {
            v13 = 1.0;
            v14 = 1.0;
            v15 = 1.0;
            v16 = 1.0;
            v17 = (UIWidget_o *)v12;
LABEL_35:
            UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v13, 0);
            return;
          }
        }
        else if ( v12 )
        {
          v13 = 0.50588;
          v16 = 0.0039216;
          v17 = (UIWidget_o *)v12;
          v14 = 0.50588;
          v15 = 0.50588;
          goto LABEL_35;
        }
        goto LABEL_36;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantHeadUpComponent__ShowStatus(BattleServantHeadUpComponent_o *this, bool flg, const MethodInfo *method)
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
    sub_1C7BD40(rootObject, flg);
  }
  rootObject = (UnityEngine_GameObject_o *)BattleServantData__isAlive(tmp_svtData, 0, 0);
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
  UnityEngine_GameObject__SetActive(rootObject, v7, 0);
}


void BattleServantHeadUpComponent__setData(
        BattleServantHeadUpComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_GameObject_o *targetMark; // x0
  UnityEngine_Object_o *lockTargetMark; // x20

  if ( (byte_4CF1D8D & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1D8D = 1;
  }
  this->fields.tmp_svtData = svtData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.tmp_svtData,
    (int32_t)svtData,
    (int32_t)method,
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C7BD40(targetMark, v11);
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
  UnityEngine_GameObject_o *targetMark; // x0
  int32_t v9; // w22
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *lockTargetMark; // x21
  bool v12; // w1
  UnityEngine_Object_o *v13; // x21
  UpHateData_o *upHateData; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CF1D8E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1D8E = 1;
  }
  upHateData = 0;
  tmp_svtData = this->fields.tmp_svtData;
  if ( tmp_svtData )
  {
    targetMark = this->fields.targetMark;
    if ( targetMark )
    {
      v9 = tmp_svtData->fields.uniqueId;
      targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
      if ( targetMark )
      {
        UnityEngine_GameObject__SetActive(targetMark, v9 == uniqueId, 0);
        if ( isTargetLock )
        {
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
                if ( !BattleServantData__isAlive((BattleServantData_o *)targetMark, 0, 0) )
                {
                  targetMark = (UnityEngine_GameObject_o *)this->fields.tmp_svtData;
                  if ( !targetMark )
                    goto LABEL_32;
                  if ( !BattleServantData__isGuts((BattleServantData_o *)targetMark, 0) )
                    goto LABEL_30;
                }
                targetMark = (UnityEngine_GameObject_o *)this->fields.tmp_svtData;
                if ( !targetMark )
                  goto LABEL_32;
                if ( !BattleServantData__isUpHate((BattleServantData_o *)targetMark, 0, &upHateData, 0) )
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
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( !UnityEngine_Object__op_Inequality(lockTargetMark, 0, 0) )
                      goto LABEL_30;
                    targetMark = this->fields.lockTargetMark;
                    if ( targetMark )
                    {
                      targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
                      if ( targetMark )
                      {
                        v12 = 1;
LABEL_29:
                        UnityEngine_GameObject__SetActive(targetMark, v12, 0);
                        goto LABEL_30;
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
          v13 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v13, 0, 0) )
            goto LABEL_30;
          targetMark = this->fields.lockTargetMark;
          if ( targetMark )
          {
            targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0);
            if ( targetMark )
            {
              v12 = 0;
              goto LABEL_29;
            }
          }
        }
      }
    }
LABEL_32:
    sub_1C7BD40(targetMark, *(_QWORD *)&uniqueId);
  }
}


void BattleServantHeadUpComponent__setTargetRoot(
        BattleServantHeadUpComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetRoot; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CF1D8C & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1D8C = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetRoot, 0, 0) )
  {
    v7 = this->fields.targetRoot;
    if ( !v7 )
      sub_1C7BD40(0, v6);
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