void BattlePerformancePlayer___ctor(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct UnityEngine_Vector3_array *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A87E & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3___TypeInfo);
    byte_4C2A87E = 1;
  }
  v3 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 3);
  this->fields.list_ID = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.list_ID, (int32_t)v3, v4, v5);
  v6 = (struct UnityEngine_Vector3_array *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 3);
  this->fields.list_pos = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.list_pos, (int32_t)v6, v7, v8);
  this->fields.isPlayCommandSpellEffectStartAnim = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattlePerformancePlayer__CloseSkillConfComp(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C2A865 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2A865 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm
    || (PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0), (myfsm = this->fields.otherFsm) == 0) )
  {
    sub_1C2D6EC(myfsm, method);
  }
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformancePlayer__DeleteStatusByUniqueId(
        BattlePerformancePlayer_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *list_param; // x9
  int max_length; // w10
  int32_t v5; // w8
  int32_t v6; // w11
  BattleServantParamComponent_o *v7; // x12

  list_param = this->fields.list_param;
  if ( !list_param )
LABEL_12:
    sub_1C2D6EC(this, *(_QWORD *)&uniqueId);
  max_length = list_param->max_length;
  v5 = uniqueId;
  *(_QWORD *)&uniqueId = max_length & (unsigned int)~(max_length >> 31);
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( max_length == v6 )
        sub_1C2D6F4(this, *(_QWORD *)&uniqueId, method);
      v7 = list_param->m_Items[v6];
      if ( !v7 )
        goto LABEL_12;
      if ( v7->fields.uniqueID == v5 )
        break;
      if ( uniqueId == ++v6 )
        goto LABEL_10;
    }
    uniqueId = v6;
  }
LABEL_10:
  BattlePerformancePlayer__deleteStatus(this, uniqueId, method);
}


StageEntity_o *BattlePerformancePlayer__GetStageEntity(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *data; // x20
  __int64 v4; // x1
  BattleData_o *v5; // x0

  if ( (byte_4C2A87D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A87D = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(data, 0, 0) )
    return 0;
  v5 = this->fields.data;
  if ( !v5 )
    sub_1C2D6EC(0, v4);
  return BattleData__getStageEntity(v5, 0);
}


void BattlePerformancePlayer__Initialize(
        BattlePerformancePlayer_o *this,
        BattlePerformance_o *inperf,
        BattleData_o *indata,
        BattleLogic_o *inlogic,
        const MethodInfo *method)
{
  struct BattlePerformance_o **p_perf; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v17; // x21
  __int64 v18; // x22
  int max_length; // w9
  unsigned int v20; // w23
  struct UnityEngine_Vector3_array *list_pos; // x24
  struct BattleServantParamComponent_array *v22; // x8
  const MethodInfo *v23; // x3
  struct BattleServantParamComponent_array *v24; // x8
  CGThumbnailListItem_o *v25; // x8
  struct BattlePerformance_o *v26; // x1
  struct BattleServantParamComponent_array *v27; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.perf = inperf;
  p_perf = &this->fields.perf;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.perf,
    (int32_t)inperf,
    (int32_t)indata,
    (const MethodInfo *)inlogic);
  this->fields.data = indata;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.data, (int32_t)indata, v9, v10);
  this->fields.logic = inlogic;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.logic, (int32_t)inlogic, v11, v12);
  list_param = this->fields.list_param;
  if ( !list_param )
    goto LABEL_25;
  v17 = 0;
  v18 = 4;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v20 = v18 - 4;
    if ( (int)v18 - 4 >= max_length )
      break;
    if ( v20 >= max_length )
      goto LABEL_26;
    gameObject = (UnityEngine_Component_o *)*((_QWORD *)&list_param->obj.klass + v18);
    if ( gameObject )
    {
      list_pos = this->fields.list_pos;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)gameObject,
                                                  0);
        if ( gameObject )
        {
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
          if ( list_pos )
          {
            if ( v20 >= LODWORD(list_pos->max_length) )
              goto LABEL_26;
            list_pos->m_Items[v17] = position;
            v22 = this->fields.list_param;
            if ( v22 )
            {
              if ( v20 >= LODWORD(v22->max_length) )
                goto LABEL_26;
              gameObject = (UnityEngine_Component_o *)*((_QWORD *)&v22->obj.klass + v18);
              if ( gameObject )
              {
                BattleServantParamComponent__setCloseMode((BattleServantParamComponent_o *)gameObject, 1, 0);
                v24 = this->fields.list_param;
                if ( v24 )
                {
                  if ( v20 >= LODWORD(v24->max_length) )
                    goto LABEL_26;
                  v25 = (CGThumbnailListItem_o *)*((_QWORD *)&v24->obj.klass + v18);
                  if ( v25 )
                  {
                    v26 = *p_perf;
                    v25[2].klass = (CGThumbnailListItem_c *)*p_perf;
                    sub_1C2D434(v25 + 2, (int32_t)v26, v15, v23);
                    v27 = this->fields.list_param;
                    if ( v27 )
                    {
                      if ( v20 >= LODWORD(v27->max_length) )
LABEL_26:
                        sub_1C2D6F4(gameObject, v14, v15);
                      gameObject = (UnityEngine_Component_o *)*((_QWORD *)&v27->obj.klass + v18);
                      if ( gameObject )
                      {
                        BattleServantParamComponent__ForceDestroyAllEffect(
                          (BattleServantParamComponent_o *)gameObject,
                          0);
                        list_param = this->fields.list_param;
                        ++v18;
                        ++v17;
                        if ( list_param )
                          continue;
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
    goto LABEL_25;
  }
  BattlePerformancePlayer__initSvtConfWindow(this, v14);
  gameObject = (UnityEngine_Component_o *)this->fields.skillConfWindow;
  if ( !gameObject
    || (BattleSkillConfComponent__setInit((BattleSkillConfComponent_o *)gameObject, this->fields.data, 0),
        (gameObject = (UnityEngine_Component_o *)this->fields.skillConfWindow) == 0)
    || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD))gameObject->klass[1]._1.this_arg.data)(
          gameObject,
          *(_QWORD *)&gameObject->klass[1]._1.this_arg.bits),
        (gameObject = (UnityEngine_Component_o *)this->fields.skillConfWindow) == 0) )
  {
LABEL_25:
    sub_1C2D6EC(gameObject, v14);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))gameObject->klass[1]._1.declaringType)(
    gameObject,
    gameObject->klass[1]._1.parent);
}


void BattlePerformancePlayer__ModeComPlayerStatusSwitchParty(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePerformancePlayer_o *v3; // x19
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v5; // x22
  __int64 v6; // x24
  int max_length; // w9
  unsigned int v8; // w20
  struct BattleServantParamComponent_array *v9; // x8
  struct UnityEngine_Vector3_array *list_pos; // x8
  struct BattleServantParamComponent_array *v11; // x8
  UnityEngine_Transform_o *transform; // x20
  struct BattleServantParamComponent_array *v13; // x8
  __int64 v14; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v16; // x23
  UnityEngine_Object_o *v17; // x20
  struct BattleServantParamComponent_array *v18; // x8
  struct BattleServantParamComponent_array *v19; // x8
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4C2A860 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A860 = 1;
  }
  list_param = v3->fields.list_param;
  if ( !list_param )
    goto LABEL_39;
  v5 = 0;
  v6 = 4;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_41;
    this = (BattlePerformancePlayer_o *)*((_QWORD *)&list_param->obj.klass + v6);
    if ( this )
    {
      this = (BattlePerformancePlayer_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( this )
      {
        v21.fields.r = 1.0;
        v21.fields.g = 1.0;
        v21.fields.b = 1.0;
        v21.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v21, 0);
        v9 = v3->fields.list_param;
        if ( v9 )
        {
          if ( v8 >= LODWORD(v9->max_length) )
            goto LABEL_41;
          this = (BattlePerformancePlayer_o *)*((_QWORD *)&v9->obj.klass + v6);
          if ( this )
          {
            this = (BattlePerformancePlayer_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            list_pos = v3->fields.list_pos;
            if ( list_pos )
            {
              if ( v8 >= LODWORD(list_pos->max_length) )
                goto LABEL_41;
              if ( this )
              {
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, list_pos->m_Items[v5], 0);
                v11 = v3->fields.list_param;
                if ( v11 )
                {
                  if ( v8 >= LODWORD(v11->max_length) )
LABEL_41:
                    sub_1C2D6F4(this, method, v2);
                  this = (BattlePerformancePlayer_o *)*((_QWORD *)&v11->obj.klass + v6);
                  if ( this )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                    v20.fields.x = 0.0;
                    v20.fields.y = 0.0;
                    v20.fields.z = 0.0;
                    v22 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0);
                    if ( transform )
                    {
                      UnityEngine_Transform__set_localRotation(transform, v22, 0);
                      list_param = v3->fields.list_param;
                      ++v6;
                      ++v5;
                      if ( list_param )
                        continue;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_39;
  }
  this = (BattlePerformancePlayer_o *)v3->fields.confwindowComp;
  if ( !this
    || (BattleServantConfConponent__Close((BattleServantConfConponent_o *)this, 0, v2),
        (this = (BattlePerformancePlayer_o *)v3->fields.skillConfWindow) == 0)
    || (((void (__fastcall *)(BattlePerformancePlayer_o *, _QWORD, void *))this->klass[1]._1.fields)(
          this,
          0,
          this->klass[1]._1.events),
        (this = (BattlePerformancePlayer_o *)v3->fields.perf) == 0)
    || (BattlePerformance__CloseSkillSelectAddFuncConfWindow((BattlePerformance_o *)this, 0, 0),
        (v13 = v3->fields.list_param) == 0) )
  {
LABEL_39:
    sub_1C2D6EC(this, method);
  }
  v14 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(v13->max_length);
    v16 = v14 - 4;
    if ( v14 - 4 >= (int)max_length_low )
      break;
    if ( v16 >= max_length_low )
      goto LABEL_41;
    v17 = (UnityEngine_Object_o *)*((_QWORD *)&v13->obj.klass + v14);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v17, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v18 = v3->fields.list_param;
      if ( !v18 )
        goto LABEL_39;
      if ( v16 >= LODWORD(v18->max_length) )
        goto LABEL_41;
      this = (BattlePerformancePlayer_o *)*((_QWORD *)&v18->obj.klass + v14);
      if ( !this )
        goto LABEL_39;
      BattleServantParamComponent__setCloseMode((BattleServantParamComponent_o *)this, 1, 0);
      v19 = v3->fields.list_param;
      if ( !v19 )
        goto LABEL_39;
      if ( v16 >= LODWORD(v19->max_length) )
        goto LABEL_41;
      this = (BattlePerformancePlayer_o *)*((_QWORD *)&v19->obj.klass + v14);
      if ( !this )
        goto LABEL_39;
      BattleServantParamComponent__setCloseMode((BattleServantParamComponent_o *)this, 0, 0);
    }
    v13 = v3->fields.list_param;
    ++v14;
    if ( !v13 )
      goto LABEL_39;
  }
}


void BattlePerformancePlayer__OpenSkillConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleSkillConfComponent_o *skillConfWindow; // x0

  skillConfWindow = this->fields.skillConfWindow;
  if ( !skillConfWindow )
    sub_1C2D6EC(0, method);
  BattleSkillConfComponent__ToEnableLabelCollider(skillConfWindow, 0);
}


bool BattlePerformancePlayer__OpenSkillSelectAddFuncConfWindow(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  BattleSkillSelectAddFuncConfComponent_o *SkillSelectAddFuncConfWindow; // x21
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2A86B & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformancePlayer_SkillSelectedAddFunc__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    byte_4C2A86B = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_11;
  SkillSelectAddFuncConfWindow = BattlePerformance__get_SkillSelectAddFuncConfWindow(perf, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(
                                  (UnityEngine_Object_o *)SkillSelectAddFuncConfWindow,
                                  0,
                                  0);
  if ( ((unsigned __int8)perf & 1) != 0 )
    return 0;
  if ( !SkillSelectAddFuncConfWindow )
LABEL_11:
    sub_1C2D6EC(perf, skillInfo);
  if ( BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(SkillSelectAddFuncConfWindow, skillInfo, 0) )
  {
    v7 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *)sub_1C2D6DC(BattleSkillSelectAddFuncConfComponent_SelectCallBack_TypeInfo);
    BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattlePerformancePlayer_SkillSelectedAddFunc__,
      0);
    SkillSelectAddFuncConfWindow->fields.selectCallBack = v7;
    sub_1C2D434((CGThumbnailListItem_o *)&SkillSelectAddFuncConfWindow->fields.selectCallBack, (int32_t)v7, v8, v9);
    ((void (__fastcall *)(BattleSkillSelectAddFuncConfComponent_o *, _QWORD, const MethodInfo *))SkillSelectAddFuncConfWindow->klass->vtable._10_Open.methodPtr)(
      SkillSelectAddFuncConfWindow,
      0,
      SkillSelectAddFuncConfWindow->klass->vtable._10_Open.method);
    return 1;
  }
  return 0;
}


void BattlePerformancePlayer__ShowSvtFaceIcon(
        BattlePerformancePlayer_o *this,
        float duration,
        const MethodInfo *method)
{
  __int64 v3; // x2
  struct BattleServantParamComponent_array *list_param; // x19
  int max_length; // w8
  unsigned int v7; // w20

  list_param = this->fields.list_param;
  if ( !list_param )
    goto LABEL_9;
  max_length = list_param->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2D6F4(this, method, v3);
      this = (BattlePerformancePlayer_o *)list_param->m_Items[v7];
      if ( !this )
        break;
      BattleServantParamComponent__ShowFaceIcon((BattleServantParamComponent_o *)this, duration, 0);
      max_length = list_param->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_9:
    sub_1C2D6EC(this, method);
  }
}


