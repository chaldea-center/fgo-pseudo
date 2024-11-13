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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *targetMark; // x21
  __int64 v14; // x1
  UnityEngine_GameObject_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x21
  __int64 v18; // x1
  Il2CppObject *Component_object; // x21
  long double v20; // q0
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  __int64 v23; // x1
  Il2CppObject *v24; // x20
  int v25; // s0
  int v26; // s1
  int v27; // s2
  int v28; // s3
  UIWidget_o *v29; // x0

  if ( (byte_4B192A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, enable, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UITexture___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_23986/*"symbol_adjust/mapsymbol_001"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_23987/*"symbol_adjust/target"*/, v11, v12);
    byte_4B192A3 = 1;
  }
  targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, enable);
  if ( !UnityEngine_Object__op_Equality(targetMark, 0LL, 0LL) )
  {
    transform = this->fields.targetMark;
    if ( !transform )
      goto LABEL_36;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_36;
    v17 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                    (UnityEngine_Transform_o *)transform,
                                    (System_String_o *)StringLiteral_23987/*"symbol_adjust/target"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v17 )
        goto LABEL_36;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v17,
                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0LL,
                                                0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_36;
        if ( enable )
          LODWORD(v20) = 1.0;
        else
          LODWORD(v20) = 0.5;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, long double))Component_object->klass->vtable[8].method)(
          Component_object,
          Component_object->klass->vtable[9].methodPtr,
          v20);
      }
    }
    transform = this->fields.targetMark;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
    {
LABEL_36:
      sub_1BCAA3C(transform, v14);
    }
    v22 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                    (UnityEngine_Transform_o *)transform,
                                    (System_String_o *)StringLiteral_23986/*"symbol_adjust/mapsymbol_001"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_36;
      v24 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v22,
              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UITexture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( enable )
        {
          if ( v24 )
          {
            v25 = 1.0;
            v26 = 1.0;
            v27 = 1.0;
            v28 = 1.0;
            v29 = (UIWidget_o *)v24;
LABEL_35:
            UIWidget__set_color(v29, *(UnityEngine_Color_o *)&v25, 0LL);
            return;
          }
        }
        else if ( v24 )
        {
          v25 = 1057063298;
          v28 = 998277249;
          v29 = (UIWidget_o *)v24;
          v26 = 1057063298;
          v27 = 1057063298;
          goto LABEL_35;
        }
        goto LABEL_36;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1BCAA3C(rootObject, flg);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_GameObject_o *targetMark; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *lockTargetMark; // x20

  if ( (byte_4B192A1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, svtData, method);
    byte_4B192A1 = 1;
  }
  this->fields.tmp_svtData = svtData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tmp_svtData,
    (int64_t)svtData,
    (int64_t)method,
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
    targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
    if ( !targetMark )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(targetMark, 0, 0LL);
    lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
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
LABEL_14:
      sub_1BCAA3C(targetMark, v11);
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
  BattleServantHeadUpComponent__setTargetRoot(this, 0, v4);
}


void __fastcall BattleServantHeadUpComponent__setModeCommand(
        BattleServantHeadUpComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 1, v2);
  BattleServantHeadUpComponent__setTargetRoot(this, 1, v4);
}


void __fastcall BattleServantHeadUpComponent__setModeTac(
        BattleServantHeadUpComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 1, v2);
  BattleServantHeadUpComponent__setTargetRoot(this, 1, v4);
}


void __fastcall BattleServantHeadUpComponent__setModeWaveStart(
        BattleServantHeadUpComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleServantHeadUpComponent__ShowStatus(this, 0, v2);
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
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_Object_o *lockTargetMark; // x21
  bool v13; // w1
  UnityEngine_Object_o *v14; // x21

  if ( (byte_4B192A2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId, isTargetLock);
    byte_4B192A2 = 1;
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
        if ( isTargetLock )
        {
          targetMark = this->fields.lockTargetMark;
          if ( targetMark )
          {
            targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
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
                    goto LABEL_32;
                  if ( !BattleServantData__isGuts((BattleServantData_o *)targetMark, 0LL) )
                    goto LABEL_31;
                }
                targetMark = (UnityEngine_GameObject_o *)this->fields.tmp_svtData;
                if ( !targetMark )
                  goto LABEL_32;
                if ( !BattleServantData__isUpHate((BattleServantData_o *)targetMark, 0LL, 0LL) )
                {
LABEL_31:
                  BattleServantHeadUpComponent__SetEnableTargetMark(this, !isTargetLock, v10);
                  return;
                }
                targetMark = this->fields.targetMark;
                if ( targetMark )
                {
                  targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
                  if ( targetMark )
                  {
                    UnityEngine_GameObject__SetActive(targetMark, 0, 0LL);
                    lockTargetMark = (UnityEngine_Object_o *)this->fields.lockTargetMark;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
                    if ( !UnityEngine_Object__op_Inequality(lockTargetMark, 0LL, 0LL) )
                      goto LABEL_31;
                    targetMark = this->fields.lockTargetMark;
                    if ( targetMark )
                    {
                      targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
                      if ( targetMark )
                      {
                        v13 = 1;
LABEL_30:
                        UnityEngine_GameObject__SetActive(targetMark, v13, 0LL);
                        goto LABEL_31;
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
          v14 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
          if ( !UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
            goto LABEL_31;
          targetMark = this->fields.lockTargetMark;
          if ( targetMark )
          {
            targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
            if ( targetMark )
            {
              v13 = 0;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_32:
    sub_1BCAA3C(targetMark, *(_QWORD *)&uniqueId);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantHeadUpComponent__setTargetRoot(
        BattleServantHeadUpComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetRoot; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B192A0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, flg, method);
    byte_4B192A0 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
  {
    v7 = this->fields.targetRoot;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flg, 0LL);
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