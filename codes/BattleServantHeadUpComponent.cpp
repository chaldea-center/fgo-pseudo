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
  __int64 v10; // x1
  UnityEngine_GameObject_o *transform; // x0
  UnityEngine_Object_o *v12; // x21
  Il2CppObject *Component_object; // x21
  long double v14; // q0
  UnityEngine_Object_o *v15; // x20
  Il2CppObject *v16; // x20
  int v17; // s0
  int v18; // s1
  int v19; // s2
  int v20; // s3
  UIWidget_o *v21; // x0

  if ( (byte_4BB7846 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UISprite___, enable);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UITexture___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_24128/*"svt_voice_id"*/, v7);
    sub_1C13D24(&StringLiteral_24129/*"sw"*/, v8);
    byte_4BB7846 = 1;
  }
  targetMark = (UnityEngine_Object_o *)this->fields.targetMark;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(targetMark, 0LL, 0LL) )
  {
    transform = this->fields.targetMark;
    if ( !transform )
      goto LABEL_36;
    transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
    if ( !transform )
      goto LABEL_36;
    v12 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                    (UnityEngine_Transform_o *)transform,
                                    (System_String_o *)StringLiteral_24129/*"sw"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v12 )
        goto LABEL_36;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)v12,
                           (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0LL,
                                                0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_36;
        if ( enable )
          LODWORD(v14) = 1.0;
        else
          LODWORD(v14) = 0.5;
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, long double))Component_object->klass->vtable[8].method)(
          Component_object,
          Component_object->klass->vtable[9].methodPtr,
          v14);
      }
    }
    transform = this->fields.targetMark;
    if ( !transform
      || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
    {
LABEL_36:
      sub_1C13F80(transform, v10);
    }
    v15 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                    (UnityEngine_Transform_o *)transform,
                                    (System_String_o *)StringLiteral_24128/*"svt_voice_id"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_36;
      v16 = UnityEngine_Component__GetComponent_object_(
              (UnityEngine_Component_o *)v15,
              (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UITexture___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( enable )
        {
          if ( v16 )
          {
            v17 = 1.0;
            v18 = 1.0;
            v19 = 1.0;
            v20 = 1.0;
            v21 = (UIWidget_o *)v16;
LABEL_35:
            UIWidget__set_color(v21, *(UnityEngine_Color_o *)&v17, 0LL);
            return;
          }
        }
        else if ( v16 )
        {
          v17 = 1057063298;
          v20 = 998277249;
          v21 = (UIWidget_o *)v16;
          v18 = 1057063298;
          v19 = 1057063298;
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
    sub_1C13F80(rootObject, flg);
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
  UnityEngine_Object_o *lockTargetMark; // x20

  if ( (byte_4BB7844 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, svtData);
    byte_4BB7844 = 1;
  }
  this->fields.tmp_svtData = svtData;
  sub_1C13CC8(
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C13F80(targetMark, v11);
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
  UnityEngine_Object_o *lockTargetMark; // x21
  bool v12; // w1
  UnityEngine_Object_o *v13; // x21

  if ( (byte_4BB7845 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_4BB7845 = 1;
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
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( !UnityEngine_Object__op_Inequality(lockTargetMark, 0LL, 0LL) )
                      goto LABEL_31;
                    targetMark = this->fields.lockTargetMark;
                    if ( targetMark )
                    {
                      targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
                      if ( targetMark )
                      {
                        v12 = 1;
LABEL_30:
                        UnityEngine_GameObject__SetActive(targetMark, v12, 0LL);
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
          v13 = (UnityEngine_Object_o *)this->fields.lockTargetMark;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
            goto LABEL_31;
          targetMark = this->fields.lockTargetMark;
          if ( targetMark )
          {
            targetMark = UnityEngine_GameObject__get_gameObject(targetMark, 0LL);
            if ( targetMark )
            {
              v12 = 0;
              goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_32:
    sub_1C13F80(targetMark, *(_QWORD *)&uniqueId);
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

  if ( (byte_4BB7843 & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, flg);
    byte_4BB7843 = 1;
  }
  targetRoot = (UnityEngine_Object_o *)this->fields.targetRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetRoot, 0LL, 0LL) )
  {
    v7 = this->fields.targetRoot;
    if ( !v7 )
      sub_1C13F80(0LL, v6);
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