void BattlePerformancePlayer__SkillSelectedAddFunc(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t selIndex,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v6; // x19
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  bool isOpenOtherWindow; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4C2A86C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&StringLiteral_3276/*"CANCEL"*/);
    byte_4C2A86C = 1;
  }
  isOpenOtherWindow = 0;
  if ( selIndex == -1 )
  {
    this = (BattlePerformancePlayer_o *)v6->fields.myfsm;
    if ( !this )
      goto LABEL_16;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_3276/*"CANCEL"*/, 0);
  }
  else
  {
    if ( !skillInfo )
      goto LABEL_16;
    BattleSkillInfoData__UpdateSelectAddIndex(skillInfo, selIndex, 0);
    BattlePerformancePlayer__WantUseSkill(v6, skillInfo, &isOpenOtherWindow, v7);
    if ( isOpenOtherWindow )
    {
      this = (BattlePerformancePlayer_o *)v6->fields.perf;
      if ( !this )
        goto LABEL_16;
      SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                               (BattlePerformance_o *)this,
                                                               0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(SkillSelectAddFuncConfWindow, 0, 0) )
      {
        this = (BattlePerformancePlayer_o *)v6->fields.perf;
        if ( this )
        {
          this = (BattlePerformancePlayer_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                (BattlePerformance_o *)this,
                                                0);
          if ( this )
          {
            LOBYTE(this->fields.actSkillObject) = 0;
            return;
          }
        }
LABEL_16:
        sub_1C2D6EC(this, skillInfo);
      }
    }
  }
}


void BattlePerformancePlayer__UpdateClassIconEffect(
        BattlePerformancePlayer_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v4; // x20
  struct BattleServantParamComponent_array *list_param; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x20
  intptr_t m_CachedPtr; // x8

  v4 = this;
  if ( (byte_4C2A87C & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A87C = 1;
  }
  if ( servantData )
  {
    list_param = v4->fields.list_param;
    if ( !list_param )
LABEL_18:
      sub_1C2D6EC(this, servantData);
    max_length = list_param->max_length;
    if ( (int)max_length >= 1 )
    {
      v7 = 0;
      do
      {
        if ( v7 >= (unsigned int)max_length )
          sub_1C2D6F4(this, servantData, method);
        v8 = (UnityEngine_Object_o *)list_param->m_Items[v7];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v8, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          if ( !v8 )
            goto LABEL_18;
          m_CachedPtr = v8[11].fields.m_CachedPtr;
          if ( m_CachedPtr )
          {
            if ( *(_DWORD *)(m_CachedPtr + 24) == servantData->fields.uniqueId )
              BattleServantParamComponent__UpdateClassIconEffect((BattleServantParamComponent_o *)v8, servantData, 0);
          }
        }
        LODWORD(max_length) = list_param->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)max_length );
    }
  }
}


void BattlePerformancePlayer__UseSkill(BattlePerformancePlayer_o *this, bool playSe, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct BattleLogic_UseSkillObject_o *useSkillObject; // x1
  BattlePerformance_o *logicSkill; // x0
  __int64 v10; // x1
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x20
  struct BattleLogic_o *logic; // x8
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *SkillSelectAddFuncConfWindow; // x20
  System_String_o *v17; // x20
  CommonUI_o *v18; // x21
  BattlePerformancePlayer___c_c *v19; // x8
  System_String_o *v20; // x22
  System_Action_o *_9__40_0; // x23
  Il2CppObject *v22; // x24
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  bool isOpenOtherWindow; // [xsp+44h] [xbp-4Ch] BYREF
  System_String_o *text; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C2A869 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattlePerformancePlayer_UseSkill__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_BattlePerformancePlayer___c__UseSkill_b__40_0__);
    sub_1C2D490(&BattlePerformancePlayer___c_TypeInfo);
    sub_1C2D490(&StringLiteral_3276/*"CANCEL"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2A869 = 1;
  }
  isOpenOtherWindow = 0;
  if ( playSe )
  {
    v6 = Method_BattlePerformancePlayer_UseSkill__;
    if ( (*((_BYTE *)Method_BattlePerformancePlayer_UseSkill__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformancePlayer_UseSkill__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
  }
  useSkillObject = this->fields.useSkillObject;
  this->fields.actSkillObject = useSkillObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actSkillObject, (int32_t)useSkillObject, (int32_t)method, v3);
  actSkillObject = this->fields.actSkillObject;
  if ( !actSkillObject )
    goto LABEL_31;
  skillInfo = actSkillObject->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_31;
  BattleSkillInfoData__UpdateSelectAddIndex(actSkillObject->fields.skillInfo, -1, 0);
  text = (System_String_o *)StringLiteral_1/*""*/;
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_31;
  logicSkill = (BattlePerformance_o *)logic->fields.logicSkill;
  if ( !logicSkill )
    goto LABEL_31;
  if ( BattleLogicSkill__checkConditions((BattleLogicSkill_o *)logicSkill, skillInfo, &text, 0) )
  {
    if ( !BattlePerformancePlayer__OpenSkillSelectAddFuncConfWindow(this, skillInfo, v14) )
    {
      BattlePerformancePlayer__WantUseSkill(this, skillInfo, &isOpenOtherWindow, v15);
      if ( isOpenOtherWindow )
      {
        logicSkill = this->fields.perf;
        if ( !logicSkill )
          goto LABEL_31;
        SkillSelectAddFuncConfWindow = (UnityEngine_Object_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(
                                                                 logicSkill,
                                                                 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(SkillSelectAddFuncConfWindow, 0, 0) )
        {
          logicSkill = this->fields.perf;
          if ( logicSkill )
          {
            logicSkill = (BattlePerformance_o *)BattlePerformance__get_SkillSelectAddFuncConfWindow(logicSkill, 0);
            if ( logicSkill )
            {
              LOBYTE(logicSkill->fields.actorcamera) = 0;
              return;
            }
          }
LABEL_31:
          sub_1C2D6EC(logicSkill, v10);
        }
      }
    }
  }
  else
  {
    logicSkill = (BattlePerformance_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = text;
    v18 = (CommonUI_o *)logicSkill;
    v19 = BattlePerformancePlayer___c_TypeInfo;
    if ( !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v19 = BattlePerformancePlayer___c_TypeInfo;
    }
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    _9__40_0 = v19->static_fields->__9__40_0;
    if ( !_9__40_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = BattlePerformancePlayer___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__40_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(_9__40_0, v22, Method_BattlePerformancePlayer___c__UseSkill_b__40_0__, 0);
      static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      static_fields->__9__40_0 = _9__40_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__40_0, (int32_t)_9__40_0, v24, v25);
    }
    if ( !v18 )
      goto LABEL_31;
    CommonUI__OpenNotificationDialog(v18, v20, v17, _9__40_0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
    logicSkill = (BattlePerformance_o *)this->fields.myfsm;
    if ( !logicSkill )
      goto LABEL_31;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)logicSkill, (System_String_o *)StringLiteral_3276/*"CANCEL"*/, 0);
  }
}


void BattlePerformancePlayer__WantUseSkill(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool *isOpenOtherWindow,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v6; // x20
  System_Int32_array *ValidTargetTypeArray; // x22
  System_Func_int__bool__o *v8; // x23
  const MethodInfo *v9; // x1
  bool IsExistBranchSkillInfo; // w0
  const MethodInfo *v11; // x2
  bool v12; // w8

  v6 = this;
  if ( (byte_4C2A86A & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_Target_isCommandType__);
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2A86A = 1;
  }
  if ( !skillInfo )
    goto LABEL_13;
  ValidTargetTypeArray = BattleSkillInfoData__get_ValidTargetTypeArray(skillInfo, 0);
  v8 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v8, 0, Method_Target_isCommandType__, 0);
  if ( !BasicHelper__Any_int__51083888(
          ValidTargetTypeArray,
          (System_Func_T__bool__o *)v8,
          (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856) )
  {
    IsExistBranchSkillInfo = BattleSkillInfoData__IsExistBranchSkillInfo(skillInfo, 0);
    if ( BattleSkillInfoData__IsSelectServant_46128452(ValidTargetTypeArray, IsExistBranchSkillInfo, 0) )
    {
      BattlePerformancePlayer__openSelectSvtWindow(v6, skillInfo, v11);
      goto LABEL_8;
    }
    this = (BattlePerformancePlayer_o *)v6->fields.logic;
    if ( this )
    {
      BattleLogic__wantUseSkill((BattleLogic_o *)this, skillInfo, skillInfo->fields.svtUniqueId, -1, 0);
      this = (BattlePerformancePlayer_o *)v6->fields.myfsm;
      if ( this )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
        v12 = 0;
        goto LABEL_12;
      }
    }
LABEL_13:
    sub_1C2D6EC(this, skillInfo);
  }
  BattlePerformancePlayer__openSelectCommandTypeWindow(v6, v9);
LABEL_8:
  v12 = 1;
LABEL_12:
  *isOpenOtherWindow = v12;
}


void BattlePerformancePlayer__checkSkipFlg(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *perf; // x0
  __int64 *v4; // x8
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  struct BattleLogic_UseSkillObject_o *v7; // x8
  struct BattleSkillInfoData_o *v8; // x8
  struct BattleLogic_UseSkillObject_o *v9; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleData_o *data; // x8
  struct BattleLogic_UseSkillObject_o *v13; // x1
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19

  if ( (byte_4C2A862 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9616/*"OK"*/);
    sub_1C2D490(&StringLiteral_3276/*"CANCEL"*/);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    sub_1C2D490(&StringLiteral_12231/*"SKIP"*/);
    byte_4C2A862 = 1;
  }
  perf = (BattleWindowComponent_o *)this->fields.perf;
  if ( !perf )
    goto LABEL_29;
  if ( !BattlePerformance__isOpenOrOpeningMainWindow((BattlePerformance_o *)perf, 0) )
  {
    perf = (BattleWindowComponent_o *)this->fields.skillConfWindow;
    if ( !perf )
      goto LABEL_29;
    perf = (BattleWindowComponent_o *)BattleWindowComponent__isOpenOrOpening(perf, 0);
    if ( ((unsigned __int8)perf & 1) == 0 )
    {
      tmp_useSkill = this->fields.tmp_useSkill;
      if ( tmp_useSkill )
      {
        skillInfo = tmp_useSkill->fields.skillInfo;
        if ( skillInfo )
        {
          perf = (BattleWindowComponent_o *)this->fields.data;
          if ( perf )
          {
            perf = (BattleWindowComponent_o *)BattleData__getServantData(
                                                (BattleData_o *)perf,
                                                skillInfo->fields.svtUniqueId,
                                                0);
            v7 = this->fields.tmp_useSkill;
            if ( v7 )
            {
              v8 = v7->fields.skillInfo;
              if ( v8 )
              {
                if ( perf )
                {
                  perf = (BattleWindowComponent_o *)BattleServantData__canUseSkill(
                                                      (BattleServantData_o *)perf,
                                                      v8->fields.index,
                                                      0);
                  if ( ((unsigned __int8)perf & 1) == 0 )
                    goto LABEL_25;
                  v9 = this->fields.tmp_useSkill;
                  if ( !v9 )
                    goto LABEL_29;
                  perf = (BattleWindowComponent_o *)v9->fields.skillInfo;
                  if ( !perf )
                    goto LABEL_29;
                  perf = (BattleWindowComponent_o *)BattleSkillInfoData__isChargeOK((BattleSkillInfoData_o *)perf, 0);
                  if ( ((unsigned __int8)perf & 1) != 0 )
                  {
                    data = this->fields.data;
                    if ( data )
                    {
                      if ( data->fields.systemflg_skipskillconf && !this->fields.isLongTap )
                      {
                        v13 = this->fields.tmp_useSkill;
                        this->fields.useSkillObject = v13;
                        p_useSkillObject = &this->fields.useSkillObject;
                        sub_1C2D434((CGThumbnailListItem_o *)p_useSkillObject, (int32_t)v13, v10, v11);
                        perf = (BattleWindowComponent_o *)*(p_useSkillObject - 14);
                        if ( perf )
                        {
                          v4 = &StringLiteral_12231/*"SKIP"*/;
                          goto LABEL_9;
                        }
                      }
                      else
                      {
                        perf = (BattleWindowComponent_o *)this->fields.myfsm;
                        if ( perf )
                        {
                          v4 = &StringLiteral_9616/*"OK"*/;
                          goto LABEL_9;
                        }
                      }
                    }
                  }
                  else
                  {
LABEL_25:
                    perf = (BattleWindowComponent_o *)this->fields.myfsm;
                    if ( perf )
                    {
                      v4 = &StringLiteral_5447/*"END_PROC"*/;
                      goto LABEL_9;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_29:
      sub_1C2D6EC(perf, method);
    }
  }
  perf = (BattleWindowComponent_o *)this->fields.myfsm;
  if ( !perf )
    goto LABEL_29;
  v4 = &StringLiteral_3276/*"CANCEL"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)perf, (System_String_o *)*v4, 0);
}


void BattlePerformancePlayer__checkTutorial(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattlePerformancePlayer_o *v2; // x19
  struct BattleData_o *data; // x8
  int32_t tutorialId; // w9
  __int64 *v5; // x8
  int32_t turnCount; // w9

  v2 = this;
  if ( (byte_4C2A877 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&StringLiteral_13607/*"TUTORIAL_SKILL"*/);
    byte_4C2A877 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_15;
  tutorialId = data->fields.tutorialId;
  if ( tutorialId == 2 )
  {
    turnCount = data->fields.turnCount;
    if ( turnCount != 1 )
    {
      if ( turnCount != 2 )
      {
LABEL_6:
        this = (BattlePerformancePlayer_o *)v2->fields.myfsm;
        if ( this )
        {
          v5 = &StringLiteral_5447/*"END_PROC"*/;
LABEL_8:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
          return;
        }
        goto LABEL_15;
      }
      if ( data->fields.tutorialState == -1 )
      {
        this = (BattlePerformancePlayer_o *)v2->fields.myfsm;
        if ( this )
        {
          v5 = &StringLiteral_13607/*"TUTORIAL_SKILL"*/;
          goto LABEL_8;
        }
LABEL_15:
        sub_1C2D6EC(this, method);
      }
    }
  }
  else if ( tutorialId != 1 )
  {
    goto LABEL_6;
  }
}


void BattlePerformancePlayer__closeSvtConfWindow(
        BattlePerformancePlayer_o *this,
        float alphatime,
        BattleWindowComponent_EndCall_o *endCall,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *confwindowComp; // x0

  confwindowComp = this->fields.confwindowComp;
  if ( !confwindowComp )
    sub_1C2D6EC(0, endCall);
  BattleServantConfConponent__Close(confwindowComp, endCall, method);
}


void BattlePerformancePlayer__deleteStatus(BattlePerformancePlayer_o *this, int32_t index, const MethodInfo *method)
{
  UnityEngine_Component_o *IsValidIndex_object__51106464; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleServantParamComponent_array *list_param; // x8
  UnityEngine_Object_o *v9; // x21
  struct BattleServantParamComponent_array *v10; // x8
  BattleServantData_o *m_CachedPtr; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *list_ID; // x8

  if ( (byte_4C2A854 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_IsValidIndex_BattleServantParamComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A854 = 1;
  }
  IsValidIndex_object__51106464 = (UnityEngine_Component_o *)BasicHelper__IsValidIndex_object__51106464(
                                                               (System_Object_array *)this->fields.list_param,
                                                               index,
                                                               (const MethodInfo_30BD2A0 *)Method_BasicHelper_IsValidIndex_BattleServantParamComponent___);
  if ( ((unsigned __int8)IsValidIndex_object__51106464 & 1) != 0 )
  {
    list_param = this->fields.list_param;
    if ( !list_param )
      goto LABEL_20;
    if ( LODWORD(list_param->max_length) <= index )
      goto LABEL_21;
    v9 = (UnityEngine_Object_o *)list_param->m_Items[index];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsValidIndex_object__51106464 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
    if ( ((unsigned __int8)IsValidIndex_object__51106464 & 1) != 0 )
    {
      v10 = this->fields.list_param;
      if ( v10 )
      {
        if ( LODWORD(v10->max_length) <= index )
          goto LABEL_21;
        IsValidIndex_object__51106464 = (UnityEngine_Component_o *)v10->m_Items[index];
        if ( IsValidIndex_object__51106464 )
        {
          m_CachedPtr = (BattleServantData_o *)IsValidIndex_object__51106464[11].fields.m_CachedPtr;
          if ( !m_CachedPtr
            || (gameObject = UnityEngine_Component__get_gameObject(IsValidIndex_object__51106464, 0),
                BattleServantData__delParamObject(m_CachedPtr, gameObject, 0),
                (v10 = this->fields.list_param) != 0) )
          {
            if ( LODWORD(v10->max_length) <= index )
              goto LABEL_21;
            IsValidIndex_object__51106464 = (UnityEngine_Component_o *)v10->m_Items[index];
            if ( IsValidIndex_object__51106464 )
            {
              IsValidIndex_object__51106464 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, _QWORD, _QWORD, Il2CppClass *))IsValidIndex_object__51106464->klass[1]._1.element_class)(
                                                                           IsValidIndex_object__51106464,
                                                                           0,
                                                                           0,
                                                                           IsValidIndex_object__51106464->klass[1]._1.castClass);
              list_ID = this->fields.list_ID;
              if ( list_ID )
              {
                if ( LODWORD(list_ID->max_length) > index )
                {
                  list_ID->m_Items[index] = -1;
                  return;
                }
LABEL_21:
                sub_1C2D6F4(IsValidIndex_object__51106464, v6, v7);
              }
            }
          }
        }
      }
LABEL_20:
      sub_1C2D6EC(IsValidIndex_object__51106464, v6);
    }
  }
}


void BattlePerformancePlayer__endSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C2A870 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5450/*"END_SKILL"*/);
    byte_4C2A870 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5450/*"END_SKILL"*/, 0);
}


void BattlePerformancePlayer__initSvtConfWindow(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleServantConfConponent_o *confwindowComp; // x0
  struct BattleServantConfConponent_o *v5; // x20
  BattleServantConfConponent_CloseButtonCallBack_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A874 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformancePlayer_onClickConfClose__);
    sub_1C2D490(&BattleServantConfConponent_CloseButtonCallBack_TypeInfo);
    byte_4C2A874 = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_8;
  BattleServantConfConponent__Initialize(confwindowComp, this->fields.data, v2);
  confwindowComp = this->fields.confwindowComp;
  if ( !confwindowComp
    || (((void (__fastcall *)(BattleServantConfConponent_o *, const MethodInfo *))confwindowComp->klass->vtable._7_setInitialPos.methodPtr)(
          confwindowComp,
          confwindowComp->klass->vtable._7_setInitialPos.method),
        (confwindowComp = this->fields.confwindowComp) == 0)
    || (((void (__fastcall *)(BattleServantConfConponent_o *, const MethodInfo *))confwindowComp->klass->vtable._9_setClose.methodPtr)(
          confwindowComp,
          confwindowComp->klass->vtable._9_setClose.method),
        v5 = this->fields.confwindowComp,
        v6 = (BattleServantConfConponent_CloseButtonCallBack_o *)sub_1C2D6DC(BattleServantConfConponent_CloseButtonCallBack_TypeInfo),
        BattleServantConfConponent_CloseButtonCallBack___ctor(
          v6,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_onClickConfClose__,
          0),
        !v5) )
  {
LABEL_8:
    sub_1C2D6EC(confwindowComp, method);
  }
  v5->fields.callback_close = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.callback_close, (int32_t)v6, v7, v8);
}


bool BattlePerformancePlayer__isOpenSvtConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleWindowComponent_o *confwindowComp; // x0

  confwindowComp = (BattleWindowComponent_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    sub_1C2D6EC(0, method);
  return BattleWindowComponent__isOpen(confwindowComp, 0);
}


void BattlePerformancePlayer__modeComPlayerStatus(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePerformancePlayer_o *v3; // x19
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v5; // x22
  __int64 v6; // x24
  int max_length; // w9
  unsigned int v8; // w20
  struct BattleServantParamComponent_array *v9; // x8
  struct UnityEngine_Vector3_array *list_pos; // x8
  struct BattleServantParamComponent_array *v11; // x8
  UnityEngine_Transform_o *transform; // x20
  struct BattleServantParamComponent_array *v13; // x8
  __int64 v14; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v16; // x23
  UnityEngine_Object_o *v17; // x20
  struct BattleServantParamComponent_array *v18; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = this;
  if ( (byte_4C2A85F & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A85F = 1;
  }
  list_param = v3->fields.list_param;
  if ( !list_param )
    goto LABEL_36;
  v5 = 0;
  v6 = 4;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      break;
    if ( v8 >= max_length )
      goto LABEL_38;
    this = (BattlePerformancePlayer_o *)*((_QWORD *)&list_param->obj.klass + v6);
    if ( this )
    {
      this = (BattlePerformancePlayer_o *)UnityEngine_Component__GetComponent_object_(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( this )
      {
        v20.fields.r = 1.0;
        v20.fields.g = 1.0;
        v20.fields.b = 1.0;
        v20.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)this, v20, 0);
        v9 = v3->fields.list_param;
        if ( v9 )
        {
          if ( v8 >= LODWORD(v9->max_length) )
            goto LABEL_38;
          this = (BattlePerformancePlayer_o *)*((_QWORD *)&v9->obj.klass + v6);
          if ( this )
          {
            this = (BattlePerformancePlayer_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
            list_pos = v3->fields.list_pos;
            if ( list_pos )
            {
              if ( v8 >= LODWORD(list_pos->max_length) )
                goto LABEL_38;
              if ( this )
              {
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, list_pos->m_Items[v5], 0);
                v11 = v3->fields.list_param;
                if ( v11 )
                {
                  if ( v8 >= LODWORD(v11->max_length) )
LABEL_38:
                    sub_1C2D6F4(this, method, v2);
                  this = (BattlePerformancePlayer_o *)*((_QWORD *)&v11->obj.klass + v6);
                  if ( this )
                  {
                    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                    v19.fields.x = 0.0;
                    v19.fields.y = 0.0;
                    v19.fields.z = 0.0;
                    v21 = UnityEngine_Quaternion__Internal_FromEulerRad(v19, 0);
                    if ( transform )
                    {
                      UnityEngine_Transform__set_localRotation(transform, v21, 0);
                      list_param = v3->fields.list_param;
                      ++v6;
                      ++v5;
                      if ( list_param )
                        continue;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_36;
  }
  this = (BattlePerformancePlayer_o *)v3->fields.confwindowComp;
  if ( !this
    || (BattleServantConfConponent__Close((BattleServantConfConponent_o *)this, 0, v2),
        (this = (BattlePerformancePlayer_o *)v3->fields.skillConfWindow) == 0)
    || (((void (__fastcall *)(BattlePerformancePlayer_o *, _QWORD, void *))this->klass[1]._1.fields)(
          this,
          0,
          this->klass[1]._1.events),
        (this = (BattlePerformancePlayer_o *)v3->fields.perf) == 0)
    || (BattlePerformance__CloseSkillSelectAddFuncConfWindow((BattlePerformance_o *)this, 0, 0),
        (v13 = v3->fields.list_param) == 0) )
  {
LABEL_36:
    sub_1C2D6EC(this, method);
  }
  v14 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(v13->max_length);
    v16 = v14 - 4;
    if ( v14 - 4 >= (int)max_length_low )
      break;
    if ( v16 >= max_length_low )
      goto LABEL_38;
    v17 = (UnityEngine_Object_o *)*((_QWORD *)&v13->obj.klass + v14);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v17, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v18 = v3->fields.list_param;
      if ( !v18 )
        goto LABEL_36;
      if ( v16 >= LODWORD(v18->max_length) )
        goto LABEL_38;
      this = (BattlePerformancePlayer_o *)*((_QWORD *)&v18->obj.klass + v14);
      if ( !this )
        goto LABEL_36;
      BattleServantParamComponent__setCloseMode((BattleServantParamComponent_o *)this, 0, 0);
    }
    v13 = v3->fields.list_param;
    ++v14;
    if ( !v13 )
      goto LABEL_36;
  }
}


void BattlePerformancePlayer__modeTacPlayerStatus(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleServantParamComponent_o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v7; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v9; // x23
  UnityEngine_Object_o *v10; // x20
  struct BattleServantParamComponent_array *v11; // x8

  if ( (byte_4C2A857 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A857 = 1;
  }
  BattlePerformancePlayer__updateView(this, method);
  list_param = this->fields.list_param;
  if ( !list_param )
LABEL_15:
    sub_1C2D6EC(v3, v4);
  v7 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(list_param->max_length);
    v9 = v7 - 4;
    if ( v7 - 4 >= (int)max_length_low )
      break;
    if ( v9 >= max_length_low )
      goto LABEL_17;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&list_param->obj.klass + v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v3 = (BattleServantParamComponent_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
    if ( ((unsigned __int8)v3 & 1) == 0 )
    {
      v11 = this->fields.list_param;
      if ( !v11 )
        goto LABEL_15;
      if ( v9 >= LODWORD(v11->max_length) )
LABEL_17:
        sub_1C2D6F4(v3, v4, v5);
      v3 = (BattleServantParamComponent_o *)*((_QWORD *)&v11->obj.klass + v7);
      if ( !v3 )
        goto LABEL_15;
      BattleServantParamComponent__setOpenMode(v3, this->fields.isPlayCommandSpellEffectStartAnim, 0);
    }
    list_param = this->fields.list_param;
    ++v7;
    if ( !list_param )
      goto LABEL_15;
  }
  this->fields.isPlayCommandSpellEffectStartAnim = 1;
}


void BattlePerformancePlayer__onClickConfClose(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C2A85A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3439/*"CLICK_CLOSE"*/);
    byte_4C2A85A = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_3439/*"CLICK_CLOSE"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformancePlayer__onClickServant(
        BattlePerformancePlayer_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v4; // x20
  struct BattleServantConfConponent_o *confwindowComp; // x8
  struct BattleServantData_o *bsvtData; // x8
  __int64 *v7; // x8

  v4 = this;
  if ( (byte_4C2A858 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3480/*"CLICK_SVTWINDOW"*/);
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&StringLiteral_3439/*"CLICK_CLOSE"*/);
    byte_4C2A858 = 1;
  }
  confwindowComp = v4->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_11;
  bsvtData = confwindowComp->fields.bsvtData;
  if ( !bsvtData || bsvtData->fields.uniqueId != uniqueID )
  {
    this = (BattlePerformancePlayer_o *)v4->fields.myfsm;
    v4->fields.tmp_uniqueId = uniqueID;
    if ( this )
    {
      v7 = &StringLiteral_3480/*"CLICK_SVTWINDOW"*/;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C2D6EC(this, *(_QWORD *)&uniqueID);
  }
  this = (BattlePerformancePlayer_o *)v4->fields.myfsm;
  if ( !this )
    goto LABEL_11;
  v7 = &StringLiteral_3439/*"CLICK_CLOSE"*/;
LABEL_10:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0);
}


void BattlePerformancePlayer__onClickSkillCancel(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C2A868 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3276/*"CANCEL"*/);
    byte_4C2A868 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_3276/*"CANCEL"*/, 0);
}


void BattlePerformancePlayer__onClickSkillIcon(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        bool isLong,
        const MethodInfo *method)
{
  bool v6; // w22
  BattleLogic_UseSkillObject_o *v7; // x20
  __int64 v8; // x1
  BattleData_o *data; // x0
  struct BattleData_o *v10; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleLogic_UseSkillObject_o **p_tmp_useSkill; // x19

  v6 = isLong;
  if ( (byte_4C2A861 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C2D490(&StringLiteral_3474/*"CLICK_SKILLICON"*/);
    byte_4C2A861 = 1;
  }
  v7 = (BattleLogic_UseSkillObject_o *)sub_1C2D6DC(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v7, skillInfo, 0);
  data = this->fields.data;
  this->fields.isLongTap = v6;
  if ( !data )
    goto LABEL_20;
  data = (BattleData_o *)BattleData__isTutorial(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_16;
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_20;
  if ( v10->fields.tutorialId != 2 || v10->fields.turnCount != 2 )
    goto LABEL_16;
  if ( !skillInfo )
    goto LABEL_20;
  if ( skillInfo->fields.type == 11 && skillInfo->fields.index == 1 )
  {
LABEL_16:
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_20;
    statusPerf = perf->fields.statusPerf;
    if ( !statusPerf )
      goto LABEL_20;
    data = (BattleData_o *)statusPerf->fields.masterPerf;
    if ( !data )
      goto LABEL_20;
    if ( BattlePerformanceMaster__isCloseEnemyConf((BattlePerformanceMaster_o *)data, 0) )
    {
      data = (BattleData_o *)this->fields.logic;
      if ( !data )
        goto LABEL_20;
      if ( BattleLogic__isTimingUseSkill((BattleLogic_o *)data, 0) )
      {
        this->fields.tmp_useSkill = v7;
        p_tmp_useSkill = &this->fields.tmp_useSkill;
        sub_1C2D434((CGThumbnailListItem_o *)p_tmp_useSkill, (int32_t)v7, v13, v14);
        data = (BattleData_o *)*(p_tmp_useSkill - 13);
        if ( data )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_3474/*"CLICK_SKILLICON"*/, 0);
          return;
        }
LABEL_20:
        sub_1C2D6EC(data, v8);
      }
    }
  }
}


void BattlePerformancePlayer__onClickSkillOK(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  PlayMakerFSM_o *v10; // x0

  if ( (byte_4C2A867 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C2D490(&StringLiteral_9616/*"OK"*/);
    byte_4C2A867 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_1C2D6DC(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0);
  this->fields.useSkillObject = v5;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_1C2D434((CGThumbnailListItem_o *)p_useSkillObject, (int32_t)v5, v7, v8);
  v10 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v10 )
    sub_1C2D6EC(0, v9);
  PlayMakerFSM__SendEvent(v10, (System_String_o *)StringLiteral_9616/*"OK"*/, 0);
}


void BattlePerformancePlayer__onCloseConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *confwindowComp; // x0
  const MethodInfo *v4; // x5
  __int64 v5; // x2
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v7; // x21
  int max_length; // w9

  if ( (byte_4C2A85C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2A85C = 1;
  }
  confwindowComp = (UnityEngine_Component_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_12;
  confwindowComp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(confwindowComp, 0);
  if ( !confwindowComp )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)confwindowComp, 0, 0);
  confwindowComp = (UnityEngine_Component_o *)this->fields.confwindowComp;
  if ( !confwindowComp )
    goto LABEL_12;
  BattleServantConfConponent__setConfData((BattleServantConfConponent_o *)confwindowComp, 0, 1, 0, 0, v4);
  list_param = this->fields.list_param;
  if ( !list_param )
    goto LABEL_12;
  v7 = 0;
  while ( 1 )
  {
    max_length = list_param->max_length;
    if ( (int)v7 >= max_length )
      break;
    if ( (unsigned int)v7 >= max_length )
      sub_1C2D6F4(confwindowComp, method, v5);
    confwindowComp = (UnityEngine_Component_o *)list_param->m_Items[v7];
    if ( confwindowComp )
    {
      BattleServantParamComponent__setTouch((BattleServantParamComponent_o *)confwindowComp, 1, 0);
      list_param = this->fields.list_param;
      ++v7;
      if ( list_param )
        continue;
    }
    goto LABEL_12;
  }
  confwindowComp = (UnityEngine_Component_o *)this->fields.perf;
  if ( !confwindowComp
    || (BattlePerformance__changeAttackButton((BattlePerformance_o *)confwindowComp, 1, 1, 1, 0),
        (confwindowComp = (UnityEngine_Component_o *)this->fields.myfsm) == 0) )
  {
LABEL_12:
    sub_1C2D6EC(confwindowComp, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)confwindowComp, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattlePerformancePlayer__onOpenConfComplete(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C2A876 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2A876 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattlePerformancePlayer__openSelectCommandTypeWindow(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x8
  struct BattleSkillInfoData_o *skillInfo; // x8
  struct BattleLogic_UseSkillObject_o *v6; // x8
  BattleServantData_o *v7; // x20
  const MethodInfo *v8; // x2
  struct BattlePerformance_o *v9; // x8
  SelectTdCommandController_o *v10; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x9
  struct BattleSelectCommandTypeWindow_o *SelectCommandWindow; // x0
  struct BattleSelectCommandTypeWindow_o **p_selectCommandTypeWindow; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct BattleSelectCommandTypeWindow_o *selectCommandTypeWindow; // x23
  BattleSelectCommandTypeWindow_SelectServantCallBack_o *v17; // x24
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C2A871 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformancePlayer_selectedCommandType__);
    sub_1C2D490(&BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo);
    byte_4C2A871 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  perf = (BattlePerformance_o *)BattlePerformance__getSelectMainSubSvtWindow(perf, 0);
  if ( !perf )
    goto LABEL_20;
  ((void (__fastcall *)(BattlePerformance_o *, Il2CppClass *))perf->klass[1]._1.declaringType)(
    perf,
    perf->klass[1]._1.parent);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  perf = (BattlePerformance_o *)BattlePerformance__getSelectSvtWindow(perf, 0);
  if ( !perf )
    goto LABEL_20;
  ((void (__fastcall *)(BattlePerformance_o *, Il2CppClass *))perf->klass[1]._1.declaringType)(
    perf,
    perf->klass[1]._1.parent);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_20;
  BattlePerformance__SetCloseCommandTypeWindow(perf, 0);
  tmp_useSkill = this->fields.tmp_useSkill;
  if ( !tmp_useSkill )
    goto LABEL_20;
  skillInfo = tmp_useSkill->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_20;
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_20;
  perf = (BattlePerformance_o *)BattleData__getServantData((BattleData_o *)perf, skillInfo->fields.svtUniqueId, 0);
  v6 = this->fields.tmp_useSkill;
  if ( !v6 )
    goto LABEL_20;
  v7 = (BattleServantData_o *)perf;
  perf = (BattlePerformance_o *)SelectTdCommandController__MakeController(
                                  (BattleServantData_o *)perf,
                                  v6->fields.skillInfo,
                                  0);
  v9 = this->fields.perf;
  if ( !v9 )
    goto LABEL_20;
  v10 = (SelectTdCommandController_o *)perf;
  if ( !perf )
    goto LABEL_20;
  m_CancellationTokenSource = perf->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_20;
  perf = (BattlePerformance_o *)v9->fields.statusPerf;
  if ( !perf )
    goto LABEL_20;
  SelectCommandWindow = BattlePerformanceStatus__GetSelectCommandWindow(
                          (BattlePerformanceStatus_o *)perf,
                          (int32_t)m_CancellationTokenSource->fields._kernelEvent,
                          v8);
  this->fields.selectCommandTypeWindow = SelectCommandWindow;
  p_selectCommandTypeWindow = &this->fields.selectCommandTypeWindow;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectCommandTypeWindow, (int32_t)SelectCommandWindow, v14, v15);
  selectCommandTypeWindow = this->fields.selectCommandTypeWindow;
  v17 = (BattleSelectCommandTypeWindow_SelectServantCallBack_o *)sub_1C2D6DC(BattleSelectCommandTypeWindow_SelectServantCallBack_TypeInfo);
  BattleSelectCommandTypeWindow_SelectServantCallBack___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedCommandType__,
    0);
  if ( !selectCommandTypeWindow
    || (selectCommandTypeWindow->fields.selectCallBack = v17,
        sub_1C2D434((CGThumbnailListItem_o *)&selectCommandTypeWindow->fields.selectCallBack, (int32_t)v17, v18, v19),
        (perf = (BattlePerformance_o *)*p_selectCommandTypeWindow) == 0)
    || (BattleSelectCommandTypeWindow__Setup((BattleSelectCommandTypeWindow_o *)perf, v7, v10, 0),
        (perf = (BattlePerformance_o *)*p_selectCommandTypeWindow) == 0) )
  {
LABEL_20:
    sub_1C2D6EC(perf, method);
  }
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.generic_class)(
    perf,
    0,
    perf->klass[1]._1.typeMetadataHandle);
}


void BattlePerformancePlayer__openSelectSvtWindow(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  struct BattleSelectServantWindow_o *SelectSvtWindow; // x0
  struct BattleSelectServantWindow_o **p_selectSvtWindow; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2
  bool v11; // w1
  struct BattleSelectServantWindow_o *v12; // x22
  BattleSelectServantWindow_SelectServantCallBack_o *v13; // x23
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleSelectServantWindow_o *v17; // x22
  const MethodInfo *v18; // x5
  struct BattleData_o *data; // x8

  if ( (byte_4C2A86D & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformancePlayer_selectedSvt__);
    sub_1C2D490(&BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
    byte_4C2A86D = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_22;
  perf = (BattlePerformance_o *)BattlePerformance__getSelectMainSubSvtWindow(perf, 0);
  if ( !perf )
    goto LABEL_22;
  ((void (__fastcall *)(BattlePerformance_o *, Il2CppClass *))perf->klass[1]._1.declaringType)(
    perf,
    perf->klass[1]._1.parent);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_22;
  BattlePerformance__SetCloseCommandTypeWindow(perf, 0);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_22;
  SelectSvtWindow = BattlePerformance__getSelectSvtWindow(perf, 0);
  this->fields.selectSvtWindow = SelectSvtWindow;
  p_selectSvtWindow = &this->fields.selectSvtWindow;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.selectSvtWindow, (int32_t)SelectSvtWindow, v8, v9);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_22;
  if ( BattleData__isTutorialSelectsvtCancel((BattleData_o *)perf, 0) )
  {
    BattlePerformancePlayer__procTurorial(this, 3, v10);
    perf = (BattlePerformance_o *)this->fields.selectSvtWindow;
    if ( !perf )
      goto LABEL_22;
    v11 = 0;
  }
  else
  {
    perf = (BattlePerformance_o *)*p_selectSvtWindow;
    if ( !*p_selectSvtWindow )
      goto LABEL_22;
    v11 = 1;
  }
  BattleSelectServantWindow__setUseClose((BattleSelectServantWindow_o *)perf, v11, v10);
  v12 = this->fields.selectSvtWindow;
  v13 = (BattleSelectServantWindow_SelectServantCallBack_o *)sub_1C2D6DC(BattleSelectServantWindow_SelectServantCallBack_TypeInfo);
  BattleSelectServantWindow_SelectServantCallBack___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattlePerformancePlayer_selectedSvt__,
    v14);
  if ( !v12 )
    goto LABEL_22;
  v12->fields.selectCallBack = v13;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.selectCallBack, (int32_t)v13, v15, v16);
  perf = (BattlePerformance_o *)this->fields.data;
  if ( !perf )
    goto LABEL_22;
  v17 = this->fields.selectSvtWindow;
  perf = (BattlePerformance_o *)BattleData__getFieldPlayerServantList((BattleData_o *)perf, 0);
  if ( !v17 )
    goto LABEL_22;
  BattleSelectServantWindow__SetServantData(v17, (BattleServantData_array *)perf, skillInfo, -1, 0, v18);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.tutorialId == 2 )
  {
    perf = (BattlePerformance_o *)*p_selectSvtWindow;
    if ( !*p_selectSvtWindow )
      goto LABEL_22;
    BattleSelectServantWindow__SetServantRootTutorialPosition(
      (BattleSelectServantWindow_o *)perf,
      (const MethodInfo *)skillInfo);
  }
  perf = (BattlePerformance_o *)*p_selectSvtWindow;
  if ( !*p_selectSvtWindow )
LABEL_22:
    sub_1C2D6EC(perf, skillInfo);
  ((void (__fastcall *)(BattlePerformance_o *, _QWORD, void *))perf->klass[1]._1.generic_class)(
    perf,
    0,
    perf->klass[1]._1.typeMetadataHandle);
}


void BattlePerformancePlayer__openSvtConfWindow(
        BattlePerformancePlayer_o *this,
        float alphatime,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *confwindowComp; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C2A875 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformancePlayer_onOpenConfComplete__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C2A875 = 1;
  }
  confwindowComp = this->fields.confwindowComp;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v5, (Il2CppObject *)this, Method_BattlePerformancePlayer_onOpenConfComplete__, 0);
  if ( !confwindowComp )
    sub_1C2D6EC(v6, v7);
  BattleServantConfConponent__Open(confwindowComp, v5, v8);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformancePlayer__playAttackEffect(
        BattlePerformancePlayer_o *this,
        int32_t uniqueID,
        const MethodInfo *method)
{
  struct System_Int32_array *list_ID; // x8
  BattlePerformancePlayer_o *v4; // x19
  unsigned __int64 v6; // x21
  unsigned __int64 max_length_low; // x9
  struct BattleServantParamComponent_array *list_param; // x8

  list_ID = this->fields.list_ID;
  if ( !list_ID )
LABEL_11:
    sub_1C2D6EC(this, *(_QWORD *)&uniqueID);
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length_low = LODWORD(list_ID->max_length);
    if ( (__int64)v6 >= (int)max_length_low )
      break;
    if ( v6 >= max_length_low )
      goto LABEL_13;
    if ( list_ID->m_Items[v6] == uniqueID )
    {
      list_param = v4->fields.list_param;
      if ( !list_param )
        goto LABEL_11;
      if ( v6 >= LODWORD(list_param->max_length) )
LABEL_13:
        sub_1C2D6F4(this, *(_QWORD *)&uniqueID, method);
      this = (BattlePerformancePlayer_o *)list_param->m_Items[v6];
      if ( !this )
        goto LABEL_11;
      BattleServantParamComponent__playAttackEffect((BattleServantParamComponent_o *)this, 0);
      list_ID = v4->fields.list_ID;
    }
    ++v6;
    if ( !list_ID )
      goto LABEL_11;
  }
}


void BattlePerformancePlayer__procCloseAll(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PlayMakerFSM_o *buffConfWindow; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8

  if ( (byte_4C2A85D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2A85D = 1;
  }
  BattlePerformancePlayer__procCloseConf(this, 0, v2);
  perf = this->fields.perf;
  if ( !perf
    || (statusPerf = perf->fields.statusPerf) == 0
    || (buffConfWindow = (PlayMakerFSM_o *)statusPerf->fields.buffConfWindow) == 0
    || (((void (__fastcall *)(PlayMakerFSM_o *, _QWORD, void *))buffConfWindow->klass[1]._1.generic_class)(
          buffConfWindow,
          0,
          buffConfWindow->klass[1]._1.typeMetadataHandle),
        (buffConfWindow = this->fields.myfsm) == 0) )
  {
    sub_1C2D6EC(buffConfWindow, v5);
  }
  PlayMakerFSM__SendEvent(buffConfWindow, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformancePlayer__procCloseConf(BattlePerformancePlayer_o *this, bool flg, const MethodInfo *method)
{
  BattlePerformancePlayer_o *v4; // x19
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v8; // x22
  int max_length; // w9
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattleWindowComponent_EndCall_o *v12; // x20
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_4C2A85B & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformancePlayer_onCloseConfComplete__);
    sub_1C2D490(&Method_BattlePerformancePlayer_procCloseConf__);
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C2A85B = 1;
  }
  if ( flg )
  {
    v5 = Method_BattlePerformancePlayer_procCloseConf__;
    if ( (*((_BYTE *)Method_BattlePerformancePlayer_procCloseConf__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformancePlayer_procCloseConf__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlayCommonSe(v6, 12, 0, 0);
  }
  list_param = v4->fields.list_param;
  if ( !list_param )
    goto LABEL_13;
  v8 = 0;
  while ( 1 )
  {
    max_length = list_param->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1C2D6F4(this, flg, method);
    this = (BattlePerformancePlayer_o *)list_param->m_Items[v8];
    if ( this )
    {
      BattleServantParamComponent__playEndShowServant((BattleServantParamComponent_o *)this, 0);
      list_param = v4->fields.list_param;
      ++v8;
      if ( list_param )
        continue;
    }
    goto LABEL_13;
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_13;
  statusPerf = perf->fields.statusPerf;
  if ( !statusPerf
    || (this = (BattlePerformancePlayer_o *)statusPerf->fields.buffConfWindow) == 0
    || (((void (__fastcall *)(BattlePerformancePlayer_o *, _QWORD, void *))this->klass[1]._1.fields)(
          this,
          0,
          this->klass[1]._1.events),
        (this = (BattlePerformancePlayer_o *)v4->fields.perf) == 0)
    || (BattlePerformance__changeAttackButton((BattlePerformance_o *)this, 1, 0, 1, 0),
        v12 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v12,
          (Il2CppObject *)v4,
          Method_BattlePerformancePlayer_onCloseConfComplete__,
          0),
        (this = (BattlePerformancePlayer_o *)v4->fields.confwindowComp) == 0) )
  {
LABEL_13:
    sub_1C2D6EC(this, flg);
  }
  BattleServantConfConponent__Close((BattleServantConfConponent_o *)this, v12, v13);
}


void BattlePerformancePlayer__procCloseSkillConf(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct BattleSkillConfComponent_o *skillConfWindow; // x20
  BattleWindowComponent_EndCall_o *v6; // x21
  BattlePerformance_o *perf; // x0
  __int64 v8; // x1

  if ( (byte_4C2A864 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformancePlayer_CloseSkillConfComp__);
    sub_1C2D490(&Method_BattlePerformancePlayer_procCloseSkillConf__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C2A864 = 1;
  }
  v3 = Method_BattlePerformancePlayer_procCloseSkillConf__;
  if ( (*((_BYTE *)Method_BattlePerformancePlayer_procCloseSkillConf__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformancePlayer_procCloseSkillConf__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlayCommonSe(v4, 10, 0, 0);
  skillConfWindow = this->fields.skillConfWindow;
  v6 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(v6, (Il2CppObject *)this, Method_BattlePerformancePlayer_CloseSkillConfComp__, 0);
  if ( !skillConfWindow
    || (((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))skillConfWindow->klass->vtable._12_Close.methodPtr)(
          skillConfWindow,
          v6,
          skillConfWindow->klass->vtable._12_Close.method),
        (perf = this->fields.perf) == 0) )
  {
    sub_1C2D6EC(perf, v8);
  }
  BattlePerformance__CloseSkillSelectAddFuncConfWindow(perf, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformancePlayer__procOpenSkillConf(
        BattlePerformancePlayer_o *this,
        bool cancelFlg,
        const MethodInfo *method)
{
  PlayMakerFSM_o *otherFsm; // x0
  struct BattleLogic_UseSkillObject_o *tmp_useSkill; // x22
  struct BattleSkillConfComponent_o *skillConfWindow; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleSkillConfComponent_o *v10; // x20
  BattleWindowComponent_EndCall_o *v11; // x21

  if ( (byte_4C2A863 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformancePlayer_OpenSkillConfComplete__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1C2D490(&StringLiteral_15367/*"WAIT_OTHER_SKILL"*/);
    byte_4C2A863 = 1;
  }
  otherFsm = this->fields.otherFsm;
  if ( !otherFsm )
    goto LABEL_9;
  tmp_useSkill = this->fields.tmp_useSkill;
  PlayMakerFSM__SendEvent(otherFsm, (System_String_o *)StringLiteral_15367/*"WAIT_OTHER_SKILL"*/, 0);
  skillConfWindow = this->fields.skillConfWindow;
  otherFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !skillConfWindow
    || (skillConfWindow->fields.target = (struct UnityEngine_GameObject_o *)otherFsm,
        sub_1C2D434((CGThumbnailListItem_o *)&skillConfWindow->fields.target, (int32_t)otherFsm, v8, v9),
        !tmp_useSkill)
    || (otherFsm = (PlayMakerFSM_o *)this->fields.skillConfWindow) == 0
    || (BattleSkillConfComponent__SetSkillConf(
          (BattleSkillConfComponent_o *)otherFsm,
          tmp_useSkill->fields.skillInfo,
          cancelFlg,
          1,
          0),
        v10 = this->fields.skillConfWindow,
        v11 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo),
        BattleWindowComponent_EndCall___ctor(
          v11,
          (Il2CppObject *)this,
          Method_BattlePerformancePlayer_OpenSkillConfComplete__,
          0),
        !v10) )
  {
LABEL_9:
    sub_1C2D6EC(otherFsm, cancelFlg);
  }
  ((void (__fastcall *)(struct BattleSkillConfComponent_o *, BattleWindowComponent_EndCall_o *, const MethodInfo *))v10->klass->vtable._10_Open.methodPtr)(
    v10,
    v11,
    v10->klass->vtable._10_Open.method);
}


void BattlePerformancePlayer__procSelectServant(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v4; // x8
  int32_t tmp_uniqueId; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x2
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v10; // x21
  int max_length; // w10
  struct System_Int32_array *list_ID; // x9
  const MethodInfo *v13; // x5
  struct BattleServantParamComponent_array *v14; // x8
  BattleServantParamComponent_o *v15; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  float v18; // s0
  const MethodInfo *v19; // x1

  if ( (byte_4C2A859 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattlePerformancePlayer_procSelectServant__);
    sub_1C2D490(&StringLiteral_12309/*"START_CLOSE"*/);
    byte_4C2A859 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (BattleData_o *)BattleData__isTutorial(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_9;
  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_33;
  if ( v4->fields.tutorialId != 3 || v4->fields.wavecount != 1 || v4->fields.turnCount != 1 )
  {
LABEL_9:
    data = (BattleData_o *)this->fields.otherFsm;
    if ( data )
    {
      tmp_uniqueId = this->fields.tmp_uniqueId;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)data, (System_String_o *)StringLiteral_12309/*"START_CLOSE"*/, 0);
      v6 = Method_BattlePerformancePlayer_procSelectServant__;
      if ( (*((_BYTE *)Method_BattlePerformancePlayer_procSelectServant__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C2D4A8(Method_BattlePerformancePlayer_procSelectServant__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
      OverwriteAssetSoundName__PlayCommonSe(v7, 11, 0, 0);
      list_param = this->fields.list_param;
      if ( list_param )
      {
        v10 = 0;
        while ( 1 )
        {
          max_length = list_param->max_length;
          if ( (int)v10 >= max_length )
            break;
          list_ID = this->fields.list_ID;
          if ( !list_ID )
            goto LABEL_33;
          if ( (unsigned int)v10 >= LODWORD(list_ID->max_length) || (unsigned int)v10 >= max_length )
            goto LABEL_34;
          data = (BattleData_o *)list_param->m_Items[v10];
          if ( !data )
            goto LABEL_33;
          if ( tmp_uniqueId == list_ID->m_Items[v10] )
          {
            BattleServantParamComponent__playSelectServant((BattleServantParamComponent_o *)data, 0);
            v14 = this->fields.list_param;
            if ( !v14 )
              goto LABEL_33;
            if ( (unsigned int)v10 >= LODWORD(v14->max_length) )
LABEL_34:
              sub_1C2D6F4(data, method, v8);
            v15 = v14->m_Items[v10];
            if ( !v15 )
              goto LABEL_33;
            data = (BattleData_o *)this->fields.confwindowComp;
            if ( !data )
              goto LABEL_33;
            BattleServantConfConponent__setConfData(
              (BattleServantConfConponent_o *)data,
              v15->fields.data,
              0,
              0,
              0,
              v13);
          }
          else
          {
            BattleServantParamComponent__playCloseSelectServant((BattleServantParamComponent_o *)data, 0);
          }
          list_param = this->fields.list_param;
          ++v10;
          if ( !list_param )
            goto LABEL_33;
        }
        perf = this->fields.perf;
        if ( perf )
        {
          statusPerf = perf->fields.statusPerf;
          if ( statusPerf )
          {
            data = (BattleData_o *)statusPerf->fields.buffConfWindow;
            if ( data )
            {
              v18 = ((float (__fastcall *)(BattleData_o *, _QWORD, void *))data->klass[1]._1.generic_class)(
                      data,
                      0,
                      data->klass[1]._1.typeMetadataHandle);
              BattlePerformancePlayer__openSvtConfWindow(this, v18, v19);
              data = (BattleData_o *)this->fields.perf;
              if ( data )
              {
                BattlePerformance__changeAttackButton((BattlePerformance_o *)data, 0, 0, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_33:
    sub_1C2D6EC(data, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformancePlayer__procTurorial(BattlePerformancePlayer_o *this, int32_t param, const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  _DWORD *monitor; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x0
  intptr_t *v8; // x8
  System_Action_o *v9; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4C2A878 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattlePerformancePlayer_tutorialSetSelectSvt__);
    sub_1C2D490(&Method_BattlePerformancePlayer_tutorialSetSelect__);
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2A878 = 1;
  }
  switch ( param )
  {
    case 3:
      monitor = v4[3].monitor;
      if ( !monitor )
        goto LABEL_14;
      monitor[323] = 5;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      v8 = &Method_BattlePerformancePlayer_tutorialSetSelectSvt__;
      goto LABEL_11;
    case 2:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      v8 = &Method_BattlePerformancePlayer_tutorialSetSelect__;
LABEL_11:
      v9 = v7;
      System_Action___ctor(v7, v4, *v8, 0);
      if ( !Instance )
        goto LABEL_14;
      CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v9, 0);
      return;
    case 0:
      this = (BattlePerformancePlayer_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__CloseTutorialNotificationDialogArrow((CommonUI_o *)this, 0);
        return;
      }
LABEL_14:
      sub_1C2D6EC(this, *(_QWORD *)&param);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformancePlayer__selectedCommandType(
        BattlePerformancePlayer_o *this,
        int32_t uniqueId,
        int32_t changeTdIndex,
        const MethodInfo *method)
{
  int32_t v5; // w20
  BattleLogic_o *selectCommandTypeWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  __int64 *v9; // x8

  v5 = uniqueId;
  if ( (byte_4C2A872 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3276/*"CANCEL"*/);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2A872 = 1;
  }
  selectCommandTypeWindow = (BattleLogic_o *)this->fields.selectCommandTypeWindow;
  if ( !selectCommandTypeWindow )
    goto LABEL_16;
  selectCommandTypeWindow = (BattleLogic_o *)((__int64 (__fastcall *)(BattleLogic_o *, _QWORD, void *, const MethodInfo *))selectCommandTypeWindow->klass[1]._1.fields)(
                                               selectCommandTypeWindow,
                                               0,
                                               selectCommandTypeWindow->klass[1]._1.events,
                                               method);
  if ( changeTdIndex )
  {
    actSkillObject = this->fields.actSkillObject;
    if ( actSkillObject )
    {
      *(_QWORD *)&uniqueId = actSkillObject->fields.skillInfo;
      if ( *(_QWORD *)&uniqueId )
      {
        *(_DWORD *)(*(_QWORD *)&uniqueId + 92LL) = changeTdIndex;
        selectCommandTypeWindow = this->fields.logic;
        if ( selectCommandTypeWindow )
        {
          BattleLogic__wantUseSkill(selectCommandTypeWindow, *(BattleSkillInfoData_o **)&uniqueId, v5, -1, 0);
          selectCommandTypeWindow = (BattleLogic_o *)this->fields.myfsm;
          if ( selectCommandTypeWindow )
          {
            v9 = &StringLiteral_5447/*"END_PROC"*/;
LABEL_14:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectCommandTypeWindow, (System_String_o *)*v9, 0);
            return;
          }
        }
      }
    }
    goto LABEL_16;
  }
  selectCommandTypeWindow = (BattleLogic_o *)this->fields.perf;
  if ( !selectCommandTypeWindow )
    goto LABEL_16;
  if ( BattlePerformance__IsAllClosePreSkillSelWindows((BattlePerformance_o *)selectCommandTypeWindow, 0) )
  {
    selectCommandTypeWindow = (BattleLogic_o *)this->fields.myfsm;
    if ( selectCommandTypeWindow )
    {
      v9 = &StringLiteral_3276/*"CANCEL"*/;
      goto LABEL_14;
    }
LABEL_16:
    sub_1C2D6EC(selectCommandTypeWindow, *(_QWORD *)&uniqueId);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformancePlayer__selectedSvt(BattlePerformancePlayer_o *this, int32_t uniqueId, const MethodInfo *method)
{
  __int64 selectSvtWindow; // x0
  struct BattleLogic_UseSkillObject_o *actSkillObject; // x8
  BattleSkillInfoData_o *skillInfo; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x22
  SkillEntity_o *v9; // x22
  BattleServantData_o *ServantData; // x23
  __int64 *v11; // x8
  struct BattleData_o *data; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v14; // x21
  BattlePerformancePlayer___c_c *v15; // x8
  System_Action_o *_9__46_0; // x23
  System_String_o *v17; // x22
  Il2CppObject *v18; // x24
  struct BattlePerformancePlayer___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  BattleBranchSkillInfoData_o *battleBranchSkillInfo; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_4C2A86E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattlePerformancePlayer___c__selectedSvt_b__46_0__);
    sub_1C2D490(&BattlePerformancePlayer___c_TypeInfo);
    sub_1C2D490(&StringLiteral_3276/*"CANCEL"*/);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_2792/*"BATTLE_INVALID_SELECT_TARGET"*/);
    byte_4C2A86E = 1;
  }
  battleBranchSkillInfo = 0;
  selectSvtWindow = (__int64)this->fields.selectSvtWindow;
  if ( !selectSvtWindow )
    goto LABEL_38;
  selectSvtWindow = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)selectSvtWindow + 504LL))(
                      selectSvtWindow,
                      0,
                      *(_QWORD *)(*(_QWORD *)selectSvtWindow + 512LL));
  if ( uniqueId != -1 )
  {
    selectSvtWindow = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !selectSvtWindow )
      goto LABEL_38;
    selectSvtWindow = (__int64)DataManager__GetMasterData_object_(
                                 (DataManager_o *)selectSvtWindow,
                                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
    actSkillObject = this->fields.actSkillObject;
    if ( !actSkillObject )
      goto LABEL_38;
    skillInfo = actSkillObject->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_38;
    v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)selectSvtWindow;
    selectSvtWindow = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                        skillInfo,
                        skillInfo->klass->vtable._5_get_skillId.method);
    if ( !v8 )
      goto LABEL_38;
    selectSvtWindow = (__int64)DataMasterBase_object__object__int___GetEntity(
                                 v8,
                                 selectSvtWindow,
                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    if ( !this->fields.data )
      goto LABEL_38;
    v9 = (SkillEntity_o *)selectSvtWindow;
    ServantData = BattleData__getServantData(this->fields.data, uniqueId, 0);
    selectSvtWindow = BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(
                        skillInfo,
                        &battleBranchSkillInfo,
                        ServantData,
                        0);
    if ( (selectSvtWindow & 1) != 0 )
      skillInfo = (BattleSkillInfoData_o *)battleBranchSkillInfo;
    if ( !ServantData || !v9 )
      goto LABEL_38;
    if ( SkillEntity__checkUseTreasure(v9, ServantData->fields.followerType, 0) )
    {
      selectSvtWindow = (__int64)this->fields.logic;
      if ( selectSvtWindow )
      {
        BattleLogic__wantUseSkill((BattleLogic_o *)selectSvtWindow, skillInfo, uniqueId, -1, 0);
        selectSvtWindow = (__int64)this->fields.myfsm;
        if ( selectSvtWindow )
        {
          v11 = &StringLiteral_5447/*"END_PROC"*/;
LABEL_36:
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)selectSvtWindow, (System_String_o *)*v11, 0);
          return;
        }
      }
      goto LABEL_38;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    selectSvtWindow = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2792/*"BATTLE_INVALID_SELECT_TARGET"*/, 0);
    v14 = (System_String_o *)selectSvtWindow;
    v15 = BattlePerformancePlayer___c_TypeInfo;
    if ( !BattlePerformancePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformancePlayer___c_TypeInfo);
      v15 = BattlePerformancePlayer___c_TypeInfo;
    }
    _9__46_0 = v15->static_fields->__9__46_0;
    v17 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__46_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = BattlePerformancePlayer___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__46_0 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(_9__46_0, v18, Method_BattlePerformancePlayer___c__selectedSvt_b__46_0__, 0);
      static_fields = BattlePerformancePlayer___c_TypeInfo->static_fields;
      static_fields->__9__46_0 = _9__46_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__46_0, (int32_t)_9__46_0, v20, v21);
    }
    if ( !Instance )
      goto LABEL_38;
    CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v17, v14, _9__46_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
LABEL_34:
    selectSvtWindow = (__int64)this->fields.myfsm;
    if ( selectSvtWindow )
    {
      v11 = &StringLiteral_3276/*"CANCEL"*/;
      goto LABEL_36;
    }
LABEL_38:
    sub_1C2D6EC(selectSvtWindow, *(_QWORD *)&uniqueId);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_38;
  if ( data->fields.tutorialId != 2 || data->fields.tutorialState != -1 )
  {
    selectSvtWindow = (__int64)this->fields.perf;
    if ( !selectSvtWindow )
      goto LABEL_38;
    if ( !BattlePerformance__IsAllClosePreSkillSelWindows((BattlePerformance_o *)selectSvtWindow, 0) )
      return;
    goto LABEL_34;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformancePlayer__setParam(
        BattlePerformancePlayer_o *this,
        int32_t index,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  BattlePerformancePlayer_o *v6; // x21
  struct BattleServantParamComponent_array *list_param; // x8
  UnityEngine_Object_o *v8; // x22
  struct BattleServantParamComponent_array *v9; // x8
  BattleServantParamComponent_o *v10; // x22
  StageEntity_o *StageEntity; // x0
  struct BattleServantParamComponent_array *v12; // x8
  struct System_Int32_array *list_ID; // x8

  v6 = this;
  if ( (byte_4C2A855 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A855 = 1;
  }
  list_param = v6->fields.list_param;
  if ( !list_param )
    goto LABEL_19;
  if ( LODWORD(list_param->max_length) <= index )
    goto LABEL_20;
  v8 = (UnityEngine_Object_o *)list_param->m_Items[index];
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v6->fields.list_param;
    if ( v9 )
    {
      if ( LODWORD(v9->max_length) <= index )
        goto LABEL_20;
      v10 = v9->m_Items[index];
      if ( v10 )
      {
        v10->fields.index = index;
        StageEntity = BattlePerformancePlayer__GetStageEntity(v6, *(const MethodInfo **)&index);
        this = (BattlePerformancePlayer_o *)((__int64 (__fastcall *)(BattleServantParamComponent_o *, BattleServantData_o *, StageEntity_o *, const MethodInfo *))v10->klass->vtable._8_setData.methodPtr)(
                                              v10,
                                              svtdata,
                                              StageEntity,
                                              v10->klass->vtable._8_setData.method);
        v12 = v6->fields.list_param;
        if ( v12 )
        {
          if ( LODWORD(v12->max_length) <= index )
            goto LABEL_20;
          this = (BattlePerformancePlayer_o *)v12->m_Items[index];
          if ( this )
          {
            this = (BattlePerformancePlayer_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
            if ( svtdata )
            {
              BattleServantData__addParamObject(svtdata, (UnityEngine_GameObject_o *)this, 0);
              list_ID = v6->fields.list_ID;
              if ( list_ID )
              {
                if ( LODWORD(list_ID->max_length) > index )
                {
                  list_ID->m_Items[index] = svtdata->fields.uniqueId;
                  return;
                }
LABEL_20:
                sub_1C2D6F4(this, *(_QWORD *)&index, svtdata);
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1C2D6EC(this, *(_QWORD *)&index);
  }
}


bool BattlePerformancePlayer__showSideEffect(
        BattlePerformancePlayer_o *this,
        BattleActionData_BuffData_o *buffData,
        const MethodInfo *method)
{
  struct BattleServantParamComponent_array *list_param; // x8
  BattlePerformancePlayer_o *v4; // x20
  __int64 v6; // x21
  int max_length; // w22
  int v8; // w23
  struct BattleServantParamComponent_array *v9; // x8

  list_param = this->fields.list_param;
  if ( !list_param )
    goto LABEL_9;
  v4 = this;
  v6 = 4;
  while ( 1 )
  {
    max_length = list_param->max_length;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= max_length )
      return v8 < max_length;
    if ( v8 >= (unsigned int)max_length )
      goto LABEL_15;
    if ( !buffData )
      goto LABEL_9;
    this = (BattlePerformancePlayer_o *)*((_QWORD *)&list_param->obj.klass + v6);
    if ( !this )
      goto LABEL_9;
    this = (BattlePerformancePlayer_o *)BattleServantParamComponent__checkId(
                                          (BattleServantParamComponent_o *)this,
                                          buffData->fields.targetId,
                                          0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
    list_param = v4->fields.list_param;
    ++v6;
    if ( !list_param )
      goto LABEL_9;
  }
  v9 = v4->fields.list_param;
  if ( !v9 )
    goto LABEL_9;
  if ( (unsigned int)v8 >= LODWORD(v9->max_length) )
LABEL_15:
    sub_1C2D6F4(this, buffData, method);
  this = (BattlePerformancePlayer_o *)*((_QWORD *)&v9->obj.klass + v6);
  if ( !this )
LABEL_9:
    sub_1C2D6EC(this, buffData);
  BattleServantParamComponent__showSideEffect((BattleServantParamComponent_o *)this, buffData, 0);
  return v8 < max_length;
}


void BattlePerformancePlayer__startCommand(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C2A85E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12310/*"START_COM"*/);
    byte_4C2A85E = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12310/*"START_COM"*/, 0);
}


void BattlePerformancePlayer__startSkill(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C2A86F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12336/*"START_SKILL"*/);
    byte_4C2A86F = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12336/*"START_SKILL"*/, 0);
}


void BattlePerformancePlayer__startTac(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myfsm; // x0

  if ( (byte_4C2A856 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12342/*"START_TAC"*/);
    byte_4C2A856 = 1;
  }
  myfsm = this->fields.myfsm;
  if ( !myfsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(myfsm, (System_String_o *)StringLiteral_12342/*"START_TAC"*/, 0);
}


void BattlePerformancePlayer__tutorialSetArrowIcon(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  UnityEngine_Vector2_o v4; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v5; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C2A879 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2A879 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  v5.fields.m_Width = 90.0;
  v4.fields.x = -378.0;
  v4.fields.y = -151.0;
  v5.fields.m_XMin = -230.0;
  v5.fields.m_YMin = -270.0;
  v5.fields.m_Height = 90.0;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v4, 0.0, v5, 0, 0);
}


void BattlePerformancePlayer__tutorialSetSelect(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  UnityEngine_Vector2_o v4; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v5; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C2A87A & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2A87A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  v4.fields.x = 310.0;
  v4.fields.y = -50.0;
  v5.fields.m_XMin = -410.0;
  v5.fields.m_YMin = -104.0;
  v5.fields.m_Width = 820.0;
  v5.fields.m_Height = 280.0;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v4, -90.0, v5, 0, 0);
}


void BattlePerformancePlayer__tutorialSetSelectSvt(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  UnityEngine_Vector2_o v4; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v5; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C2A87B & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2A87B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  v4.fields.x = -0.0;
  v5.fields.m_XMin = -200.0;
  v5.fields.m_YMin = -175.0;
  v5.fields.m_Width = 400.0;
  v5.fields.m_Height = 350.0;
  v4.fields.y = -0.0;
  CommonUI__OpenTutorialArrowMark((CommonUI_o *)Instance, v4, 0.0, v5, 0, 0);
}


void BattlePerformancePlayer__updateBuff(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  ;
}


void BattlePerformancePlayer__updateView(BattlePerformancePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformancePlayer_o *v3; // x19
  struct BattleServantParamComponent_array *list_param; // x8
  __int64 v5; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v7; // x23
  UnityEngine_Object_o *v8; // x20
  struct BattleServantParamComponent_array *v9; // x8

  v3 = this;
  if ( (byte_4C2A873 & 1) == 0 )
  {
    this = (BattlePerformancePlayer_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A873 = 1;
  }
  list_param = v3->fields.list_param;
  if ( !list_param )
LABEL_15:
    sub_1C2D6EC(this, method);
  v5 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(list_param->max_length);
    v7 = v5 - 4;
    if ( v5 - 4 >= (int)max_length_low )
      break;
    if ( v7 >= max_length_low )
      goto LABEL_17;
    v8 = (UnityEngine_Object_o *)*((_QWORD *)&list_param->obj.klass + v5);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattlePerformancePlayer_o *)UnityEngine_Object__op_Equality(v8, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v9 = v3->fields.list_param;
      if ( !v9 )
        goto LABEL_15;
      if ( v7 >= LODWORD(v9->max_length) )
LABEL_17:
        sub_1C2D6F4(this, method, v2);
      this = (BattlePerformancePlayer_o *)*((_QWORD *)&v9->obj.klass + v5);
      if ( !this )
        goto LABEL_15;
      BattleServantParamComponent__updateView((BattleServantParamComponent_o *)this, 0);
    }
    list_param = v3->fields.list_param;
    ++v5;
    if ( !list_param )
      goto LABEL_15;
  }
}


void BattlePerformancePlayer__useSkillIcon(
        BattlePerformancePlayer_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  BattleLogic_UseSkillObject_o *v5; // x21
  struct BattleLogic_UseSkillObject_o **p_useSkillObject; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  PlayMakerFSM_o *v10; // x0

  if ( (byte_4C2A866 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogic_UseSkillObject_TypeInfo);
    sub_1C2D490(&StringLiteral_3474/*"CLICK_SKILLICON"*/);
    byte_4C2A866 = 1;
  }
  v5 = (BattleLogic_UseSkillObject_o *)sub_1C2D6DC(BattleLogic_UseSkillObject_TypeInfo);
  BattleLogic_UseSkillObject___ctor(v5, skillInfo, 0);
  this->fields.useSkillObject = v5;
  p_useSkillObject = &this->fields.useSkillObject;
  sub_1C2D434((CGThumbnailListItem_o *)p_useSkillObject, (int32_t)v5, v7, v8);
  v10 = (PlayMakerFSM_o *)*(p_useSkillObject - 14);
  if ( !v10 )
    sub_1C2D6EC(0, v9);
  PlayMakerFSM__SendEvent(v10, (System_String_o *)StringLiteral_3474/*"CLICK_SKILLICON"*/, 0);
}


void BattlePerformancePlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2A87F & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformancePlayer___c_TypeInfo);
    byte_4C2A87F = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattlePerformancePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattlePerformancePlayer___c_TypeInfo->static_fields->__9 = (struct BattlePerformancePlayer___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattlePerformancePlayer___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattlePerformancePlayer___c___ctor(BattlePerformancePlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformancePlayer___c___UseSkill_b__40_0(BattlePerformancePlayer___c_o *this, const MethodInfo *method)
{
  ;
}


void BattlePerformancePlayer___c___selectedSvt_b__46_0(BattlePerformancePlayer___c_o *this, const MethodInfo *method)
{
  ;
}