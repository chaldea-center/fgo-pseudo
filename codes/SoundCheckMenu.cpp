void SoundCheckMenu___ctor(SoundCheckMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB391C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_string____ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__List_string___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CB391C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.cpkNameList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cpkNameList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__List_string___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3451B1C *)Method_System_Collections_Generic_Dictionary_int__List_string____ctor__);
  this->fields.exceptionData = (struct System_Collections_Generic_Dictionary_int__List_string___o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.exceptionData, (int32_t)v6, v7, v8);
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void SoundCheckMenu__CheckNumDispWrite(SoundCheckMenu_o *this, int32_t num, int32_t max, const MethodInfo *method)
{
  UILabel_o *checkNumDisp; // x19
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // [xsp+8h] [xbp-28h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v10 = max;
  v11 = num;
  if ( (byte_4CB3918 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    sub_1C6BA08(&StringLiteral_4388/*"CheckNum : "*/);
    byte_4CB3918 = 1;
  }
  checkNumDisp = this->fields.checkNumDisp;
  v6 = System_Int32__ToString((int32_t)&v11, 0);
  v7 = System_Int32__ToString((int32_t)&v10, 0);
  v8 = System_String__Concat_64007060(
         (System_String_o *)StringLiteral_4388/*"CheckNum : "*/,
         v6,
         (System_String_o *)StringLiteral_1041/*"/"*/,
         v7,
         0);
  if ( !checkNumDisp )
    sub_1C6BC60(v8, v9);
  UILabel__set_text(checkNumDisp, v8, 0);
}


void SoundCheckMenu__Close(SoundCheckMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  SoundCheckMenu_o *v5; // x0
  const MethodInfo *v6; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CB390D & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_3076/*"Battle"*/);
    byte_4CB390D = 1;
  }
  if ( this->fields.sceneStart && !this->fields.nextCheck )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    if ( SoundCheckMenu__CueSheetCheck(v5, (System_String_o *)StringLiteral_3076/*"Battle"*/, v6) )
    {
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_16;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)gameObject, (System_String_o *)StringLiteral_3076/*"Battle"*/, 0);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        transform = UnityEngine_GameObject__get_transform(gameObject, 0);
        TransformHelper__DestroyChildren(transform, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
        if ( gameObject )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( gameObject )
          {
            gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)gameObject, 0);
              this->fields.sceneStart = 0;
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_1C6BC60(gameObject, v4);
  }
}


bool SoundCheckMenu__CueSheetCheck(SoundCheckMenu_o *this, System_String_o *SheetName, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  Il2CppClass *element_class; // x20
  int namespaze; // w8
  bool v9; // w21
  int v10; // w22
  __int64 v11; // x8

  if ( (byte_4CB3919 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CB3919 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  klass = Instance[2].klass;
  if ( !klass )
    goto LABEL_13;
  element_class = klass->_1.element_class;
  if ( !element_class )
    goto LABEL_13;
  namespaze = (int)element_class->_1.namespaze;
  v9 = namespaze > 0;
  if ( namespaze >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)namespaze )
        sub_1C6BC68(Instance);
      v11 = *((_QWORD *)&element_class->_1.byval_arg.data + v10);
      if ( !v11 )
        break;
      Instance = (Il2CppObject *)System_String__op_Equality(*(System_String_o **)(v11 + 16), SheetName, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        namespaze = (int)element_class->_1.namespaze;
        v9 = ++v10 < namespaze;
        if ( v10 < namespaze )
          continue;
      }
      return v9;
    }
LABEL_13:
    sub_1C6BC60(Instance, v5);
  }
  return v9;
}


void SoundCheckMenu__ErrorOutput(SoundCheckMenu_o *this, System_String_o *text, const MethodInfo *method)
{
  SoundCheckMenu_o *v4; // x19
  int v5; // w8
  unsigned __int64 v6; // t2
  Il2CppObject *resultLabelSeed; // x22
  UnityEngine_Component_o *v8; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UILabel_o **p_resultLabel; // x23
  SoundCheckMenu_o *v11; // x24
  UnityEngine_GameObject_o *v12; // x0
  float LocalPositionY; // s0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UILabel_o *resultLabel; // x22
  System_String_o *v17; // x0
  UILabel_o *errorCntLabel; // x20
  System_String_o *v19; // x0

  v4 = this;
  if ( (byte_4CB3917 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    this = (SoundCheckMenu_o *)sub_1C6BA08(&StringLiteral_6173/*"ErrorCount : "*/);
    byte_4CB3917 = 1;
  }
  v5 = v4->fields.errorCnt + 1;
  HIDWORD(v6) = -1030792151 * v5 + 85899344;
  LODWORD(v6) = HIDWORD(v6);
  v4->fields.errorCnt = v5;
  if ( (unsigned int)(v6 >> 2) <= 0x28F5C28 )
  {
    resultLabelSeed = (Il2CppObject *)v4->fields.resultLabelSeed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SoundCheckMenu_o *)UnityEngine_Object__Instantiate_object_(
                                 resultLabelSeed,
                                 (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_UILabel___);
    if ( !this )
      goto LABEL_14;
    v8 = (UnityEngine_Component_o *)this;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)v4->fields.scrollView, 0);
    this = (SoundCheckMenu_o *)UnityEngine_Component__get_gameObject(v8, 0);
    p_resultLabel = &v4->fields.resultLabel;
    if ( !v4->fields.resultLabel
      || (v11 = this,
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4->fields.resultLabel, 0),
          LocalPositionY = GameObjectExtensions__GetLocalPositionY(v12, 0),
          !*p_resultLabel) )
    {
LABEL_14:
      sub_1C6BC60(this, text);
    }
    GameObjectExtensions__SetLocalPositionY(
      (UnityEngine_GameObject_o *)v11,
      (float)(LocalPositionY - (float)(*p_resultLabel)->fields.mHeight) + (float)(*p_resultLabel)->fields.mFontSize,
      0);
    *p_resultLabel = (struct UILabel_o *)v8;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.resultLabel, (int32_t)v8, v14, v15);
  }
  resultLabel = v4->fields.resultLabel;
  if ( !resultLabel )
    goto LABEL_14;
  v17 = System_String__Concat_64005056(resultLabel->fields.mText, text, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
  UILabel__set_text(resultLabel, v17, 0);
  errorCntLabel = v4->fields.errorCntLabel;
  v19 = System_Int32__ToString((int)v4 + 108, 0);
  this = (SoundCheckMenu_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_6173/*"ErrorCount : "*/, v19, 0);
  if ( !errorCntLabel )
    goto LABEL_14;
  UILabel__set_text(errorCntLabel, (System_String_o *)this, 0);
  this = (SoundCheckMenu_o *)v4->fields.scrollView;
  if ( !this )
    goto LABEL_14;
  UIScrollView__UpdatePosition((UIScrollView_o *)this, 0);
}


bool SoundCheckMenu__IsReplaceable(SoundCheckMenu_o *this, System_String_o *groupId, const MethodInfo *method)
{
  System_String_o *v4; // x0
  System_String_o *v6; // x0
  int32_t Value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB3911 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8536/*"MASHU_SVT_ID1"*/);
    sub_1C6BA08(&StringLiteral_8537/*"MASHU_SVT_ID2"*/);
    byte_4CB3911 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8536/*"MASHU_SVT_ID1"*/, 0);
  v4 = System_Int32__ToString((int32_t)&Value, 0);
  if ( System_String__op_Equality(groupId, v4, 0) )
  {
    return 1;
  }
  else
  {
    Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8537/*"MASHU_SVT_ID2"*/, 0);
    v6 = System_Int32__ToString((int32_t)&Value, 0);
    return System_String__op_Equality(groupId, v6, 0);
  }
}


void SoundCheckMenu__OnButtonClick(
        SoundCheckMenu_o *this,
        UnityEngine_GameObject_o *ButtonObj,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *name; // x20
  const MethodInfo *v8; // x1
  System_Collections_IEnumerator_o *v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4CB3916 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23967/*"svtVoiceButton"*/);
    sub_1C6BA08(&StringLiteral_9338/*"NPButton"*/);
    sub_1C6BA08(&StringLiteral_16750/*"allCpkVoiceButton"*/);
    sub_1C6BA08(&StringLiteral_3109/*"BattleEffectButton"*/);
    sub_1C6BA08(&StringLiteral_2186/*"AllButton"*/);
    byte_4CB3916 = 1;
  }
  if ( !this->fields.nextCheck && this->fields.sceneStart )
  {
    SoundCheckMenu__ValueReset(this, (const MethodInfo *)ButtonObj);
    if ( !ButtonObj )
      sub_1C6BC60(v5, v6);
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)ButtonObj, 0);
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_2186/*"AllButton"*/, 0) )
    {
      v9 = SoundCheckMenu__allCheck(this, v8);
LABEL_17:
      UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v9, 0);
      return;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_3109/*"BattleEffectButton"*/, 0) )
    {
      v9 = SoundCheckMenu__battleEffectCheck(this, v10);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_9338/*"NPButton"*/, 0) )
    {
      v9 = SoundCheckMenu__npCheck(this, v11);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_23967/*"svtVoiceButton"*/, 0) )
    {
      v9 = SoundCheckMenu__svtVoiceCheck(this, v12);
      goto LABEL_17;
    }
    if ( System_String__op_Equality(name, (System_String_o *)StringLiteral_16750/*"allCpkVoiceButton"*/, 0) )
    {
      v9 = SoundCheckMenu__cueNameMstCheck(this, v13);
      goto LABEL_17;
    }
  }
}


void SoundCheckMenu__Open(SoundCheckMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  SoundCheckMenu_o *v5; // x0
  const MethodInfo *v6; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4CB390C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&Method_SoundCheckMenu__Open_b__16_0__);
    sub_1C6BA08(&StringLiteral_3076/*"Battle"*/);
    byte_4CB390C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( SoundCheckMenu__CueSheetCheck(v5, (System_String_o *)StringLiteral_3076/*"Battle"*/, v6) )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SoundCheckMenu__Open_b__16_0__, 0);
  if ( !Instance )
LABEL_7:
    sub_1C6BC60(gameObject, v4);
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)StringLiteral_3076/*"Battle"*/, v8, 1, 0);
}


void SoundCheckMenu__Start(SoundCheckMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SoundCheckMenu__createExceptionList(this, method);
  SoundCheckMenu__cpkNameListup(this, v3);
}


void SoundCheckMenu__StartMenu(SoundCheckMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  SoundCheckMenu__Open(this, v3);
}


void SoundCheckMenu__Update(SoundCheckMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  SoundCheckMenu__CheckNumDispWrite(this, this->fields.checkCnt, this->fields.checkMax, v2);
}


void SoundCheckMenu__ValueReset(SoundCheckMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *resultLabelSeed; // x20
  struct UILabel_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB3915 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_6174/*"ErrorCount : 0"*/);
    byte_4CB3915 = 1;
  }
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollView, 0);
  if ( !scrollView )
    goto LABEL_14;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)scrollView, 0);
  TransformHelper__DestroyChildren(transform, 0);
  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_14;
  scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollView, 0);
  if ( !scrollView )
    goto LABEL_14;
  scrollView = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)scrollView,
                                            0);
  if ( !scrollView )
    goto LABEL_14;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)scrollView, 0);
  resultLabelSeed = (Il2CppObject *)this->fields.resultLabelSeed;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  scrollView = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                            resultLabelSeed,
                                            (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_UILabel___);
  if ( !scrollView )
    goto LABEL_14;
  v6 = (struct UILabel_o *)scrollView;
  gameObject = UnityEngine_Component__get_gameObject(scrollView, 0);
  GameObjectExtensions__SafeSetParent(gameObject, (UnityEngine_Component_o *)this->fields.scrollView, 0);
  this->fields.resultLabel = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.resultLabel, (int32_t)v6, v8, v9);
  scrollView = (UnityEngine_Component_o *)this->fields.errorCntLabel;
  this->fields.nextCheck = 1;
  this->fields.checkCnt = 0;
  this->fields.errorCnt = 0;
  if ( !scrollView
    || (UILabel__set_text((UILabel_o *)scrollView, (System_String_o *)StringLiteral_6174/*"ErrorCount : 0"*/, 0),
        (scrollView = (UnityEngine_Component_o *)this->fields.scrollView) == 0) )
  {
LABEL_14:
    sub_1C6BC60(scrollView, method);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)scrollView, 0);
}


void SoundCheckMenu___Open_b__16_0(SoundCheckMenu_o *this, const MethodInfo *method)
{
  this->fields.sceneStart = 1;
}


System_Collections_IEnumerator_o *SoundCheckMenu__allCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB3914 & 1) == 0 )
  {
    sub_1C6BA08(&SoundCheckMenu__allCheck_d__24_TypeInfo);
    byte_4CB3914 = 1;
  }
  v3 = sub_1C6BC54(SoundCheckMenu__allCheck_d__24_TypeInfo);
  SoundCheckMenu__allCheck_d__24___ctor((SoundCheckMenu__allCheck_d__24_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *SoundCheckMenu__battleEffectCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB3913 & 1) == 0 )
  {
    sub_1C6BA08(&SoundCheckMenu__battleEffectCheck_d__23_TypeInfo);
    byte_4CB3913 = 1;
  }
  v3 = sub_1C6BC54(SoundCheckMenu__battleEffectCheck_d__23_TypeInfo);
  SoundCheckMenu__battleEffectCheck_d__23___ctor((SoundCheckMenu__battleEffectCheck_d__23_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void SoundCheckMenu__cpkNameListup(SoundCheckMenu_o *this, const MethodInfo *method)
{
  System_String_o *CpkPath; // x0
  Il2CppObject *Files_64827112; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *cpkNameList; // x8
  int32_t size; // w2
  Il2CppObject *v8; // x20
  int v9; // w9
  void *monitor; // x8
  unsigned __int64 v11; // x22
  System_String_o *v12; // x21
  System_String_o *FileNameWithoutExtension; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 v19; // x11
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4CB390E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&System_IO_Path_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_792/*"*.cpk.bytes"*/);
    byte_4CB390E = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  CpkPath = SoundManager__getCpkPath(0);
  Files_64827112 = (Il2CppObject *)System_IO_Directory__GetFiles_64827112(
                                     CpkPath,
                                     (System_String_o *)StringLiteral_792/*"*.cpk.bytes"*/,
                                     1,
                                     0);
  cpkNameList = this->fields.cpkNameList;
  if ( !cpkNameList )
    goto LABEL_21;
  size = cpkNameList->fields._size;
  v8 = Files_64827112;
  v9 = cpkNameList->fields._version + 1;
  cpkNameList->fields._size = 0;
  cpkNameList->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)cpkNameList->fields._items, 0, size, 0);
  if ( !v8 )
    goto LABEL_21;
  monitor = v8[1].monitor;
  if ( (int)monitor >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)monitor )
        sub_1C6BC68(Files_64827112);
      v12 = (System_String_o *)*((_QWORD *)&v8[2].klass + v11);
      if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
      FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(v12, 0);
      Files_64827112 = (Il2CppObject *)System_IO_Path__GetFileNameWithoutExtension(FileNameWithoutExtension, 0);
      v16 = (System_Collections_Generic_List_object__o *)this->fields.cpkNameList;
      if ( !v16 )
        break;
      items = v16->fields._items;
      v18 = Method_System_Collections_Generic_List_string__Add__;
      ++v16->fields._version;
      if ( !items )
        break;
      v19 = v16->fields._size;
      v20 = Files_64827112;
      if ( (unsigned int)v19 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          Files_64827112,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + v19;
        v16->fields._size = v19 + 1;
        v21[4] = (Il2CppClass *)v20;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v14, v15);
      }
      LODWORD(monitor) = v8[1].monitor;
      if ( (__int64)++v11 >= (int)monitor )
        return;
    }
LABEL_21:
    sub_1C6BC60(Files_64827112, v5);
  }
}


void SoundCheckMenu__createExceptionList(SoundCheckMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *Item; // x0
  Il2CppObject *v4; // x1
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  unsigned __int64 v7; // x29
  int32_t v8; // w21
  struct System_Collections_Generic_Dictionary_int__List_string___o *exceptionData; // x22
  System_Collections_Generic_List_object__o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _QWORD *v13; // x9
  struct System_Int32_array *buckets; // x8
  __int64 entries_low; // x10
  __int64 v16; // x8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  _QWORD *v19; // x9
  struct System_Int32_array *v20; // x8
  __int64 v21; // x10
  __int64 v22; // x8
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  _QWORD *v25; // x9
  struct System_Int32_array *v26; // x8
  __int64 v27; // x10
  __int64 v28; // x8
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  _QWORD *v31; // x9
  struct System_Int32_array *v32; // x8
  __int64 v33; // x10
  __int64 v34; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  _QWORD *v37; // x9
  struct System_Int32_array *v38; // x8
  __int64 v39; // x10
  __int64 v40; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  _QWORD *v43; // x9
  struct System_Int32_array *v44; // x8
  __int64 v45; // x10
  __int64 v46; // x8
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  _QWORD *v49; // x9
  struct System_Int32_array *v50; // x8
  __int64 v51; // x10
  __int64 v52; // x8
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  _QWORD *v55; // x9
  struct System_Int32_array *v56; // x8
  __int64 v57; // x10
  __int64 v58; // x8
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  _QWORD *v61; // x9
  struct System_Int32_array *v62; // x8
  __int64 v63; // x10
  __int64 v64; // x8
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  _QWORD *v67; // x9
  struct System_Int32_array *v68; // x8
  __int64 v69; // x10
  __int64 v70; // x8
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  _QWORD *v73; // x9
  struct System_Int32_array *v74; // x8
  __int64 v75; // x10
  __int64 v76; // x8
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  _QWORD *v79; // x9
  struct System_Int32_array *v80; // x8
  __int64 v81; // x10
  __int64 v82; // x8
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  _QWORD *v85; // x9
  struct System_Int32_array *v86; // x8
  __int64 v87; // x10
  __int64 v88; // x8
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  _QWORD *v91; // x9
  struct System_Int32_array *v92; // x8
  __int64 v93; // x10
  __int64 v94; // x8
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  _QWORD *v97; // x9
  struct System_Int32_array *v98; // x8
  __int64 v99; // x10
  __int64 v100; // x8
  struct System_Collections_Generic_Dictionary_int__List_string___o *v101; // x20
  System_Collections_Generic_List_object__o *v102; // x21
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  _QWORD *v105; // x9
  struct System_Int32_array *v106; // x8
  __int64 v107; // x10
  __int64 v108; // x8
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  _QWORD *v111; // x9
  struct System_Int32_array *v112; // x8
  __int64 v113; // x10
  __int64 v114; // x8

  if ( (byte_4CB391A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&StringLiteral_1150/*"0_B091"*/);
    sub_1C6BA08(&StringLiteral_1147/*"0_B031"*/);
    sub_1C6BA08(&StringLiteral_1155/*"0_B161"*/);
    sub_1C6BA08(&StringLiteral_1151/*"0_B121"*/);
    sub_1C6BA08(&StringLiteral_1154/*"0_B151"*/);
    sub_1C6BA08(&StringLiteral_1149/*"0_B081"*/);
    sub_1C6BA08(&StringLiteral_1159/*"0_B201"*/);
    sub_1C6BA08(&StringLiteral_1157/*"0_B181"*/);
    sub_1C6BA08(&StringLiteral_1144/*"0_"*/);
    sub_1C6BA08(&StringLiteral_1146/*"0_B021"*/);
    sub_1C6BA08(&StringLiteral_1156/*"0_B171"*/);
    sub_1C6BA08(&StringLiteral_1148/*"0_B041"*/);
    sub_1C6BA08(&StringLiteral_1152/*"0_B131"*/);
    sub_1C6BA08(&StringLiteral_1153/*"0_B141"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_1158/*"0_B191"*/);
    sub_1C6BA08(&StringLiteral_1145/*"0_B011"*/);
    byte_4CB391A = 1;
  }
  Item = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C6BAB0(int___TypeInfo, 2);
  if ( !Item )
    goto LABEL_114;
  entries = Item->fields._entries;
  v6 = Item;
  if ( !(_DWORD)entries )
    goto LABEL_115;
  Item->fields._count = 600700;
  if ( (_DWORD)entries == 1 )
    goto LABEL_115;
  Item->fields._freeList = 600710;
  if ( (int)entries >= 1 )
  {
    v7 = 0;
    while ( v7 < (unsigned int)entries )
    {
      v8 = *(&v6->fields._count + v7);
      exceptionData = this->fields.exceptionData;
      v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v10,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !exceptionData )
        goto LABEL_114;
      System_Collections_Generic_Dictionary_int__object___set_Item(
        (System_Collections_Generic_Dictionary_int__object__o *)exceptionData,
        v8,
        (Il2CppObject *)v10,
        (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v13 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1145/*"0_B011"*/;
      buckets = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !buckets )
        goto LABEL_114;
      entries_low = SLODWORD(Item->fields._entries);
      if ( (unsigned int)entries_low >= LODWORD(buckets->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = (__int64)buckets + 8 * entries_low;
        LODWORD(Item->fields._entries) = entries_low + 1;
        *(_QWORD *)(v16 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v4, v11, v12);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v19 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1146/*"0_B021"*/;
      v20 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v20 )
        goto LABEL_114;
      v21 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v21 >= LODWORD(v20->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = (__int64)v20 + 8 * v21;
        LODWORD(Item->fields._entries) = v21 + 1;
        *(_QWORD *)(v22 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v4, v17, v18);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v25 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1147/*"0_B031"*/;
      v26 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v26 )
        goto LABEL_114;
      v27 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v27 >= LODWORD(v26->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = (__int64)v26 + 8 * v27;
        LODWORD(Item->fields._entries) = v27 + 1;
        *(_QWORD *)(v28 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v28 + 32), (int32_t)v4, v23, v24);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v31 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1148/*"0_B041"*/;
      v32 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v32 )
        goto LABEL_114;
      v33 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v33 >= LODWORD(v32->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = (__int64)v32 + 8 * v33;
        LODWORD(Item->fields._entries) = v33 + 1;
        *(_QWORD *)(v34 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 32), (int32_t)v4, v29, v30);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v37 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1149/*"0_B081"*/;
      v38 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v38 )
        goto LABEL_114;
      v39 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v39 >= LODWORD(v38->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = (__int64)v38 + 8 * v39;
        LODWORD(Item->fields._entries) = v39 + 1;
        *(_QWORD *)(v40 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 32), (int32_t)v4, v35, v36);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v43 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1150/*"0_B091"*/;
      v44 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v44 )
        goto LABEL_114;
      v45 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v45 >= LODWORD(v44->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = (__int64)v44 + 8 * v45;
        LODWORD(Item->fields._entries) = v45 + 1;
        *(_QWORD *)(v46 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v46 + 32), (int32_t)v4, v41, v42);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v49 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1151/*"0_B121"*/;
      v50 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v50 )
        goto LABEL_114;
      v51 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v51 >= LODWORD(v50->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = (__int64)v50 + 8 * v51;
        LODWORD(Item->fields._entries) = v51 + 1;
        *(_QWORD *)(v52 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v52 + 32), (int32_t)v4, v47, v48);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v55 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1152/*"0_B131"*/;
      v56 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v56 )
        goto LABEL_114;
      v57 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v57 >= LODWORD(v56->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = (__int64)v56 + 8 * v57;
        LODWORD(Item->fields._entries) = v57 + 1;
        *(_QWORD *)(v58 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v58 + 32), (int32_t)v4, v53, v54);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v61 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1153/*"0_B141"*/;
      v62 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v62 )
        goto LABEL_114;
      v63 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v63 >= LODWORD(v62->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = (__int64)v62 + 8 * v63;
        LODWORD(Item->fields._entries) = v63 + 1;
        *(_QWORD *)(v64 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v64 + 32), (int32_t)v4, v59, v60);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v67 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1154/*"0_B151"*/;
      v68 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v68 )
        goto LABEL_114;
      v69 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v69 >= LODWORD(v68->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = (__int64)v68 + 8 * v69;
        LODWORD(Item->fields._entries) = v69 + 1;
        *(_QWORD *)(v70 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v70 + 32), (int32_t)v4, v65, v66);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v73 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1155/*"0_B161"*/;
      v74 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v74 )
        goto LABEL_114;
      v75 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v75 >= LODWORD(v74->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = (__int64)v74 + 8 * v75;
        LODWORD(Item->fields._entries) = v75 + 1;
        *(_QWORD *)(v76 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v76 + 32), (int32_t)v4, v71, v72);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v79 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1156/*"0_B171"*/;
      v80 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v80 )
        goto LABEL_114;
      v81 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v81 >= LODWORD(v80->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v82 = (__int64)v80 + 8 * v81;
        LODWORD(Item->fields._entries) = v81 + 1;
        *(_QWORD *)(v82 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v82 + 32), (int32_t)v4, v77, v78);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v85 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1157/*"0_B181"*/;
      v86 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v86 )
        goto LABEL_114;
      v87 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v87 >= LODWORD(v86->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v88 = (__int64)v86 + 8 * v87;
        LODWORD(Item->fields._entries) = v87 + 1;
        *(_QWORD *)(v88 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v88 + 32), (int32_t)v4, v83, v84);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v91 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1158/*"0_B191"*/;
      v92 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v92 )
        goto LABEL_114;
      v93 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v93 >= LODWORD(v92->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v94 = (__int64)v92 + 8 * v93;
        LODWORD(Item->fields._entries) = v93 + 1;
        *(_QWORD *)(v94 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v94 + 32), (int32_t)v4, v89, v90);
      }
      Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
      if ( !Item )
        goto LABEL_114;
      Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                       Item,
                                                                       v8,
                                                                       (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( !Item )
        goto LABEL_114;
      v97 = Method_System_Collections_Generic_List_string__Add__;
      v4 = (Il2CppObject *)StringLiteral_1159/*"0_B201"*/;
      v98 = Item->fields._buckets;
      ++HIDWORD(Item->fields._entries);
      if ( !v98 )
        goto LABEL_114;
      v99 = SLODWORD(Item->fields._entries);
      if ( (unsigned int)v99 >= LODWORD(v98->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v4,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = (__int64)v98 + 8 * v99;
        LODWORD(Item->fields._entries) = v99 + 1;
        *(_QWORD *)(v100 + 32) = v4;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v100 + 32), (int32_t)v4, v95, v96);
      }
      LODWORD(entries) = v6->fields._entries;
      if ( (__int64)++v7 >= (int)entries )
        goto LABEL_101;
    }
LABEL_115:
    sub_1C6BC68(Item);
  }
LABEL_101:
  v101 = this->fields.exceptionData;
  v102 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v102,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v101 )
    goto LABEL_114;
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)v101,
    602300,
    (Il2CppObject *)v102,
    (const MethodInfo_34524DC *)Method_System_Collections_Generic_Dictionary_int__List_string___set_Item__);
  Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !Item )
    goto LABEL_114;
  Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                   Item,
                                                                   602300,
                                                                   (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
  if ( !Item )
    goto LABEL_114;
  v105 = Method_System_Collections_Generic_List_string__Add__;
  v4 = (Il2CppObject *)StringLiteral_1144/*"0_"*/;
  v106 = Item->fields._buckets;
  ++HIDWORD(Item->fields._entries);
  if ( !v106 )
    goto LABEL_114;
  v107 = SLODWORD(Item->fields._entries);
  if ( (unsigned int)v107 >= LODWORD(v106->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      v4,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
  }
  else
  {
    v108 = (__int64)v106 + 8 * v107;
    LODWORD(Item->fields._entries) = v107 + 1;
    *(_QWORD *)(v108 + 32) = v4;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v108 + 32), (int32_t)v4, v103, v104);
  }
  Item = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         Item,
                                                                         602300,
                                                                         (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__)) == 0
    || (v111 = Method_System_Collections_Generic_List_string__Add__,
        v4 = (Il2CppObject *)StringLiteral_1/*""*/,
        v112 = Item->fields._buckets,
        ++HIDWORD(Item->fields._entries),
        !v112) )
  {
LABEL_114:
    sub_1C6BC60(Item, v4);
  }
  v113 = SLODWORD(Item->fields._entries);
  if ( (unsigned int)v113 >= LODWORD(v112->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)Item,
      v4,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
  }
  else
  {
    v114 = (__int64)v112 + 8 * v113;
    LODWORD(Item->fields._entries) = v113 + 1;
    *(_QWORD *)(v114 + 32) = v4;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v114 + 32), (int32_t)v4, v109, v110);
  }
}


System_Collections_IEnumerator_o *SoundCheckMenu__cueNameMstCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB390F & 1) == 0 )
  {
    sub_1C6BA08(&SoundCheckMenu__cueNameMstCheck_d__19_TypeInfo);
    byte_4CB390F = 1;
  }
  v3 = sub_1C6BC54(SoundCheckMenu__cueNameMstCheck_d__19_TypeInfo);
  SoundCheckMenu__cueNameMstCheck_d__19___ctor((SoundCheckMenu__cueNameMstCheck_d__19_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
bool SoundCheckMenu__isExceptionCheck(
        SoundCheckMenu_o *this,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *exceptionData; // x0

  if ( (byte_4CB391B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_string___ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4CB391B = 1;
  }
  exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
  if ( !exceptionData )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         exceptionData,
         svtId,
         (const MethodInfo_34526E4 *)Method_System_Collections_Generic_Dictionary_int__List_string___ContainsKey__) )
  {
    exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.exceptionData;
    if ( exceptionData )
    {
      exceptionData = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                exceptionData,
                                                                                svtId,
                                                                                (const MethodInfo_3452450 *)Method_System_Collections_Generic_Dictionary_int__List_string___get_Item__);
      if ( exceptionData )
        return System_Collections_Generic_List_object___Contains(
                 (System_Collections_Generic_List_object__o *)exceptionData,
                 (Il2CppObject *)voiceId,
                 (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__);
    }
LABEL_9:
    sub_1C6BC60(exceptionData, *(_QWORD *)&svtId);
  }
  return 0;
}


System_Collections_IEnumerator_o *SoundCheckMenu__npCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB3910 & 1) == 0 )
  {
    sub_1C6BA08(&SoundCheckMenu__npCheck_d__20_TypeInfo);
    byte_4CB3910 = 1;
  }
  v3 = sub_1C6BC54(SoundCheckMenu__npCheck_d__20_TypeInfo);
  SoundCheckMenu__npCheck_d__20___ctor((SoundCheckMenu__npCheck_d__20_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *SoundCheckMenu__svtVoiceCheck(SoundCheckMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB3912 & 1) == 0 )
  {
    sub_1C6BA08(&SoundCheckMenu__svtVoiceCheck_d__22_TypeInfo);
    byte_4CB3912 = 1;
  }
  v3 = sub_1C6BC54(SoundCheckMenu__svtVoiceCheck_d__22_TypeInfo);
  SoundCheckMenu__svtVoiceCheck_d__22___ctor((SoundCheckMenu__svtVoiceCheck_d__22_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void SoundCheckMenu___c__DisplayClass19_0___ctor(
        SoundCheckMenu___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass19_0___cueNameMstCheck_b__0(
        SoundCheckMenu___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_String_o *sequencePath; // x20
  AssetLoader_LoadEndDataHandler_o *_9__1; // x21
  System_String_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB39CB & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__1__);
    byte_4CB39CB = 1;
  }
  sequencePath = this->fields.sequencePath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__isExistAssetStorage(sequencePath, 0) )
  {
    _9__1 = this->fields.__9__1;
    v5 = this->fields.sequencePath;
    if ( !_9__1 )
    {
      _9__1 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
    }
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v5, _9__1, 1, 0);
  }
  else
  {
    this->fields.isLoad = 0;
  }
}


void SoundCheckMenu___c__DisplayClass19_0___cueNameMstCheck_b__1(
        SoundCheckMenu___c__DisplayClass19_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct AssetData_o **p_nobleAssetData; // x19

  this->fields.nobleAssetData = data;
  p_nobleAssetData = &this->fields.nobleAssetData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.nobleAssetData, (int32_t)data, (int32_t)method, v3);
  *((_BYTE *)p_nobleAssetData - 8) = 0;
}


void SoundCheckMenu___c__DisplayClass20_0___ctor(
        SoundCheckMenu___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass20_1___ctor(
        SoundCheckMenu___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass20_1___npCheck_b__0(
        SoundCheckMenu___c__DisplayClass20_1_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  SoundCheckMenu___c__DisplayClass20_1_Fields *p_fields; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  SoundManager_o *v14; // x19
  Il2CppObject *Item; // x21
  System_Action_o *v16; // x22

  if ( (byte_4CB39CC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__1__);
    sub_1C6BA08(&SoundCheckMenu___c__DisplayClass20_2_TypeInfo);
    byte_4CB39CC = 1;
  }
  v5 = sub_1C6BC54(SoundCheckMenu___c__DisplayClass20_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  this->fields.nobleSequenceData = data;
  p_fields = &this->fields;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_fields, (int32_t)data, v11, v12);
  *(_DWORD *)(v5 + 16) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals1 = p_fields->CS___8__locals1;
  if ( !CS___8__locals1
    || (v7 = *(unsigned int *)(v5 + 16),
        v14 = (SoundManager_o *)Instance,
        Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath,
        *(_DWORD *)(v5 + 16) = v7 + 1,
        !Instance)
    || (Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Instance,
                 v7,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__),
        v16 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo),
        System_Action___ctor(v16, (Il2CppObject *)v5, Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__1__, 0),
        !v14) )
  {
LABEL_8:
    sub_1C6BC60(Instance, v7);
  }
  SoundManager__LoadAudioAssetStorage(v14, (System_String_o *)Item, v16, 1, 0);
}


void SoundCheckMenu___c__DisplayClass20_1___npCheck_b__3(
        SoundCheckMenu___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEnd = 1;
}


void SoundCheckMenu___c__DisplayClass20_2___ctor(
        SoundCheckMenu___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass20_2___npCheck_b__1(
        SoundCheckMenu___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 DataCnt; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *CS___8__locals2; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  SoundManager_o *v7; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4CB39CD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__2__);
    byte_4CB39CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_10;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  DataCnt = (unsigned int)this->fields.DataCnt;
  v7 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_10;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
  _9__2 = this->fields.__9__2;
  v9 = (System_String_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__2, (Il2CppObject *)this, Method_SoundCheckMenu___c__DisplayClass20_2__npCheck_b__2__, 0);
    this->fields.__9__2 = _9__2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
  }
  if ( !v7 )
LABEL_10:
    sub_1C6BC60(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v7, v9, _9__2, 1, 0);
}


void SoundCheckMenu___c__DisplayClass20_2___npCheck_b__2(
        SoundCheckMenu___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 DataCnt; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *CS___8__locals2; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  SoundManager_o *v7; // x19
  struct SoundCheckMenu___c__DisplayClass20_1_o *v8; // x22
  System_Action_o *_9__3; // x21
  System_String_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB39CE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__3__);
    byte_4CB39CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals2 = this->fields.CS___8__locals2;
  if ( !CS___8__locals2 )
    goto LABEL_11;
  CS___8__locals1 = CS___8__locals2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_11;
  DataCnt = (unsigned int)this->fields.DataCnt;
  v7 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_11;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
  v8 = this->fields.CS___8__locals2;
  if ( !v8 )
    goto LABEL_11;
  _9__3 = v8->fields.__9__3;
  v10 = (System_String_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__3, (Il2CppObject *)v8, Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__3__, 0);
    v8->fields.__9__3 = _9__3;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v8->fields.__9__3, (int32_t)_9__3, v11, v12);
  }
  if ( !v7 )
LABEL_11:
    sub_1C6BC60(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v7, v10, _9__3, 1, 0);
}


void SoundCheckMenu___c__DisplayClass22_0___ctor(
        SoundCheckMenu___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass22_1___ctor(
        SoundCheckMenu___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundCheckMenu___c__DisplayClass22_1___svtVoiceCheck_b__0(
        SoundCheckMenu___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 DataCnt; // x1
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x8
  SoundManager_o *v6; // x20
  System_Action_o *_9__1; // x22
  System_String_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB39CF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__1__);
    byte_4CB39CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  DataCnt = (unsigned int)this->fields.DataCnt;
  v6 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_9;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
  _9__1 = this->fields.__9__1;
  v8 = (System_String_o *)Instance;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v6 )
LABEL_9:
    sub_1C6BC60(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v6, v8, _9__1, 1, 0);
}


void SoundCheckMenu___c__DisplayClass22_1___svtVoiceCheck_b__1(
        SoundCheckMenu___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 DataCnt; // x1
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x8
  SoundManager_o *v6; // x20
  System_Action_o *_9__2; // x22
  System_String_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4CB39D0 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__2__);
    byte_4CB39D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  DataCnt = (unsigned int)this->fields.DataCnt;
  v6 = (SoundManager_o *)Instance;
  Instance = (Il2CppObject *)CS___8__locals1->fields.voiceDataPath;
  this->fields.DataCnt = DataCnt + 1;
  if ( !Instance )
    goto LABEL_9;
  Instance = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Instance,
               DataCnt,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
  _9__2 = this->fields.__9__2;
  v8 = (System_String_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v6 )
LABEL_9:
    sub_1C6BC60(Instance, DataCnt);
  SoundManager__LoadAudioAssetStorage(v6, v8, _9__2, 1, 0);
}


void SoundCheckMenu___c__DisplayClass22_1___svtVoiceCheck_b__2(
        SoundCheckMenu___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  this->fields.isLoadEnd = 1;
}


void SoundCheckMenu__allCheck_d__24___ctor(
        SoundCheckMenu__allCheck_d__24_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundCheckMenu__allCheck_d__24__MoveNext(SoundCheckMenu__allCheck_d__24_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  struct SoundCheckMenu_o *_4__this; // x20
  System_Collections_IEnumerator_o *v7; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Collections_IEnumerator_o *v10; // x0
  Il2CppObject **v11; // x19
  System_Collections_IEnumerator_o *v12; // x0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_9;
    }
    else
    {
      if ( _1__state )
        return 0;
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v7 = SoundCheckMenu__battleEffectCheck(_4__this, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)_4__this, v7, 0);
LABEL_9:
        if ( _4__this->fields.nextCheck )
        {
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        _4__this->fields.nextCheck = 1;
        _4__this->fields.checkCnt = 0;
        v10 = SoundCheckMenu__npCheck(_4__this, 0);
        UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)_4__this, v10, 0);
        goto LABEL_12;
      }
    }
LABEL_16:
    sub_1C6BC60(this, method);
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_16;
LABEL_12:
  if ( _4__this->fields.nextCheck )
  {
    this->fields.__2__current = 0;
    v11 = &this->fields.__2__current;
    sub_1C6B9AC((CGThumbnailListItem_o *)v11, 0, v2, v3);
    *((_DWORD *)v11 - 2) = 2;
    return 1;
  }
  _4__this->fields.nextCheck = 1;
  _4__this->fields.checkCnt = 0;
  v12 = SoundCheckMenu__svtVoiceCheck(_4__this, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)_4__this, v12, 0);
  return 0;
}


Il2CppObject *SoundCheckMenu__allCheck_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundCheckMenu__allCheck_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundCheckMenu__allCheck_d__24__System_Collections_IEnumerator_Reset(
        SoundCheckMenu__allCheck_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SoundCheckMenu__allCheck_d__24_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *SoundCheckMenu__allCheck_d__24__System_Collections_IEnumerator_get_Current(
        SoundCheckMenu__allCheck_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundCheckMenu__allCheck_d__24__System_IDisposable_Dispose(
        SoundCheckMenu__allCheck_d__24_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundCheckMenu__battleEffectCheck_d__23___ctor(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundCheckMenu__battleEffectCheck_d__23__MoveNext(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  bool result; // w0
  struct SoundCheckMenu_o *_4__this; // x20
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w8
  int32_t v15; // w20
  EffectEntity_o *v16; // x8
  DataManager_o *v17; // x21
  struct EffectEntity_array *_7__wrap2; // x9
  int32_t max_length; // w10
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4CB39D1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EffectMaster__EffectEntity__int__getEntitys__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_22379/*"not exist : "*/);
    sub_1C6BA08(&StringLiteral_81/*"\ntarget : Battle\n"*/);
    sub_1C6BA08(&StringLiteral_3076/*"Battle"*/);
    byte_4CB39D1 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 2 )
  {
    v15 = -1;
LABEL_33:
    this->fields.__1__state = v15;
    return result;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_20;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EffectMaster___),
          this->fields._effectMst_5__2 = (struct EffectMaster_o *)MasterData_object,
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._effectMst_5__2, (int32_t)MasterData_object, v10, v11),
          (Instance = (DataManager_o *)this->fields._effectMst_5__2) == 0)
      || (Instance = (DataManager_o *)DataMasterBase_object__object__int___getEntitys(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        (const MethodInfo_33F8360 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__getEntitys__)) == 0
      || !_4__this )
    {
LABEL_35:
      sub_1C6BC60(Instance, method);
    }
    _4__this->fields.checkMax = (int32_t)Instance->fields.m_CancellationTokenSource;
    this->fields.__7__wrap2 = (struct EffectEntity_array *)Instance;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__7__wrap2, (int32_t)Instance, v12, v13);
    v14 = 0;
    for ( this->fields.__7__wrap3 = 0; ; this->fields.__7__wrap3 = v14 )
    {
      Instance = (DataManager_o *)&this->fields.__7__wrap2;
      _7__wrap2 = this->fields.__7__wrap2;
      if ( !_7__wrap2 )
        goto LABEL_35;
      max_length = _7__wrap2->max_length;
      if ( v14 >= max_length )
      {
        Instance->klass = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)Instance, 0, v2, v3);
        if ( !_4__this )
          goto LABEL_35;
        _4__this->fields.nextCheck = 0;
        v15 = 2;
        goto LABEL_32;
      }
      if ( v14 >= (unsigned int)max_length )
        sub_1C6BC68(Instance);
      v16 = _7__wrap2->m_Items[v14];
      if ( !v16 )
        goto LABEL_35;
      Instance = (DataManager_o *)this->fields._effectMst_5__2;
      if ( !Instance )
        goto LABEL_35;
      Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                    v16->fields.id,
                                    (const MethodInfo_33F90DC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_35;
      v17 = Instance;
      Instance = (DataManager_o *)EffectEntity__isSe((EffectEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      if ( !_4__this )
        goto LABEL_35;
      ++_4__this->fields.checkCnt;
LABEL_20:
      v14 = this->fields.__7__wrap3 + 1;
    }
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    Instance = (DataManager_o *)SoundManager__IsExistsSound(
                                  (SoundManager_o *)Instance,
                                  (System_String_o *)StringLiteral_3076/*"Battle"*/,
                                  *(System_String_o **)&v17->fields._DispLog,
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !_4__this )
        goto LABEL_35;
    }
    else
    {
      Instance = (DataManager_o *)System_String__Concat_64005056(
                                    (System_String_o *)StringLiteral_22379/*"not exist : "*/,
                                    *(System_String_o **)&v17->fields._DispLog,
                                    (System_String_o *)StringLiteral_81/*"\ntarget : Battle\n"*/,
                                    0);
      if ( !_4__this )
        goto LABEL_35;
      SoundCheckMenu__ErrorOutput(_4__this, (System_String_o *)Instance, 0);
    }
    ++_4__this->fields.checkCnt;
    v15 = 1;
LABEL_32:
    this->fields.__2__current = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v20, v21);
    result = 1;
    goto LABEL_33;
  }
  return result;
}


Il2CppObject *SoundCheckMenu__battleEffectCheck_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundCheckMenu__battleEffectCheck_d__23__System_Collections_IEnumerator_Reset(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SoundCheckMenu__battleEffectCheck_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *SoundCheckMenu__battleEffectCheck_d__23__System_Collections_IEnumerator_get_Current(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundCheckMenu__battleEffectCheck_d__23__System_IDisposable_Dispose(
        SoundCheckMenu__battleEffectCheck_d__23_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundCheckMenu__cueNameMstCheck_d__19___ctor(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundCheckMenu__cueNameMstCheck_d__19__MoveNext(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 Instance; // x0
  int32_t v6; // w20
  struct SoundCheckMenu_o *v7; // x20
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Object_array *Entitys; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_string__o *cpkNameList; // x9
  int32_t v21; // w8
  Il2CppObject *v22; // x22
  struct SoundCheckMenu___c__DisplayClass19_0_o **p__8__1; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *Item; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct SoundCheckMenu___c__DisplayClass19_0_o *v29; // x23
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *v35; // x0
  System_String_o *nameOrig_5__7; // x22
  Il2CppObject *v37; // x24
  SoundManager_o *v38; // x21
  System_Action_o *v39; // x23
  struct SoundCheckMenu___c__DisplayClass19_0_o *_8__1; // x8
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct ServantLimitAddEntity_array *svtLimitAddEntitys_5__3; // x8
  int max_length; // w9
  int v45; // w10
  __int64 v46; // x21
  __int64 v47; // x8
  unsigned __int64 v48; // x28
  ServantVoiceEntity_o *v49; // x22
  int32_t i; // w23
  _BOOL8 v51; // x0
  __int64 v52; // x1
  Il2CppObject *current; // x24
  int monitor; // w8
  int j; // w21
  __int64 v56; // x26
  System_Collections_Generic_Dictionary_TKey__TValue__o *svtVoiceListup_5__4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v58; // x0
  struct SoundCheckMenu___c__DisplayClass19_0_o *v59; // x8
  struct AssetData_o *nobleAssetData; // x8
  struct UnityEngine_Object_array *objectList; // x20
  int v62; // w8
  unsigned int v63; // w22
  __int64 v64; // x8
  UnityEngine_Object_o *v65; // x21
  int v66; // w8
  __int64 v67; // x21
  int k; // w20
  __int64 v69; // x22
  struct CriAtomEx_CueInfo_array *CueInfoList; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w8
  Il2CppObject *name; // x21
  __int64 v75; // x22
  struct ServantLimitAddEntity_o *svtLimitAddEntity_5__9; // x8
  __int64 v77; // x23
  Il2CppObject *v78; // x22
  struct CriAtomEx_CueInfo_array *_7__wrap9; // x9
  int32_t v80; // w10
  struct SoundCheckMenu___c__DisplayClass19_0_o *v81; // x8
  struct SoundCheckMenu___c__DisplayClass19_0_o **v82; // x21
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct System_Collections_Generic_List_string__o *v89; // x9
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  __int64 v92; // x22
  int32_t v93; // w1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  int32_t v98; // w1
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  struct System_String_o *v101; // x1
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  int32_t v104; // w1
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  __int64 v107; // x22
  int32_t v108; // w1
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  int32_t v113; // w1
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  struct System_String_o *v116; // x1
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  int32_t v119; // w1
  struct SoundCheckMenu_o *_4__this; // [xsp+8h] [xbp-A8h]
  __int64 v122; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v123; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v124; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4CB39D2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__bool__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__0__);
    sub_1C6BA08(&SoundCheckMenu___c__DisplayClass19_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_4412/*"ChrSequence1"*/);
    sub_1C6BA08(&StringLiteral_80/*"\ntarget : "*/);
    sub_1C6BA08(&StringLiteral_1144/*"0_"*/);
    sub_1C6BA08(&StringLiteral_19497/*"file only data : "*/);
    sub_1C6BA08(&StringLiteral_9513/*"NoblePhantasm/Sequence/"*/);
    sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    byte_4CB39D2 = 1;
  }
  memset(&v124, 0, sizeof(v124));
  Instance = 0;
  v6 = -1;
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_148;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      this->fields._svtVoiceMst_5__2 = (struct ServantVoiceMaster_o *)MasterData_object;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._svtVoiceMst_5__2, (int32_t)MasterData_object, v9, v10);
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_148;
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      if ( !Instance )
        goto LABEL_148;
      Entitys = DataMasterBase_object__object__object___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                  (const MethodInfo_33FCE18 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
      this->fields._svtLimitAddEntitys_5__3 = (struct ServantLimitAddEntity_array *)Entitys;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._svtLimitAddEntitys_5__3, (int32_t)Entitys, v12, v13);
      v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
      System_Collections_Generic_Dictionary_object__bool____ctor(
        v14,
        (const MethodInfo_34A5F20 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
      this->fields._svtVoiceListup_5__4 = (struct System_Collections_Generic_Dictionary_string__bool__o *)v14;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._svtVoiceListup_5__4, (int32_t)v14, v15, v16);
      v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
      System_Collections_Generic_Dictionary_object__bool____ctor(
        v17,
        (const MethodInfo_34A5F20 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
      this->fields._nobleListup_5__5 = (struct System_Collections_Generic_Dictionary_string__bool__o *)v17;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._nobleListup_5__5, (int32_t)v17, v18, v19);
      v7 = _4__this;
      if ( !_4__this )
        goto LABEL_148;
      cpkNameList = _4__this->fields.cpkNameList;
      if ( !cpkNameList )
        goto LABEL_148;
      v21 = 0;
      _4__this->fields.checkMax = cpkNameList->fields._size;
      this->fields._ii_5__6 = 0;
      break;
    case 1:
      this->fields.__1__state = -1;
      goto LABEL_23;
    case 2:
    case 3:
      v7 = this->fields.__4__this;
      this->fields.__1__state = -1;
      goto LABEL_114;
    case 4:
      goto LABEL_139;
    default:
      return Instance;
  }
  while ( 1 )
  {
    if ( !v7 )
      goto LABEL_148;
    v89 = v7->fields.cpkNameList;
    if ( !v89 )
      goto LABEL_148;
    if ( v21 >= v89->fields._size )
    {
      v7->fields.nextCheck = 0;
      v6 = 4;
      goto LABEL_138;
    }
    v22 = (Il2CppObject *)sub_1C6BC54(SoundCheckMenu___c__DisplayClass19_0_TypeInfo);
    System_Object___ctor(v22, 0);
    this->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass19_0_o *)v22;
    p__8__1 = &this->fields.__8__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v22, v24, v25);
    Instance = (__int64)v7->fields.cpkNameList;
    if ( !Instance )
      goto LABEL_148;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Instance,
             this->fields._ii_5__6,
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
    this->fields._nameOrig_5__7 = (struct System_String_o *)Item;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._nameOrig_5__7, (int32_t)Item, v27, v28);
    Instance = (__int64)this->fields._nameOrig_5__7;
    if ( !Instance )
      goto LABEL_148;
    Instance = (__int64)System_String__Split((System_String_o *)Instance, 0x5Fu, 0, 0);
    if ( !*p__8__1 )
      goto LABEL_148;
    (*p__8__1)->fields.isLoad = 1;
    ++v7->fields.checkCnt;
    if ( !Instance )
      goto LABEL_148;
    if ( *(_DWORD *)(Instance + 24) == 2 )
    {
      Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 40), &this->fields._voiceId_5__8, 0);
      if ( (Instance & 1) != 0 )
        break;
    }
LABEL_125:
    v21 = this->fields._ii_5__6 + 1;
    this->fields._ii_5__6 = v21;
  }
  v29 = *p__8__1;
  LODWORD(v123.fields._list) = this->fields._voiceId_5__8;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  Instance = (__int64)System_String__Concat((Il2CppObject *)StringLiteral_9513/*"NoblePhantasm/Sequence/"*/, v30, 0);
  if ( !v29 )
    goto LABEL_148;
  v29->fields.sequencePath = (struct System_String_o *)Instance;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v29->fields, Instance, v31, v32);
  Instance = (__int64)this->fields._nobleListup_5__5;
  if ( !Instance )
    goto LABEL_148;
  System_Collections_Generic_Dictionary_object__bool___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
    (const MethodInfo_34A6A7C *)Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
  Instance = (__int64)*p__8__1;
  if ( !*p__8__1 )
    goto LABEL_148;
  *(_QWORD *)(Instance + 32) = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)(Instance + 32), 0, v33, v34);
  v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  nameOrig_5__7 = this->fields._nameOrig_5__7;
  v37 = (Il2CppObject *)*p__8__1;
  v38 = (SoundManager_o *)v35;
  v39 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v39, v37, Method_SoundCheckMenu___c__DisplayClass19_0__cueNameMstCheck_b__0__, 0);
  if ( !v38 )
    goto LABEL_148;
  SoundManager__LoadAudioAssetStorage(v38, nameOrig_5__7, v39, 1, 0);
LABEL_23:
  _8__1 = this->fields.__8__1;
  if ( !_8__1 )
    goto LABEL_148;
  if ( _8__1->fields.isLoad )
  {
    v6 = 1;
    goto LABEL_138;
  }
  this->fields._svtLimitAddEntity_5__9 = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._svtLimitAddEntity_5__9, 0, v2, v3);
  svtLimitAddEntitys_5__3 = this->fields._svtLimitAddEntitys_5__3;
  if ( !svtLimitAddEntitys_5__3 )
    goto LABEL_148;
  max_length = svtLimitAddEntitys_5__3->max_length;
  if ( max_length >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      if ( max_length == v45 )
        goto LABEL_149;
      method = (const MethodInfo *)svtLimitAddEntitys_5__3->m_Items[v45];
      if ( !method )
        goto LABEL_148;
      if ( LODWORD(method->invoker_method) == this->fields._voiceId_5__8 )
        break;
      if ( max_length == ++v45 )
        goto LABEL_34;
    }
    this->fields._svtLimitAddEntity_5__9 = (struct ServantLimitAddEntity_o *)method;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._svtLimitAddEntity_5__9, (int32_t)method, v41, v42);
  }
LABEL_34:
  Instance = (__int64)this->fields._svtVoiceMst_5__2;
  if ( !Instance )
    goto LABEL_148;
  Instance = (__int64)ServantVoiceMaster__getEntity_43058520(
                        (ServantVoiceMaster_o *)Instance,
                        this->fields._voiceId_5__8,
                        0,
                        0);
  if ( !this->fields._svtVoiceListup_5__4 )
    goto LABEL_148;
  v46 = Instance;
  System_Collections_Generic_Dictionary_object__bool___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4,
    (const MethodInfo_34A6A7C *)Method_System_Collections_Generic_Dictionary_string__bool__Clear__);
  if ( !v46 )
    goto LABEL_148;
  v47 = *(_QWORD *)(v46 + 24);
  if ( (int)v47 >= 1 )
  {
    v48 = 0;
    v122 = v46;
    do
    {
      if ( v48 >= (unsigned int)v47 )
        goto LABEL_149;
      v49 = *(ServantVoiceEntity_o **)(v46 + 8 * v48 + 32);
      if ( v49 )
      {
        for ( i = 1; i != 25; ++i )
        {
          Instance = (__int64)ServantVoiceEntity__getVoiceList(v49, i, 0);
          if ( Instance )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v123,
              (System_Collections_Generic_List_object__o *)Instance,
              (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
            v124 = v123;
            while ( 1 )
            {
              v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v124,
                      (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
              if ( !v51 )
                break;
              current = v124.fields._current;
              if ( !v124.fields._current )
                sub_1C6BC60(v51, v52);
              monitor = (int)v124.fields._current[1].monitor;
              if ( monitor >= 1 )
              {
                for ( j = 0; j < monitor; ++j )
                {
                  if ( j >= (unsigned int)monitor )
                    sub_1C6BC68(v51);
                  v56 = *((_QWORD *)&current[2].klass + j);
                  if ( !v56 )
                    sub_1C6BC60(v51, v52);
                  svtVoiceListup_5__4 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4;
                  if ( !svtVoiceListup_5__4 )
                    sub_1C6BC60(0, v52);
                  v51 = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                          svtVoiceListup_5__4,
                          *(Il2CppObject **)(v56 + 16),
                          (const MethodInfo_34A6AE8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
                  if ( !v51 )
                  {
                    v58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4;
                    if ( !v58 )
                      sub_1C6BC60(0, v52);
                    System_Collections_Generic_Dictionary_object__bool___Add(
                      v58,
                      *(Il2CppObject **)(v56 + 16),
                      1,
                      (const MethodInfo_34A68E0 *)Method_System_Collections_Generic_Dictionary_string__bool__Add__);
                  }
                  monitor = (int)current[1].monitor;
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v124,
              (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
          }
        }
      }
      v46 = v122;
      ++v48;
      LODWORD(v47) = *(_DWORD *)(v122 + 24);
    }
    while ( (__int64)v48 < (int)v47 );
  }
  v59 = this->fields.__8__1;
  if ( !v59 )
    goto LABEL_148;
  nobleAssetData = v59->fields.nobleAssetData;
  if ( nobleAssetData )
  {
    objectList = nobleAssetData->fields.objectList;
    if ( !objectList )
      goto LABEL_148;
    v62 = objectList->max_length;
    if ( v62 < 1 )
    {
LABEL_75:
      v65 = 0;
    }
    else
    {
      v63 = 0;
      while ( 1 )
      {
        if ( v63 >= v62 )
          goto LABEL_149;
        v64 = (__int64)objectList + 8 * (int)v63;
        v65 = *(UnityEngine_Object_o **)(v64 + 32);
        if ( !v65 )
          goto LABEL_148;
        Instance = (__int64)UnityEngine_Object__get_name(*(UnityEngine_Object_o **)(v64 + 32), 0);
        if ( !Instance )
          goto LABEL_148;
        Instance = System_String__Equals_64002112((System_String_o *)Instance, (System_String_o *)StringLiteral_4412/*"ChrSequence1"*/, 0);
        if ( (Instance & 1) != 0 )
          break;
        v62 = objectList->max_length;
        if ( (int)++v63 >= v62 )
          goto LABEL_75;
      }
      if ( (UnityEngine_GameObject_c *)v65->klass != UnityEngine_GameObject_TypeInfo )
        v65 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__op_Inequality(v65, 0, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !v65 )
        goto LABEL_148;
      Instance = (__int64)UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                            (UnityEngine_GameObject_o *)v65,
                            (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
      if ( !Instance )
        goto LABEL_148;
      v66 = *(_DWORD *)(Instance + 24);
      v67 = Instance;
      if ( v66 >= 1 )
      {
        for ( k = 0; k < v66; ++k )
        {
          if ( k >= (unsigned int)v66 )
            goto LABEL_149;
          v69 = *(_QWORD *)(v67 + 8LL * k + 32);
          if ( !v69 )
            goto LABEL_148;
          Instance = (__int64)this->fields._nobleListup_5__5;
          if ( !Instance )
            goto LABEL_148;
          Instance = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                       *(Il2CppObject **)(v69 + 72),
                       (const MethodInfo_34A6AE8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
          if ( (Instance & 1) == 0 )
          {
            Instance = (__int64)this->fields._nobleListup_5__5;
            if ( !Instance )
              goto LABEL_148;
            System_Collections_Generic_Dictionary_object__bool___Add(
              (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
              *(Il2CppObject **)(v69 + 72),
              1,
              (const MethodInfo_34A68E0 *)Method_System_Collections_Generic_Dictionary_string__bool__Add__);
          }
          v66 = *(_DWORD *)(v67 + 24);
        }
      }
    }
  }
  Instance = (__int64)CriAtom__GetAcb(this->fields._nameOrig_5__7, 0);
  v7 = _4__this;
  if ( !Instance )
  {
LABEL_118:
    v82 = &this->fields.__8__1;
    v81 = this->fields.__8__1;
    if ( !v81 )
      goto LABEL_148;
    if ( v81->fields.nobleAssetData )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !*v82 || !Instance )
        goto LABEL_148;
      AssetManager__ReleaseAssetStorage((AssetManager_o *)Instance, (*v82)->fields.sequencePath, 0);
    }
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !Instance )
      goto LABEL_148;
    SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, this->fields._nameOrig_5__7, 0);
    this->fields.__8__1 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__8__1, 0, v83, v84);
    this->fields._nameOrig_5__7 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._nameOrig_5__7, 0, v85, v86);
    this->fields._svtLimitAddEntity_5__9 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._svtLimitAddEntity_5__9, 0, v87, v88);
    goto LABEL_125;
  }
  CueInfoList = CriAtomExAcb__GetCueInfoList((CriAtomExAcb_o *)Instance, 0);
  this->fields.__7__wrap9 = CueInfoList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__7__wrap9, (int32_t)CueInfoList, v71, v72);
  v73 = 0;
  for ( this->fields.__7__wrap10 = 0; ; this->fields.__7__wrap10 = v73 )
  {
    Instance = (__int64)&this->fields.__7__wrap9;
    _7__wrap9 = this->fields.__7__wrap9;
    if ( !_7__wrap9 )
      goto LABEL_148;
    v80 = _7__wrap9->max_length;
    if ( v73 >= v80 )
    {
      *(_QWORD *)Instance = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)Instance, 0, v2, v3);
      goto LABEL_118;
    }
    if ( v73 >= (unsigned int)v80 )
      goto LABEL_149;
    Instance = (__int64)this->fields._svtVoiceListup_5__4;
    if ( !Instance )
      goto LABEL_148;
    name = (Il2CppObject *)_7__wrap9->m_Items[v73].fields.name;
    if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
            name,
            (const MethodInfo_34A6AE8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      Instance = (__int64)this->fields._nobleListup_5__5;
      if ( !Instance )
        goto LABEL_148;
      Instance = System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                   name,
                   (const MethodInfo_34A6AE8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
      if ( (Instance & 1) == 0 )
        break;
    }
LABEL_114:
    v73 = this->fields.__7__wrap10 + 1;
  }
  if ( !name )
    goto LABEL_148;
  Instance = (__int64)System_String__Split((System_String_o *)name, 0x5Fu, 0, 0);
  if ( !Instance )
    goto LABEL_148;
  v75 = Instance;
  if ( *(_DWORD *)(Instance + 24) != 2 )
    goto LABEL_130;
  Instance = *(_QWORD *)(Instance + 32);
  if ( !Instance )
    goto LABEL_148;
  Instance = System_String__Equals_64002112((System_String_o *)Instance, (System_String_o *)StringLiteral_1115/*"0"*/, 0);
  if ( (Instance & 1) == 0 )
  {
    svtLimitAddEntity_5__9 = this->fields._svtLimitAddEntity_5__9;
    if ( svtLimitAddEntity_5__9 )
    {
      if ( !*(_DWORD *)(v75 + 24) )
        goto LABEL_149;
      v77 = *(_QWORD *)(v75 + 32);
      LODWORD(v123.fields._list) = svtLimitAddEntity_5__9->fields.voicePrefix;
      Instance = j_il2cpp_value_box_0(int_TypeInfo, &v123);
      if ( !v77 )
        goto LABEL_148;
      Instance = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v77 + 312LL))(
                   v77,
                   Instance,
                   *(_QWORD *)(*(_QWORD *)v77 + 320LL));
      if ( (Instance & 1) != 0 )
      {
        if ( *(_DWORD *)(v75 + 24) <= 1u )
          goto LABEL_149;
        Instance = (__int64)System_String__Concat_63966792(
                              (System_String_o *)StringLiteral_1144/*"0_"*/,
                              *(System_String_o **)(v75 + 40),
                              0);
        if ( !this->fields._svtVoiceListup_5__4 )
          goto LABEL_148;
        v78 = (Il2CppObject *)Instance;
        if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._svtVoiceListup_5__4,
                (Il2CppObject *)Instance,
                (const MethodInfo_34A6AE8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
        {
          Instance = (__int64)this->fields._nobleListup_5__5;
          if ( !Instance )
            goto LABEL_148;
          if ( !System_Collections_Generic_Dictionary_object__bool___ContainsKey(
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
                  v78,
                  (const MethodInfo_34A6AE8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
          {
            Instance = sub_1C6BAB0(string___TypeInfo, 5);
            if ( !Instance )
              goto LABEL_148;
            v107 = Instance;
            if ( *(_DWORD *)(Instance + 24) )
            {
              v108 = StringLiteral_19497/*"file only data : "*/;
              *(_QWORD *)(Instance + 32) = StringLiteral_19497/*"file only data : "*/;
              sub_1C6B9AC((CGThumbnailListItem_o *)(Instance + 32), v108, v105, v106);
              if ( *(_DWORD *)(v107 + 24) > 1u )
              {
                *(_QWORD *)(v107 + 40) = name;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v107 + 40), (int32_t)name, v109, v110);
                if ( *(_DWORD *)(v107 + 24) > 2u )
                {
                  v113 = StringLiteral_80/*"\ntarget : "*/;
                  *(_QWORD *)(v107 + 48) = StringLiteral_80/*"\ntarget : "*/;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v107 + 48), v113, v111, v112);
                  if ( *(_DWORD *)(v107 + 24) > 3u )
                  {
                    v116 = this->fields._nameOrig_5__7;
                    *(_QWORD *)(v107 + 56) = v116;
                    sub_1C6B9AC((CGThumbnailListItem_o *)(v107 + 56), (int32_t)v116, v114, v115);
                    if ( *(_DWORD *)(v107 + 24) > 4u )
                    {
                      v119 = StringLiteral_43/*"\n"*/;
                      *(_QWORD *)(v107 + 64) = StringLiteral_43/*"\n"*/;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v107 + 64), v119, v117, v118);
                      Instance = (__int64)System_String__Concat_64007324((System_String_array *)v107, 0);
                      if ( v7 )
                      {
                        SoundCheckMenu__ErrorOutput(v7, (System_String_o *)Instance, 0);
                        v6 = 2;
                        goto LABEL_138;
                      }
LABEL_148:
                      sub_1C6BC60(Instance, method);
                    }
                  }
                }
              }
            }
LABEL_149:
            sub_1C6BC68(Instance);
          }
        }
      }
      goto LABEL_114;
    }
  }
LABEL_130:
  Instance = sub_1C6BAB0(string___TypeInfo, 5);
  if ( !Instance )
    goto LABEL_148;
  v92 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_149;
  v93 = StringLiteral_19497/*"file only data : "*/;
  *(_QWORD *)(Instance + 32) = StringLiteral_19497/*"file only data : "*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(Instance + 32), v93, v90, v91);
  if ( *(_DWORD *)(v92 + 24) <= 1u )
    goto LABEL_149;
  *(_QWORD *)(v92 + 40) = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 40), (int32_t)name, v94, v95);
  if ( *(_DWORD *)(v92 + 24) <= 2u )
    goto LABEL_149;
  v98 = StringLiteral_80/*"\ntarget : "*/;
  *(_QWORD *)(v92 + 48) = StringLiteral_80/*"\ntarget : "*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 48), v98, v96, v97);
  if ( *(_DWORD *)(v92 + 24) <= 3u )
    goto LABEL_149;
  v101 = this->fields._nameOrig_5__7;
  *(_QWORD *)(v92 + 56) = v101;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 56), (int32_t)v101, v99, v100);
  if ( *(_DWORD *)(v92 + 24) <= 4u )
    goto LABEL_149;
  v104 = StringLiteral_43/*"\n"*/;
  *(_QWORD *)(v92 + 64) = StringLiteral_43/*"\n"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v92 + 64), v104, v102, v103);
  Instance = (__int64)System_String__Concat_64007324((System_String_array *)v92, 0);
  if ( !v7 )
    goto LABEL_148;
  SoundCheckMenu__ErrorOutput(v7, (System_String_o *)Instance, 0);
  v6 = 3;
LABEL_138:
  this->fields.__2__current = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
  LOBYTE(Instance) = 1;
LABEL_139:
  this->fields.__1__state = v6;
  return Instance;
}


Il2CppObject *SoundCheckMenu__cueNameMstCheck_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundCheckMenu__cueNameMstCheck_d__19__System_Collections_IEnumerator_Reset(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SoundCheckMenu__cueNameMstCheck_d__19_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *SoundCheckMenu__cueNameMstCheck_d__19__System_Collections_IEnumerator_get_Current(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundCheckMenu__cueNameMstCheck_d__19__System_IDisposable_Dispose(
        SoundCheckMenu__cueNameMstCheck_d__19_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundCheckMenu__npCheck_d__20___ctor(
        SoundCheckMenu__npCheck_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundCheckMenu__npCheck_d__20__MoveNext(SoundCheckMenu__npCheck_d__20_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  SoundCheckMenu__npCheck_d__20_o *v4; // x25
  Il2CppObject *v5; // x20
  SoundCheckMenu__npCheck_d__20_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  System_Object_array *Entitys; // x21
  System_Collections_Generic_List_object__o *v15; // x20
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x1
  SoundCheckMenu__npCheck_d__20_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *svtLimitAddMst_5__2; // x0
  System_Object_array *v24; // x1
  SoundCheckMenu__npCheck_d__20_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  _BOOL8 IsServant; // x0
  __int64 v29; // x1
  int max_length; // w8
  int i; // w25
  Il2CppClass **v32; // x8
  Il2CppObject *v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Text_RegularExpressions_Regex_o *v40; // x21
  SoundCheckMenu__npCheck_d__20_o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Text_RegularExpressions_Regex_o *v44; // x21
  SoundCheckMenu__npCheck_d__20_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct SoundCheckMenu___c__DisplayClass20_0_o *_8__1; // x21
  System_Collections_Generic_List_object__o *v49; // x22
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  SoundCheckMenu__npCheck_d__20_o *v54; // x9
  __int128 v55; // q0
  CGThumbnailListItem_o *p__7__wrap5; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Text_RegularExpressions_Group_o *v59; // x19
  bool result; // w0
  System_Text_RegularExpressions_Group_o *v61; // x20
  struct ServantEntity_o *v62; // x1
  Il2CppObject *v63; // x25
  SoundCheckMenu__npCheck_d__20_o *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct SoundCheckMenu___c__DisplayClass20_1_o *v70; // x0
  struct SoundCheckMenu___c__DisplayClass20_0_o *v71; // x1
  __int64 v72; // x0
  __int64 v73; // x1
  const MethodInfo *v74; // x2
  struct ServantEntity_o *v75; // x8
  System_String_o *v76; // x1
  struct System_String_o *v77; // x1
  SoundCheckMenu__npCheck_d__20_o *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  System_String_o *v81; // x25
  _BOOL8 isExistAssetStorage; // x0
  __int64 v83; // x1
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  SoundCheckMenu__npCheck_d__20_o *v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  struct ServantLimitAddEntity_array *svtLimitAddEntitys_5__3; // x20
  int v90; // w8
  unsigned int v91; // w21
  struct ServantLimitAddEntity_o *v92; // x25
  struct ServantEntity_o *v93; // x8
  int32_t svtId; // w22
  __int64 v95; // x26
  __int64 v96; // x27
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  SoundCheckMenu__npCheck_d__20_o *v99; // x0
  struct ServantEntity_o *v100; // x9
  ServantLimitAddMaster_o *v101; // x25
  __int64 v102; // x26
  __int64 v103; // x27
  __int64 v104; // x0
  __int64 VoiceId; // x0
  __int64 v106; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v107; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v108; // x9
  struct System_Collections_Generic_List_string__o *v109; // x9
  int32_t v110; // w2
  int v111; // w10
  struct SoundCheckMenu___c__DisplayClass20_0_o *v112; // x8
  System_Collections_Generic_List_object__o *v113; // x25
  System_String_o *v114; // x1
  Il2CppObject *v115; // x0
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  Il2CppObject *v118; // x1
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  __int64 v123; // x0
  __int64 v124; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v125; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v126; // x8
  System_Collections_Generic_List_object__o *v127; // x25
  System_String_o *v128; // x1
  Il2CppObject *v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  Il2CppObject *v132; // x1
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  Il2CppClass **v136; // x0
  __int64 v137; // x0
  __int64 v138; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v139; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v140; // x8
  System_Collections_Generic_List_object__o *v141; // x25
  System_String_o *v142; // x1
  Il2CppObject *v143; // x0
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  Il2CppObject *v146; // x1
  struct System_Object_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  Il2CppClass **v150; // x0
  __int64 v151; // x1
  int32_t v152; // w2
  const MethodInfo *v153; // x3
  struct SoundCheckMenu___c__DisplayClass20_1_o *v154; // x0
  SoundCheckMenu___c__DisplayClass20_1_Fields *p_fields; // x0
  System_String_o *v156; // x25
  Il2CppObject *v157; // x27
  AssetLoader_LoadEndDataHandler_o *v158; // x26
  struct SoundCheckMenu___c__DisplayClass20_1_o *v159; // x8
  struct AssetData_o *nobleSequenceData; // x8
  struct UnityEngine_Object_array *objectList; // x20
  int v162; // w8
  unsigned int v163; // w21
  __int64 v164; // x8
  UnityEngine_Object_o *v165; // x25
  System_String_o *name; // x0
  __int64 v167; // x1
  _BOOL8 v168; // x0
  __int64 v169; // x1
  System_Object_array *ComponentsInChildren_object__51985744; // x1
  SoundCheckMenu__npCheck_d__20_o *v171; // x0
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  int v174; // w8
  SoundCheckMenu__npCheck_d__20_o *v175; // x8
  int v176; // w9
  SoundCheckMenu__npCheck_d__20_o *v177; // x0
  WellFired_USFGOPlayAudioEvent_o *v178; // x22
  System_String_o *soundId; // x26
  _BOOL8 v180; // x0
  __int64 v181; // x1
  const MethodInfo *v182; // x2
  System_Text_RegularExpressions_Group_o *v183; // x19
  struct ServantEntity_o *svtEntity_5__7; // x20
  __int64 v185; // x1
  System_Text_RegularExpressions_Regex_o *rNpVoice_5__4; // x0
  __int64 v187; // x1
  System_Text_RegularExpressions_Regex_o *v188; // x0
  System_Text_RegularExpressions_Match_o *matched; // x26
  __int64 v190; // x0
  __int64 v191; // x1
  const MethodInfo *v192; // x2
  struct ServantEntity_o *v193; // x20
  __int64 v194; // x25
  System_String_o *v195; // x0
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  __int64 v198; // x0
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  int32_t v201; // w1
  __int64 v202; // x0
  __int64 v203; // x1
  System_Text_RegularExpressions_GroupCollection_o *v204; // x0
  __int64 v205; // x1
  System_Text_RegularExpressions_Group_o *Item; // x0
  __int64 v207; // x1
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  System_Text_RegularExpressions_Group_o *v210; // x10
  System_Text_RegularExpressions_Group_o *v211; // x1
  __int64 v212; // x0
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  int32_t v215; // w1
  System_Text_RegularExpressions_GroupCollection_o *v216; // x0
  __int64 v217; // x1
  System_Text_RegularExpressions_Group_o *v218; // x0
  __int64 v219; // x1
  int32_t v220; // w2
  const MethodInfo *v221; // x3
  System_Text_RegularExpressions_Group_o *v222; // x10
  System_Text_RegularExpressions_Group_o *v223; // x1
  System_Text_RegularExpressions_Regex_o *rNpSE_5__5; // x0
  System_Text_RegularExpressions_Regex_o *v225; // x0
  System_Text_RegularExpressions_Match_o *v226; // x0
  __int64 v227; // x1
  const MethodInfo *v228; // x2
  struct ServantEntity_o *v229; // x20
  System_Text_RegularExpressions_Match_o *v230; // x26
  System_String_o *v231; // x0
  __int64 v232; // x1
  System_String_o *v233; // x25
  System_Text_RegularExpressions_GroupCollection_o *v234; // x0
  __int64 v235; // x1
  System_Text_RegularExpressions_Group_o *v236; // x0
  __int64 v237; // x1
  System_Text_RegularExpressions_Group_o *v238; // x10
  System_String_o *v239; // x26
  System_String_o *v240; // x27
  System_String_o *v241; // x3
  System_Text_RegularExpressions_Regex_o *v242; // x0
  System_String_o *IsMatch_70482220; // x0
  __int64 v244; // x1
  System_Text_RegularExpressions_Regex_o *v245; // x0
  System_Text_RegularExpressions_Match_o *v246; // x0
  __int64 v247; // x1
  System_Text_RegularExpressions_Match_o *v248; // x26
  struct ServantLimitAddEntity_o *svtLimitAddEntity_5__9; // x8
  System_String_o *v250; // x0
  __int64 v251; // x1
  System_String_o *v252; // x25
  System_Text_RegularExpressions_GroupCollection_o *v253; // x0
  __int64 v254; // x1
  System_Text_RegularExpressions_Group_o *v255; // x0
  __int64 v256; // x1
  System_Text_RegularExpressions_Group_o *v257; // x10
  System_String_o *v258; // x26
  System_String_o *v259; // x2
  int v260; // w8
  System_Text_RegularExpressions_GroupCollection_o *v261; // x0
  __int64 v262; // x1
  System_Text_RegularExpressions_Group_o *v263; // x0
  __int64 v264; // x1
  System_String_o *v265; // x25
  System_String_o *v266; // x1
  int32_t audioType; // w9
  __int64 v268; // x0
  __int64 v269; // x1
  int32_t v270; // w2
  const MethodInfo *v271; // x3
  __int64 v272; // x25
  int32_t v273; // w1
  __int64 v274; // x0
  int32_t v275; // w2
  const MethodInfo *v276; // x3
  __int64 v277; // x0
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  int32_t v280; // w1
  __int64 v281; // x0
  int32_t v282; // w2
  const MethodInfo *v283; // x3
  struct System_String_o *sequencePath_5__8; // x1
  __int64 v285; // x0
  int32_t v286; // w2
  const MethodInfo *v287; // x3
  __int64 v288; // x0
  __int64 v289; // x1
  int32_t v290; // w2
  const MethodInfo *v291; // x3
  int32_t v292; // w1
  __int64 v293; // x0
  int32_t v294; // w2
  const MethodInfo *v295; // x3
  __int64 v296; // x0
  int32_t v297; // w2
  const MethodInfo *v298; // x3
  int32_t v299; // w1
  __int64 v300; // x0
  int32_t v301; // w2
  const MethodInfo *v302; // x3
  struct System_String_o *v303; // x1
  __int64 v304; // x0
  int32_t v305; // w1
  System_String_o *v306; // x0
  struct SoundCheckMenu___c__DisplayClass20_1_o *_8__2; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *CS___8__locals1; // x8
  System_Collections_Generic_List_object__o *voiceDataPath; // x0
  _BOOL4 v310; // w25
  Il2CppObject *current; // x27
  Il2CppObject *v312; // x0
  __int64 v313; // x1
  Il2CppObject *v314; // x0
  __int64 v315; // x1
  struct WellFired_USFGOPlayAudioEvent_array *v316; // x9
  CGThumbnailListItem_o *p__7__wrap9; // x25
  struct WellFired_USFGOPlayAudioEvent_array *_7__wrap9; // t1
  int v319; // w10
  System_String_o *v320; // x25
  __int64 v321; // x0
  __int64 v322; // x1
  struct SoundCheckMenu___c__DisplayClass20_1_o *v323; // x8
  struct SoundCheckMenu___c__DisplayClass20_0_o *v324; // x8
  System_Collections_Generic_List_object__o *v325; // x0
  Il2CppObject *v326; // x25
  Il2CppObject *v327; // x0
  __int64 v328; // x1
  __int64 v329; // x0
  __int64 v330; // x1
  int32_t v331; // w2
  const MethodInfo *v332; // x3
  __int64 v333; // x20
  int32_t v334; // w1
  __int64 v335; // x0
  int32_t v336; // w2
  const MethodInfo *v337; // x3
  __int64 v338; // x0
  int32_t v339; // w2
  const MethodInfo *v340; // x3
  int32_t v341; // w1
  __int64 v342; // x0
  int32_t v343; // w2
  const MethodInfo *v344; // x3
  struct System_String_o *v345; // x1
  __int64 v346; // x0
  int32_t v347; // w2
  const MethodInfo *v348; // x3
  int32_t v349; // w1
  System_String_o *v350; // x0
  SoundCheckMenu__npCheck_d__20_o *v351; // x0
  int32_t v352; // w2
  const MethodInfo *v353; // x3
  __int64 v354; // x0
  __int64 v355; // x1
  int32_t v356; // w2
  const MethodInfo *v357; // x3
  SoundCheckMenu__npCheck_d__20_o *v358; // x0
  SoundCheckMenu__npCheck_d__20_o *v359; // x0
  int32_t v360; // w2
  const MethodInfo *v361; // x3
  SoundCheckMenu__npCheck_d__20_o *v362; // x0
  int32_t v363; // w2
  const MethodInfo *v364; // x3
  SoundCheckMenu__npCheck_d__20_o *v365; // x0
  int32_t v366; // w2
  const MethodInfo *v367; // x3
  const MethodInfo *v368; // x1
  int32_t v369; // w2
  const MethodInfo *v370; // x3
  bool v371; // w8
  SoundCheckMenu__npCheck_d__20_o *v372; // x0
  __int64 v373; // x1
  int32_t v374; // w2
  const MethodInfo *v375; // x3
  SoundCheckMenu__npCheck_d__20_o *v376; // x0
  System_Text_RegularExpressions_Group_o *v377; // [xsp+10h] [xbp-110h]
  System_Text_RegularExpressions_Group_o *v378; // [xsp+18h] [xbp-108h]
  System_Text_RegularExpressions_Group_o *v379; // [xsp+20h] [xbp-100h]
  System_Text_RegularExpressions_Group_o *v380; // [xsp+28h] [xbp-F8h]
  SoundCheckMenu_o *_4__this; // [xsp+30h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v382; // [xsp+38h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v383; // [xsp+50h] [xbp-D0h] BYREF
  __int64 v384; // [xsp+70h] [xbp-B0h]
  SoundCheckMenu__npCheck_d__20_o **v385; // [xsp+78h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v386; // [xsp+80h] [xbp-A0h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+A0h] [xbp-80h] BYREF
  int v388; // [xsp+B4h] [xbp-6Ch] BYREF
  SoundCheckMenu__npCheck_d__20_o *v389; // [xsp+B8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v390; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v391; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v393; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v394; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v395; // 0:x0.16

  v4 = this;
  v389 = this;
  if ( (byte_4CB39D3 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
    sub_1C6BA08(&UnityEngine_GameObject_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&SoundCheckMenu___c__DisplayClass20_0_TypeInfo);
    sub_1C6BA08(&Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__0__);
    sub_1C6BA08(&SoundCheckMenu___c__DisplayClass20_1_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_4412/*"ChrSequence1"*/);
    sub_1C6BA08(&StringLiteral_9515/*"NoblePhantasm_"*/);
    sub_1C6BA08(&StringLiteral_22379/*"not exist : "*/);
    sub_1C6BA08(&StringLiteral_9349/*"NP_"*/);
    sub_1C6BA08(&StringLiteral_80/*"\ntarget : "*/);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    sub_1C6BA08(&StringLiteral_4414/*"ChrVoice_"*/);
    sub_1C6BA08(&StringLiteral_1144/*"0_"*/);
    sub_1C6BA08(&StringLiteral_12765/*"Servants_"*/);
    sub_1C6BA08(&StringLiteral_732/*"(\\d+)_(\\d)_(.+)"*/);
    sub_1C6BA08(&StringLiteral_9350/*"NP_(\\d+)_(.+)"*/);
    sub_1C6BA08(&StringLiteral_16953/*"audio type error : "*/);
    sub_1C6BA08(&StringLiteral_3076/*"Battle"*/);
    this = (SoundCheckMenu__npCheck_d__20_o *)sub_1C6BA08(&StringLiteral_9513/*"NoblePhantasm/Sequence/"*/);
    byte_4CB39D3 = 1;
  }
  v388 = 0;
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  memset(&v386, 0, sizeof(v386));
  v384 = 0;
  v385 = &v389;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v5 = (Il2CppObject *)sub_1C6BC54(SoundCheckMenu___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v5, 0);
      v6 = v389;
      v389->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass20_0_o *)v5;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.__8__1, (int32_t)v5, v7, v8);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C6BC60(0, v10);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
      v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
      if ( !MasterData_object )
        sub_1C6BC60(0, v12);
      DataMasterBase_object__object__int___getEntitys(
        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
        (const MethodInfo_33F8360 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  v13,
                  (const MethodInfo_33F8360 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v15,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v16 )
        sub_1C6BC60(0, v17);
      v18 = DataManager__GetMasterData_object_(
              (DataManager_o *)v16,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v19 = v389;
      v389->fields._svtLimitAddMst_5__2 = (struct ServantLimitAddMaster_o *)v18;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v19->fields._svtLimitAddMst_5__2, (int32_t)v18, v20, v21);
      svtLimitAddMst_5__2 = (DataMasterBase_TMaster__TEntity__PKType__o *)v389->fields._svtLimitAddMst_5__2;
      if ( !svtLimitAddMst_5__2 )
        sub_1C6BC60(0, v22);
      v24 = DataMasterBase_object__object__object___getEntitys(
              svtLimitAddMst_5__2,
              (const MethodInfo_33FCE18 *)Method_DataMasterBase_ServantLimitAddMaster__ServantLimitAddEntity__string__getEntitys__);
      v25 = v389;
      v389->fields._svtLimitAddEntitys_5__3 = (struct ServantLimitAddEntity_array *)v24;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v25->fields._svtLimitAddEntitys_5__3, (int32_t)v24, v26, v27);
      if ( !Entitys )
        sub_1C6BC60(IsServant, v29);
      max_length = Entitys->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C6BC68(IsServant);
          v32 = &Entitys->obj.klass + i;
          v33 = (Il2CppObject *)v32[4];
          if ( !v33 )
            sub_1C6BC60(IsServant, v29);
          IsServant = ServantEntity__get_IsServant((ServantEntity_o *)v32[4], 0);
          if ( IsServant )
          {
            if ( !v15 )
              sub_1C6BC60(IsServant, v29);
            items = v15->fields._items;
            v37 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v15->fields._version;
            if ( !items )
              sub_1C6BC60(IsServant, v29);
            size = v15->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v15,
                v33,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v15->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v33;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v33, v34, v35);
            }
          }
          max_length = Entitys->max_length;
        }
      }
      if ( !v15 )
        sub_1C6BC60(IsServant, v29);
      if ( !_4__this )
        sub_1C6BC60(IsServant, v29);
      _4__this->fields.checkMax = v15->fields._size;
      v40 = (System_Text_RegularExpressions_Regex_o *)sub_1C6BC54(System_Text_RegularExpressions_Regex_TypeInfo);
      System_Text_RegularExpressions_Regex___ctor_70487220(v40, (System_String_o *)StringLiteral_732/*"(\\d+)_(\\d)_(.+)"*/, 1, 0);
      v41 = v389;
      v389->fields._rNpVoice_5__4 = v40;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v41->fields._rNpVoice_5__4, (int32_t)v40, v42, v43);
      v44 = (System_Text_RegularExpressions_Regex_o *)sub_1C6BC54(System_Text_RegularExpressions_Regex_TypeInfo);
      System_Text_RegularExpressions_Regex___ctor_70487220(v44, (System_String_o *)StringLiteral_9350/*"NP_(\\d+)_(.+)"*/, 1, 0);
      v45 = v389;
      v389->fields._rNpSE_5__5 = v44;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v45->fields._rNpSE_5__5, (int32_t)v44, v46, v47);
      _8__1 = v389->fields.__8__1;
      v49 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v49,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !_8__1 )
        sub_1C6BC60(v50, v51);
      _8__1->fields.voiceDataPath = (struct System_Collections_Generic_List_string__o *)v49;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)v49, v52, v53);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v382,
        v15,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
      v54 = v389;
      v55 = *(_OWORD *)&v382.fields._list;
      p__7__wrap5 = (CGThumbnailListItem_o *)&v389->fields.__7__wrap5;
      v383 = v382;
      v389->fields.__7__wrap5.fields._current = (struct ServantEntity_o *)v382.fields._current;
      *(_OWORD *)&v54->fields.__7__wrap5.fields._list = v55;
      sub_1C6B9AC(p__7__wrap5, 0, v57, v58);
      v4 = v389;
      goto LABEL_24;
    case 1:
LABEL_24:
      v59 = 0;
      v379 = 0;
      v380 = 0;
      v377 = 0;
      v378 = 0;
      v4->fields.__1__state = -3;
      goto LABEL_334;
    case 2:
      v59 = 0;
      v379 = 0;
      v380 = 0;
      v377 = 0;
      v378 = 0;
      v4->fields.__1__state = -3;
      goto LABEL_93;
    case 3:
      v61 = 0;
      v379 = 0;
      v380 = 0;
      v377 = 0;
      v378 = 0;
      v4->fields.__1__state = -3;
      break;
    case 4:
      result = 0;
      v4->fields.__1__state = -1;
      return result;
    default:
      return 0;
  }
  while ( 1 )
  {
    v174 = v4->fields.__7__wrap10 + 1;
    v4->fields.__7__wrap10 = v174;
LABEL_300:
    _7__wrap9 = v4->fields.__7__wrap9;
    p__7__wrap9 = (CGThumbnailListItem_o *)&v4->fields.__7__wrap9;
    v316 = _7__wrap9;
    if ( !_7__wrap9 )
      sub_1C6BC60(this, method);
    v319 = v316->max_length;
    if ( v174 >= v319 )
      break;
    if ( v174 >= (unsigned int)v319 )
      sub_1C6BC68(this);
    v178 = v316->m_Items[v174];
    if ( !v178 )
      sub_1C6BC60(this, method);
    if ( !_4__this )
      sub_1C6BC60(0, method);
    soundId = v178->fields.soundId;
    v180 = SoundCheckMenu__IsReplaceable(_4__this, v178->fields.groupId, 0);
    v183 = v61;
    if ( v180 )
    {
      svtEntity_5__7 = v389->fields._svtEntity_5__7;
      if ( !svtEntity_5__7 )
        sub_1C6BC60(v180, v181);
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v393.fields.currentCryptoKey = &svtEntity_5__7->fields;
      *(_QWORD *)&v393.fields.fakeValue = 0;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v393, v182);
      rNpVoice_5__4 = v389->fields._rNpVoice_5__4;
      if ( !rNpVoice_5__4 )
        sub_1C6BC60(0, v185);
      v61 = v183;
      if ( System_Text_RegularExpressions_Regex__IsMatch_70482220(rNpVoice_5__4, soundId, 0) )
      {
        v188 = v389->fields._rNpVoice_5__4;
        if ( !v188 )
          sub_1C6BC60(0, v187);
        matched = System_Text_RegularExpressions_Regex__Match_70482720(v188, soundId, 0);
        v190 = sub_1C6BAB0(string___TypeInfo, 5);
        v193 = v389->fields._svtEntity_5__7;
        if ( !v193 )
          sub_1C6BC60(v190, v191);
        v194 = v190;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v394.fields.currentCryptoKey = &v193->fields;
        *(_QWORD *)&v394.fields.fakeValue = 0;
        v195 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v394, v192);
        if ( !v194 )
          sub_1C6BC60(v195, v195);
        if ( !*(_DWORD *)(v194 + 24) )
          sub_1C6BC68(v195);
        v61 = v183;
        *(_QWORD *)(v194 + 32) = v195;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v194 + 32), (int32_t)v195, v196, v197);
        if ( *(_DWORD *)(v194 + 24) <= 1u )
          sub_1C6BC68(v198);
        v201 = StringLiteral_16102/*"_"*/;
        *(_QWORD *)(v194 + 40) = StringLiteral_16102/*"_"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v194 + 40), v201, v199, v200);
        if ( !matched )
          sub_1C6BC60(v202, v203);
        v204 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))matched->klass->vtable._5_get_Groups.methodPtr)(
                                                                     matched,
                                                                     matched->klass->vtable._5_get_Groups.method);
        if ( !v204 )
          sub_1C6BC60(0, v205);
        Item = System_Text_RegularExpressions_GroupCollection__get_Item(v204, 2, 0);
        v210 = v379;
        if ( Item )
          v210 = Item;
        v379 = v210;
        if ( Item )
        {
          if ( !v210 )
            sub_1C6BC60(Item, v207);
          Item = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v210->klass->vtable._3_ToString.methodPtr)(
                                                             v210,
                                                             v210->klass->vtable._3_ToString.method);
          v211 = Item;
        }
        else
        {
          v211 = 0;
        }
        if ( *(_DWORD *)(v194 + 24) <= 2u )
          sub_1C6BC68(Item);
        *(_QWORD *)(v194 + 48) = v211;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v194 + 48), (int32_t)v211, v208, v209);
        if ( *(_DWORD *)(v194 + 24) <= 3u )
          sub_1C6BC68(v212);
        v215 = StringLiteral_16102/*"_"*/;
        *(_QWORD *)(v194 + 56) = StringLiteral_16102/*"_"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v194 + 56), v215, v213, v214);
        v216 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))matched->klass->vtable._5_get_Groups.methodPtr)(
                                                                     matched,
                                                                     matched->klass->vtable._5_get_Groups.method);
        if ( !v216 )
          sub_1C6BC60(0, v217);
        v218 = System_Text_RegularExpressions_GroupCollection__get_Item(v216, 3, 0);
        v222 = v378;
        if ( v218 )
          v222 = v218;
        v378 = v222;
        if ( v218 )
        {
          if ( !v222 )
            sub_1C6BC60(v218, v219);
          v218 = (System_Text_RegularExpressions_Group_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v222->klass->vtable._3_ToString.methodPtr)(
                                                             v222,
                                                             v222->klass->vtable._3_ToString.method);
          v223 = v218;
        }
        else
        {
          v223 = 0;
        }
        if ( *(_DWORD *)(v194 + 24) <= 4u )
          sub_1C6BC68(v218);
        *(_QWORD *)(v194 + 64) = v223;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v194 + 64), (int32_t)v223, v220, v221);
        soundId = System_String__Concat_64007324((System_String_array *)v194, 0);
      }
      rNpSE_5__5 = v389->fields._rNpSE_5__5;
      if ( !rNpSE_5__5 )
        sub_1C6BC60(0, v187);
      if ( System_Text_RegularExpressions_Regex__IsMatch_70482220(rNpSE_5__5, soundId, 0) )
      {
        v225 = v389->fields._rNpSE_5__5;
        if ( !v225 )
          sub_1C6BC60(0, v181);
        v226 = System_Text_RegularExpressions_Regex__Match_70482720(v225, soundId, 0);
        v229 = v389->fields._svtEntity_5__7;
        if ( !v229 )
          sub_1C6BC60(v226, v227);
        v230 = v226;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v395.fields.currentCryptoKey = &v229->fields;
        *(_QWORD *)&v395.fields.fakeValue = 0;
        v231 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v395, v228);
        if ( !v230 )
          sub_1C6BC60(v231, v232);
        v233 = v231;
        v61 = v183;
        v234 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v230->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v230,
                                                                     v230->klass->vtable._5_get_Groups.method);
        if ( !v234 )
          sub_1C6BC60(0, v235);
        v236 = System_Text_RegularExpressions_GroupCollection__get_Item(v234, 2, 0);
        v238 = v377;
        v239 = (System_String_o *)StringLiteral_16102/*"_"*/;
        v240 = (System_String_o *)StringLiteral_9349/*"NP_"*/;
        if ( v236 )
          v238 = v236;
        v377 = v238;
        if ( v236 )
        {
          if ( !v238 )
            sub_1C6BC60(v236, v237);
          v241 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v238->klass->vtable._3_ToString.methodPtr)(
                                      v238,
                                      v238->klass->vtable._3_ToString.method);
        }
        else
        {
          v241 = 0;
        }
        soundId = System_String__Concat_64007060(v240, v233, v239, v241, 0);
      }
    }
    v242 = v389->fields._rNpVoice_5__4;
    if ( !v242 )
      sub_1C6BC60(0, v181);
    IsMatch_70482220 = (System_String_o *)System_Text_RegularExpressions_Regex__IsMatch_70482220(v242, soundId, 0);
    if ( ((unsigned __int8)IsMatch_70482220 & 1) != 0 )
    {
      v245 = v389->fields._rNpVoice_5__4;
      if ( !v245 )
        sub_1C6BC60(0, v244);
      v246 = System_Text_RegularExpressions_Regex__Match_70482720(v245, soundId, 0);
      v248 = v246;
      svtLimitAddEntity_5__9 = v389->fields._svtLimitAddEntity_5__9;
      if ( svtLimitAddEntity_5__9 )
      {
        v250 = System_Int32__ToString((int)svtLimitAddEntity_5__9 + 52, 0);
        if ( !v248 )
          sub_1C6BC60(v250, v251);
        v252 = v250;
        v253 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v248->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v248,
                                                                     v248->klass->vtable._5_get_Groups.method);
        if ( !v253 )
          sub_1C6BC60(0, v254);
        v255 = System_Text_RegularExpressions_GroupCollection__get_Item(v253, 3, 0);
        v257 = v380;
        v258 = (System_String_o *)StringLiteral_16102/*"_"*/;
        if ( v255 )
          v257 = v255;
        v380 = v257;
        if ( v255 )
        {
          if ( !v257 )
            sub_1C6BC60(v255, v256);
          v259 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v257->klass->vtable._3_ToString.methodPtr)(
                                      v257,
                                      v257->klass->vtable._3_ToString.method);
        }
        else
        {
          v259 = 0;
        }
        IsMatch_70482220 = System_String__Concat_64005056(v252, v258, v259, 0);
      }
      else
      {
        if ( !v246 )
          sub_1C6BC60(0, v247);
        v261 = (System_Text_RegularExpressions_GroupCollection_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Match_o *, const MethodInfo *))v246->klass->vtable._5_get_Groups.methodPtr)(
                                                                     v246,
                                                                     v246->klass->vtable._5_get_Groups.method);
        if ( !v261 )
          sub_1C6BC60(0, v262);
        v263 = System_Text_RegularExpressions_GroupCollection__get_Item(v261, 3, 0);
        if ( v263 )
          v61 = v263;
        v265 = (System_String_o *)StringLiteral_1144/*"0_"*/;
        if ( v263 )
        {
          if ( !v61 )
            sub_1C6BC60(v263, v264);
          v266 = (System_String_o *)((__int64 (__fastcall *)(System_Text_RegularExpressions_Group_o *, const MethodInfo *))v61->klass->vtable._3_ToString.methodPtr)(
                                      v61,
                                      v61->klass->vtable._3_ToString.method);
        }
        else
        {
          v266 = 0;
        }
        v183 = v61;
        IsMatch_70482220 = System_String__Concat_63966792(v265, v266, 0);
      }
      soundId = IsMatch_70482220;
      v260 = 1;
    }
    else
    {
      v260 = 0;
    }
    audioType = v178->fields.audioType;
    if ( (unsigned int)(audioType - 2) < 2 )
    {
      if ( (v260 & 1) != 0 )
        goto LABEL_240;
      v268 = sub_1C6BAB0(string___TypeInfo, 5);
      v272 = v268;
      if ( !v268 )
        sub_1C6BC60(0, v269);
      if ( !*(_DWORD *)(v268 + 24) )
        sub_1C6BC68(v268);
      v273 = StringLiteral_16953/*"audio type error : "*/;
      *(_QWORD *)(v268 + 32) = StringLiteral_16953/*"audio type error : "*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v268 + 32), v273, v270, v271);
      if ( *(_DWORD *)(v272 + 24) <= 1u )
        sub_1C6BC68(v274);
      *(_QWORD *)(v272 + 40) = soundId;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v272 + 40), (int32_t)soundId, v275, v276);
      if ( *(_DWORD *)(v272 + 24) <= 2u )
        sub_1C6BC68(v277);
      v280 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v272 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v272 + 48), v280, v278, v279);
      if ( *(_DWORD *)(v272 + 24) <= 3u )
        sub_1C6BC68(v281);
      sequencePath_5__8 = v389->fields._sequencePath_5__8;
      *(_QWORD *)(v272 + 56) = sequencePath_5__8;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v272 + 56), (int32_t)sequencePath_5__8, v282, v283);
      if ( *(_DWORD *)(v272 + 24) <= 4u )
        sub_1C6BC68(v285);
      goto LABEL_239;
    }
    if ( audioType == 1 && v260 )
    {
      v288 = sub_1C6BAB0(string___TypeInfo, 5);
      v272 = v288;
      if ( !v288 )
        sub_1C6BC60(0, v289);
      if ( !*(_DWORD *)(v288 + 24) )
        sub_1C6BC68(v288);
      v292 = StringLiteral_16953/*"audio type error : "*/;
      *(_QWORD *)(v288 + 32) = StringLiteral_16953/*"audio type error : "*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v288 + 32), v292, v290, v291);
      if ( *(_DWORD *)(v272 + 24) <= 1u )
        sub_1C6BC68(v293);
      *(_QWORD *)(v272 + 40) = soundId;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v272 + 40), (int32_t)soundId, v294, v295);
      if ( *(_DWORD *)(v272 + 24) <= 2u )
        sub_1C6BC68(v296);
      v299 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v272 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v272 + 48), v299, v297, v298);
      if ( *(_DWORD *)(v272 + 24) <= 3u )
        sub_1C6BC68(v300);
      v303 = v389->fields._sequencePath_5__8;
      *(_QWORD *)(v272 + 56) = v303;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v272 + 56), (int32_t)v303, v301, v302);
      if ( *(_DWORD *)(v272 + 24) <= 4u )
        sub_1C6BC68(v304);
LABEL_239:
      v305 = StringLiteral_43/*"\n"*/;
      *(_QWORD *)(v272 + 64) = StringLiteral_43/*"\n"*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v272 + 64), v305, v286, v287);
      v306 = System_String__Concat_64007324((System_String_array *)v272, 0);
      SoundCheckMenu__ErrorOutput(_4__this, v306, 0);
    }
LABEL_240:
    _8__2 = v389->fields.__8__2;
    if ( !_8__2 )
      sub_1C6BC60(IsMatch_70482220, v244);
    CS___8__locals1 = _8__2->fields.CS___8__locals1;
    if ( !CS___8__locals1 )
      sub_1C6BC60(IsMatch_70482220, v244);
    voiceDataPath = (System_Collections_Generic_List_object__o *)CS___8__locals1->fields.voiceDataPath;
    if ( !voiceDataPath )
      sub_1C6BC60(0, v244);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v383,
      voiceDataPath,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v386 = v383;
    do
    {
      v310 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v386,
               (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
      if ( !v310 )
        break;
      current = v386.fields._current;
      v312 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v312 )
        sub_1C6BC60(0, v313);
    }
    while ( !SoundManager__IsExistsSound((SoundManager_o *)v312, (System_String_o *)current, soundId, 0) );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v386,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v314 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !v314 )
      sub_1C6BC60(0, v315);
    this = (SoundCheckMenu__npCheck_d__20_o *)SoundManager__IsExistsSound(
                                                (SoundManager_o *)v314,
                                                (System_String_o *)StringLiteral_3076/*"Battle"*/,
                                                soundId,
                                                0);
    if ( ((v310 | (unsigned int)this) & 1) == 0 )
    {
      v329 = sub_1C6BAB0(string___TypeInfo, 5);
      v333 = v329;
      if ( !v329 )
        sub_1C6BC60(0, v330);
      if ( !*(_DWORD *)(v329 + 24) )
        sub_1C6BC68(v329);
      v334 = StringLiteral_22379/*"not exist : "*/;
      *(_QWORD *)(v329 + 32) = StringLiteral_22379/*"not exist : "*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v329 + 32), v334, v331, v332);
      if ( *(_DWORD *)(v333 + 24) <= 1u )
        sub_1C6BC68(v335);
      *(_QWORD *)(v333 + 40) = soundId;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v333 + 40), (int32_t)soundId, v336, v337);
      if ( *(_DWORD *)(v333 + 24) <= 2u )
        sub_1C6BC68(v338);
      v341 = StringLiteral_80/*"\ntarget : "*/;
      *(_QWORD *)(v333 + 48) = StringLiteral_80/*"\ntarget : "*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v333 + 48), v341, v339, v340);
      if ( *(_DWORD *)(v333 + 24) <= 3u )
        sub_1C6BC68(v342);
      v345 = v389->fields._sequencePath_5__8;
      *(_QWORD *)(v333 + 56) = v345;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v333 + 56), (int32_t)v345, v343, v344);
      if ( *(_DWORD *)(v333 + 24) <= 4u )
        sub_1C6BC68(v346);
      v349 = StringLiteral_43/*"\n"*/;
      *(_QWORD *)(v333 + 64) = StringLiteral_43/*"\n"*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v333 + 64), v349, v347, v348);
      v350 = System_String__Concat_64007324((System_String_array *)v333, 0);
      SoundCheckMenu__ErrorOutput(_4__this, v350, 0);
      v351 = v389;
      v389->fields.__2__current = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v351->fields.__2__current, 0, v352, v353);
      v175 = v389;
      v176 = 3;
LABEL_147:
      v175->fields.__1__state = v176;
      return 1;
    }
    v4 = v389;
    v61 = v183;
  }
  p__7__wrap9->klass = 0;
  sub_1C6B9AC(p__7__wrap9, 0, v2, v3);
  while ( 1 )
  {
    v320 = v389->fields._sequencePath_5__8;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v320, 0);
    v323 = v389->fields.__8__2;
    if ( !v323 )
      sub_1C6BC60(v321, v322);
    v324 = v323->fields.CS___8__locals1;
    if ( !v324 )
      sub_1C6BC60(v321, v322);
    v325 = (System_Collections_Generic_List_object__o *)v324->fields.voiceDataPath;
    if ( !v325 )
      sub_1C6BC60(0, v322);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v383,
      v325,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v386 = v383;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v386,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v326 = v386.fields._current;
      v327 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !v327 )
        sub_1C6BC60(0, v328);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)v327, (System_String_o *)v326, 0);
    }
    v59 = v61;
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v386,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    if ( !_4__this )
      sub_1C6BC60(v354, v355);
    ++_4__this->fields.checkCnt;
    v358 = v389;
    v389->fields.__8__2 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v358->fields.__8__2, 0, v356, v357);
    v359 = v389;
    v389->fields._sequencePath_5__8 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v359->fields._sequencePath_5__8, 0, v360, v361);
    v362 = v389;
    v389->fields._svtLimitAddEntity_5__9 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v362->fields._svtLimitAddEntity_5__9, 0, v363, v364);
    v365 = v389;
    v389->fields._svtEntity_5__7 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v365->fields._svtEntity_5__7, 0, v366, v367);
    v4 = v389;
LABEL_334:
    v371 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             (System_Collections_Generic_List_Enumerator_object__o *)&v4->fields.__7__wrap5,
             (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    v372 = v389;
    if ( !v371 )
    {
      SoundCheckMenu__npCheck_d__20____m__Finally1(v389, v368);
      v376 = v389;
      v389->fields.__7__wrap5.fields._list = 0;
      *(_QWORD *)&v376->fields.__7__wrap5.fields._index = 0;
      v376->fields.__7__wrap5.fields._current = 0;
      if ( !_4__this )
        sub_1C6BC60(v376, v373);
      _4__this->fields.nextCheck = 0;
      v376->fields.__2__current = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v376->fields.__2__current, 0, v374, v375);
      v175 = v389;
      v176 = 4;
      goto LABEL_147;
    }
    v62 = v389->fields.__7__wrap5.fields._current;
    v389->fields._svtEntity_5__7 = v62;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v372->fields._svtEntity_5__7, (int32_t)v62, v369, v370);
    v63 = (Il2CppObject *)sub_1C6BC54(SoundCheckMenu___c__DisplayClass20_1_TypeInfo);
    System_Object___ctor(v63, 0);
    v64 = v389;
    v389->fields.__8__2 = (struct SoundCheckMenu___c__DisplayClass20_1_o *)v63;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v64->fields.__8__2, (int32_t)v63, v65, v66);
    v70 = v389->fields.__8__2;
    if ( !v70 )
      sub_1C6BC60(0, v67);
    v71 = v389->fields.__8__1;
    v70->fields.CS___8__locals1 = v71;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v70->fields.CS___8__locals1, (int32_t)v71, v68, v69);
    v75 = v389->fields._svtEntity_5__7;
    if ( !v75 )
      sub_1C6BC60(v72, v73);
    id = v75->fields.id;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v390.fields.currentCryptoKey = &id;
    *(_QWORD *)&v390.fields.fakeValue = 0;
    v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v390, v74);
    v77 = System_String__Concat_63966792((System_String_o *)StringLiteral_9513/*"NoblePhantasm/Sequence/"*/, v76, 0);
    v78 = v389;
    v389->fields._sequencePath_5__8 = v77;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v78->fields._sequencePath_5__8, (int32_t)v77, v79, v80);
    v81 = v389->fields._sequencePath_5__8;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    isExistAssetStorage = AssetManager__isExistAssetStorage(v81, 0);
    if ( !isExistAssetStorage )
      break;
    v86 = v389;
    v389->fields._svtLimitAddEntity_5__9 = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v86->fields._svtLimitAddEntity_5__9, 0, v84, v85);
    svtLimitAddEntitys_5__3 = v389->fields._svtLimitAddEntitys_5__3;
    if ( !svtLimitAddEntitys_5__3 )
      sub_1C6BC60(v87, v88);
    v90 = svtLimitAddEntitys_5__3->max_length;
    if ( v90 >= 1 )
    {
      v91 = 0;
      while ( 1 )
      {
        if ( v91 >= v90 )
          sub_1C6BC68(v87);
        v92 = svtLimitAddEntitys_5__3->m_Items[v91];
        if ( !v92 )
          sub_1C6BC60(v87, v88);
        v93 = v389->fields._svtEntity_5__7;
        if ( !v93 )
          sub_1C6BC60(v87, v88);
        svtId = v92->fields.svtId;
        v96 = *(_QWORD *)&v93->fields.id.fields.currentCryptoKey;
        v95 = *(_QWORD *)&v93->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v391.fields.currentCryptoKey = v96;
        *(_QWORD *)&v391.fields.fakeValue = v95;
        v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v391, 0);
        if ( svtId == (_DWORD)v87 )
          break;
        v90 = svtLimitAddEntitys_5__3->max_length;
        if ( (int)++v91 >= v90 )
          goto LABEL_60;
      }
      v99 = v389;
      v389->fields._svtLimitAddEntity_5__9 = v92;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v99->fields._svtLimitAddEntity_5__9, (int32_t)v92, v97, v98);
    }
LABEL_60:
    v100 = v389->fields._svtEntity_5__7;
    if ( !v100 )
      sub_1C6BC60(v87, v88);
    v101 = v389->fields._svtLimitAddMst_5__2;
    v103 = *(_QWORD *)&v100->fields.id.fields.currentCryptoKey;
    v102 = *(_QWORD *)&v100->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v392.fields.currentCryptoKey = v103;
    *(_QWORD *)&v392.fields.fakeValue = v102;
    v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v392, 0);
    if ( !v101 )
      sub_1C6BC60(v104, (unsigned int)v104);
    VoiceId = ServantLimitAddMaster__getVoiceId(v101, v104, 0, 0);
    v388 = VoiceId;
    v107 = v389->fields.__8__2;
    if ( !v107 )
      sub_1C6BC60(VoiceId, v106);
    v108 = v107->fields.CS___8__locals1;
    if ( !v108 )
      sub_1C6BC60(VoiceId, v106);
    v109 = v108->fields.voiceDataPath;
    if ( !v109 )
      sub_1C6BC60(VoiceId, v106);
    v110 = v109->fields._size;
    v111 = v109->fields._version + 1;
    v109->fields._size = 0;
    v109->fields._version = v111;
    if ( v110 >= 1 )
    {
      System_Array__Clear((System_Array_o *)v109->fields._items, 0, v110, 0);
      v107 = v389->fields.__8__2;
      if ( !v107 )
        sub_1C6BC60(VoiceId, v106);
    }
    v112 = v107->fields.CS___8__locals1;
    if ( !v112 )
      sub_1C6BC60(VoiceId, v106);
    v113 = (System_Collections_Generic_List_object__o *)v112->fields.voiceDataPath;
    v114 = System_Int32__ToString((int32_t)&v388, 0);
    v115 = (Il2CppObject *)System_String__Concat_63966792((System_String_o *)StringLiteral_4414/*"ChrVoice_"*/, v114, 0);
    v118 = v115;
    if ( !v113 )
      sub_1C6BC60(v115, v115);
    v119 = v113->fields._items;
    v120 = Method_System_Collections_Generic_List_string__Add__;
    ++v113->fields._version;
    if ( !v119 )
      sub_1C6BC60(v115, v115);
    v121 = v113->fields._size;
    if ( (unsigned int)v121 >= LODWORD(v119->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v113,
        v115,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
    }
    else
    {
      v122 = &v119->obj.klass + v121;
      v113->fields._size = v121 + 1;
      v122[4] = (Il2CppClass *)v118;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v122 + 4), (int32_t)v118, v116, v117);
    }
    v125 = v389->fields.__8__2;
    if ( !v125 )
      sub_1C6BC60(v123, v124);
    v126 = v125->fields.CS___8__locals1;
    if ( !v126 )
      sub_1C6BC60(v123, v124);
    v127 = (System_Collections_Generic_List_object__o *)v126->fields.voiceDataPath;
    v128 = System_Int32__ToString((int32_t)&v388, 0);
    v129 = (Il2CppObject *)System_String__Concat_63966792((System_String_o *)StringLiteral_12765/*"Servants_"*/, v128, 0);
    v132 = v129;
    if ( !v127 )
      sub_1C6BC60(v129, v129);
    v133 = v127->fields._items;
    v134 = Method_System_Collections_Generic_List_string__Add__;
    ++v127->fields._version;
    if ( !v133 )
      sub_1C6BC60(v129, v129);
    v135 = v127->fields._size;
    if ( (unsigned int)v135 >= LODWORD(v133->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v127,
        v129,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
    }
    else
    {
      v136 = &v133->obj.klass + v135;
      v127->fields._size = v135 + 1;
      v136[4] = (Il2CppClass *)v132;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v136 + 4), (int32_t)v132, v130, v131);
    }
    v139 = v389->fields.__8__2;
    if ( !v139 )
      sub_1C6BC60(v137, v138);
    v140 = v139->fields.CS___8__locals1;
    if ( !v140 )
      sub_1C6BC60(v137, v138);
    v141 = (System_Collections_Generic_List_object__o *)v140->fields.voiceDataPath;
    v142 = System_Int32__ToString((int32_t)&v388, 0);
    v143 = (Il2CppObject *)System_String__Concat_63966792((System_String_o *)StringLiteral_9515/*"NoblePhantasm_"*/, v142, 0);
    v146 = v143;
    if ( !v141 )
      sub_1C6BC60(v143, v143);
    v147 = v141->fields._items;
    v148 = Method_System_Collections_Generic_List_string__Add__;
    ++v141->fields._version;
    if ( !v147 )
      sub_1C6BC60(v143, v143);
    v149 = v141->fields._size;
    if ( (unsigned int)v149 >= LODWORD(v147->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v141,
        v143,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
    }
    else
    {
      v150 = &v147->obj.klass + v149;
      v141->fields._size = v149 + 1;
      v150[4] = (Il2CppClass *)v146;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v150 + 4), (int32_t)v146, v144, v145);
    }
    v154 = v389->fields.__8__2;
    if ( !v154 )
      sub_1C6BC60(0, v151);
    v154->fields.nobleSequenceData = 0;
    p_fields = &v154->fields;
    p_fields->isLoadEnd = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_fields, 0, v152, v153);
    v156 = v389->fields._sequencePath_5__8;
    v157 = (Il2CppObject *)v389->fields.__8__2;
    v158 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v158, v157, Method_SoundCheckMenu___c__DisplayClass20_1__npCheck_b__0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (SoundCheckMenu__npCheck_d__20_o *)AssetManager__loadAssetStorage(v156, v158, 1, 0);
    v4 = v389;
LABEL_93:
    v159 = v4->fields.__8__2;
    if ( !v159 )
      sub_1C6BC60(this, method);
    if ( !v159->fields.isLoadEnd )
    {
      v4->fields.__2__current = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v2, v3);
      v175 = v389;
      v176 = 2;
      goto LABEL_147;
    }
    nobleSequenceData = v159->fields.nobleSequenceData;
    if ( !nobleSequenceData )
      sub_1C6BC60(this, method);
    objectList = nobleSequenceData->fields.objectList;
    if ( !objectList )
      sub_1C6BC60(this, method);
    v162 = objectList->max_length;
    if ( v162 < 1 )
    {
LABEL_104:
      v165 = 0;
    }
    else
    {
      v163 = 0;
      while ( 1 )
      {
        if ( v163 >= v162 )
          sub_1C6BC68(this);
        v164 = (__int64)objectList + 8 * (int)v163;
        v165 = *(UnityEngine_Object_o **)(v164 + 32);
        if ( !v165 )
          sub_1C6BC60(this, method);
        name = UnityEngine_Object__get_name(*(UnityEngine_Object_o **)(v164 + 32), 0);
        if ( !name )
          sub_1C6BC60(0, v167);
        this = (SoundCheckMenu__npCheck_d__20_o *)System_String__Equals_64002112(
                                                    name,
                                                    (System_String_o *)StringLiteral_4412/*"ChrSequence1"*/,
                                                    0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
        v162 = objectList->max_length;
        if ( (int)++v163 >= v162 )
          goto LABEL_104;
      }
      if ( (UnityEngine_GameObject_c *)v165->klass != UnityEngine_GameObject_TypeInfo )
        v165 = 0;
    }
    v61 = v59;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v168 = UnityEngine_Object__op_Inequality(v165, 0, 0);
    if ( v168 )
    {
      if ( !v165 )
        sub_1C6BC60(v168, v169);
      ComponentsInChildren_object__51985744 = UnityEngine_GameObject__GetComponentsInChildren_object__51985744(
                                                (UnityEngine_GameObject_o *)v165,
                                                (const MethodInfo_3193D50 *)Method_UnityEngine_GameObject_GetComponentsInChildren_USFGOPlayAudioEvent___);
      v171 = v389;
      v389->fields.__7__wrap9 = (struct WellFired_USFGOPlayAudioEvent_array *)ComponentsInChildren_object__51985744;
      sub_1C6B9AC(
        (CGThumbnailListItem_o *)&v171->fields.__7__wrap9,
        (int32_t)ComponentsInChildren_object__51985744,
        v172,
        v173);
      v4 = v389;
      v174 = 0;
      v389->fields.__7__wrap10 = 0;
      goto LABEL_300;
    }
  }
  if ( !_4__this )
    sub_1C6BC60(isExistAssetStorage, v83);
  ++_4__this->fields.checkCnt;
  v177 = v389;
  v389->fields.__2__current = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v177->fields.__2__current, 0, v84, v85);
  result = 1;
  v389->fields.__1__state = 1;
  return result;
}


Il2CppObject *SoundCheckMenu__npCheck_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundCheckMenu__npCheck_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundCheckMenu__npCheck_d__20__System_Collections_IEnumerator_Reset(
        SoundCheckMenu__npCheck_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SoundCheckMenu__npCheck_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *SoundCheckMenu__npCheck_d__20__System_Collections_IEnumerator_get_Current(
        SoundCheckMenu__npCheck_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundCheckMenu__npCheck_d__20__System_IDisposable_Dispose(
        SoundCheckMenu__npCheck_d__20_o *this,
        const MethodInfo *method)
{
  unsigned int v2; // w8

  v2 = this->fields.__1__state + 3;
  if ( v2 <= 6 && ((1 << v2) & 0x71) != 0 )
    SoundCheckMenu__npCheck_d__20____m__Finally1(this, method);
}


void SoundCheckMenu__npCheck_d__20____m__Finally1(SoundCheckMenu__npCheck_d__20_o *this, const MethodInfo *method)
{
  if ( (byte_4CB39D4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    byte_4CB39D4 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap5,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
}


void SoundCheckMenu__svtVoiceCheck_d__22___ctor(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundCheckMenu__svtVoiceCheck_d__22__MoveNext(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v4; // x20
  SoundCheckMenu_o *_4__this; // x19
  Il2CppObject *v6; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x20
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v29; // x22
  System_Object_array *Entitys; // x21
  System_Collections_Generic_List_object__o *v31; // x20
  __int64 v32; // x0
  __int64 v33; // x1
  System_Object_array *IsServant; // x0
  __int64 v35; // x1
  int max_length; // w8
  int i; // w23
  Il2CppClass **v38; // x8
  Il2CppObject *v39; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  struct SoundCheckMenu___c__DisplayClass22_0_o *_8__1; // x21
  System_Collections_Generic_List_object__o *v47; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v52; // x9
  __int128 v53; // q0
  CGThumbnailListItem_o *p__7__wrap3; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v57; // x8
  int32_t _7__wrap12; // w8
  int v59; // w9
  CGThumbnailListItem_o *p__8__2; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  bool v70; // w8
  SoundCheckMenu__svtVoiceCheck_d__22_o *v71; // x0
  struct ServantEntity_o *current; // x1
  Il2CppObject *v73; // x20
  SoundCheckMenu__svtVoiceCheck_d__22_o *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  __int64 v77; // x1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  struct SoundCheckMenu___c__DisplayClass22_1_o *_8__2; // x0
  struct SoundCheckMenu___c__DisplayClass22_0_o *v81; // x1
  __int64 v82; // x0
  __int64 v83; // x1
  struct ServantEntity_o *svtEntity_5__5; // x9
  ServantVoiceMaster_o *svtVoiceMst_5__2; // x20
  __int64 v86; // x21
  __int64 v87; // x22
  __int64 v88; // x0
  struct ServantVoiceEntity_array *Entity_43058520; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  __int64 v93; // x0
  __int64 v94; // x1
  struct ServantEntity_o *v95; // x8
  ServantLimitAddMaster_o *svtLimitAddMst_5__3; // x20
  __int64 v97; // x0
  __int64 VoiceId; // x0
  __int64 v99; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v100; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *CS___8__locals1; // x9
  struct System_Collections_Generic_List_string__o *voiceDataPath; // x9
  int32_t v103; // w2
  int v104; // w10
  struct SoundCheckMenu___c__DisplayClass22_0_o *v105; // x8
  System_Collections_Generic_List_object__o *v106; // x20
  System_String_o *v107; // x1
  Il2CppObject *v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  Il2CppObject *v111; // x1
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  Il2CppClass **v115; // x0
  __int64 v116; // x0
  __int64 v117; // x1
  __int64 v118; // x0
  __int64 v119; // x1
  SoundCheckMenu__svtVoiceCheck_d__22_o *v120; // x8
  bool result; // w0
  struct SoundCheckMenu___c__DisplayClass22_1_o *v122; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v123; // x8
  System_Collections_Generic_List_object__o *v124; // x20
  System_String_o *v125; // x1
  Il2CppObject *v126; // x0
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  Il2CppObject *v129; // x1
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  __int64 v134; // x0
  __int64 v135; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v136; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v137; // x8
  System_Collections_Generic_List_object__o *v138; // x20
  System_String_o *v139; // x1
  Il2CppObject *v140; // x0
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  Il2CppObject *v143; // x1
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  Il2CppClass **v147; // x0
  __int64 v148; // x0
  __int64 v149; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v150; // x8
  Il2CppObject *v151; // x0
  __int64 v152; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v153; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v154; // x9
  __int64 DataCnt; // x1
  SoundManager_o *v156; // x20
  System_Collections_Generic_List_object__o *v157; // x0
  Il2CppObject *Item; // x21
  Il2CppObject *v159; // x23
  System_Action_o *v160; // x22
  __int64 v161; // x0
  __int64 v162; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v163; // x8
  struct ServantVoiceEntity_array *svtVoiceEntitys_5__6; // x1
  __int64 v165; // x0
  __int64 v166; // x1
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v169; // x8
  int v170; // w10
  struct ServantVoiceEntity_o *v171; // x1
  __int64 j; // x1
  ServantVoiceEntity_o *klass; // x0
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v175; // x9
  __int128 v176; // q0
  CGThumbnailListItem_o *p__7__wrap10; // x0
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v180; // x8
  struct ServantVoiceData_array *v181; // x1
  struct ServantVoiceData_array *_7__wrap11; // x10
  unsigned int v183; // w11
  const MethodInfo *v184; // x1
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  bool v187; // w8
  SoundCheckMenu__svtVoiceCheck_d__22_o *v188; // x0
  CGThumbnailListItem_o *p_svtVoiceEntity_5__9; // x0
  struct ServantVoiceEntity_array *_7__wrap6; // x11
  int v191; // w12
  __int64 v192; // x0
  __int64 v193; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v194; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v195; // x8
  System_Collections_Generic_List_object__o *v196; // x0
  Il2CppObject *v197; // x20
  Il2CppObject *v198; // x0
  __int64 v199; // x1
  struct SoundCheckMenu___c__DisplayClass22_1_o *v200; // x8
  struct SoundCheckMenu___c__DisplayClass22_0_o *v201; // x8
  System_Collections_Generic_List_object__o *v202; // x0
  ServantVoiceData_o *v203; // x24
  _BOOL4 v204; // w20
  Il2CppObject *v205; // x21
  Il2CppObject *v206; // x0
  __int64 v207; // x1
  Il2CppObject *v208; // x0
  __int64 v209; // x1
  _BOOL8 IsExistsSound; // x0
  __int64 v211; // x1
  struct ServantEntity_o *v212; // x8
  _BOOL4 v213; // w21
  __int64 v214; // x22
  __int64 v215; // x23
  __int64 v216; // x0
  int32_t v217; // w2
  const MethodInfo *v218; // x3
  __int64 v219; // x0
  __int64 v220; // x1
  int32_t v221; // w2
  const MethodInfo *v222; // x3
  __int64 v223; // x20
  int32_t v224; // w1
  __int64 v225; // x0
  int32_t v226; // w2
  const MethodInfo *v227; // x3
  struct System_String_o *id; // x1
  __int64 v229; // x0
  int32_t v230; // w2
  const MethodInfo *v231; // x3
  int32_t v232; // w1
  __int64 v233; // x0
  __int64 v234; // x1
  const MethodInfo *v235; // x2
  struct ServantEntity_o *v236; // x8
  System_String_o *v237; // x0
  int32_t v238; // w2
  const MethodInfo *v239; // x3
  __int64 v240; // x0
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  int32_t v243; // w1
  System_String_o *v244; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v245; // x0
  SoundCheckMenu__svtVoiceCheck_d__22_o *v246; // x8
  int v247; // w9
  __int64 v248; // x0
  __int64 v249; // x1
  int32_t v250; // w2
  const MethodInfo *v251; // x3
  SoundCheckMenu__svtVoiceCheck_d__22_o *v252; // x0
  System_Collections_Generic_List_Enumerator_object__o v253; // [xsp+8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v254; // [xsp+20h] [xbp-B0h] BYREF
  __int64 v255; // [xsp+40h] [xbp-90h]
  SoundCheckMenu__svtVoiceCheck_d__22_o **v256; // [xsp+48h] [xbp-88h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v257; // [xsp+50h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v258; // [xsp+60h] [xbp-70h] BYREF
  int v259; // [xsp+84h] [xbp-4Ch] BYREF
  SoundCheckMenu__svtVoiceCheck_d__22_o *v260; // [xsp+88h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v261; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v262; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v263; // 0:x0.16

  v4 = this;
  v260 = this;
  if ( (byte_4CB39D5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C6BA08(&Method_DataMasterBase_VoiceMaster__VoiceEntity__string__getEntitys__);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantEntity__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&SoundCheckMenu___c__DisplayClass22_0_TypeInfo);
    sub_1C6BA08(&Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__0__);
    sub_1C6BA08(&SoundCheckMenu___c__DisplayClass22_1_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_9515/*"NoblePhantasm_"*/);
    sub_1C6BA08(&StringLiteral_22379/*"not exist : "*/);
    sub_1C6BA08(&StringLiteral_80/*"\ntarget : "*/);
    sub_1C6BA08(&StringLiteral_4414/*"ChrVoice_"*/);
    sub_1C6BA08(&StringLiteral_12765/*"Servants_"*/);
    this = (SoundCheckMenu__svtVoiceCheck_d__22_o *)sub_1C6BA08(&StringLiteral_3076/*"Battle"*/);
    byte_4CB39D5 = 1;
  }
  v259 = 0;
  memset(&v258, 0, sizeof(v258));
  v257 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  v255 = 0;
  v256 = &v260;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C6BC54(SoundCheckMenu___c__DisplayClass22_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v7 = v260;
      v260->fields.__8__1 = (struct SoundCheckMenu___c__DisplayClass22_0_o *)v6;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.__8__1, (int32_t)v6, v8, v9);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        sub_1C6BC60(0, v11);
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantMaster___);
      v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v13 )
        sub_1C6BC60(0, v14);
      v15 = DataManager__GetMasterData_object_(
              (DataManager_o *)v13,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      v16 = v260;
      v260->fields._svtVoiceMst_5__2 = (struct ServantVoiceMaster_o *)v15;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v16->fields._svtVoiceMst_5__2, (int32_t)v15, v17, v18);
      v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v19 )
        sub_1C6BC60(0, v20);
      v21 = DataManager__GetMasterData_object_(
              (DataManager_o *)v19,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
      v22 = v260;
      v260->fields._svtLimitAddMst_5__3 = (struct ServantLimitAddMaster_o *)v21;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v22->fields._svtLimitAddMst_5__3, (int32_t)v21, v23, v24);
      v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v25 )
        sub_1C6BC60(0, v26);
      v27 = DataManager__GetMasterData_object_(
              (DataManager_o *)v25,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !MasterData_object )
        sub_1C6BC60(v27, v28);
      v29 = (DataMasterBase_TMaster__TEntity__PKType__o *)v27;
      Entitys = DataMasterBase_object__object__int___getEntitys(
                  (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                  (const MethodInfo_33F8360 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__getEntitys__);
      v31 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v31,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantEntity___ctor__);
      if ( !v29 )
        sub_1C6BC60(v32, v33);
      IsServant = DataMasterBase_object__object__object___getEntitys(
                    v29,
                    (const MethodInfo_33FCE18 *)Method_DataMasterBase_VoiceMaster__VoiceEntity__string__getEntitys__);
      if ( !Entitys )
        sub_1C6BC60(IsServant, v35);
      max_length = Entitys->max_length;
      if ( max_length >= 1 )
      {
        for ( i = 0; i < max_length; ++i )
        {
          if ( i >= (unsigned int)max_length )
            sub_1C6BC68(IsServant);
          v38 = &Entitys->obj.klass + i;
          v39 = (Il2CppObject *)v38[4];
          if ( !v39 )
            sub_1C6BC60(IsServant, v35);
          IsServant = (System_Object_array *)ServantEntity__get_IsServant((ServantEntity_o *)v38[4], 0);
          if ( ((unsigned __int8)IsServant & 1) != 0 )
          {
            if ( !v31 )
              sub_1C6BC60(IsServant, v35);
            items = v31->fields._items;
            v43 = Method_System_Collections_Generic_List_ServantEntity__Add__;
            ++v31->fields._version;
            if ( !items )
              sub_1C6BC60(IsServant, v35);
            size = v31->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v31,
                v39,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = &items->obj.klass + size;
              v31->fields._size = size + 1;
              v45[4] = (Il2CppClass *)v39;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v39, v40, v41);
            }
          }
          max_length = Entitys->max_length;
        }
      }
      if ( !v31 )
        sub_1C6BC60(IsServant, v35);
      if ( !_4__this )
        sub_1C6BC60(IsServant, v35);
      _4__this->fields.checkMax = v31->fields._size;
      _8__1 = v260->fields.__8__1;
      v47 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v47,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !_8__1 )
        sub_1C6BC60(v48, v49);
      _8__1->fields.voiceDataPath = (struct System_Collections_Generic_List_string__o *)v47;
      sub_1C6B9AC((CGThumbnailListItem_o *)&_8__1->fields, (int32_t)v47, v50, v51);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v253,
        v31,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantEntity__GetEnumerator__);
      v52 = v260;
      v53 = *(_OWORD *)&v253.fields._list;
      p__7__wrap3 = (CGThumbnailListItem_o *)&v260->fields.__7__wrap3;
      v254 = v253;
      v260->fields.__7__wrap3.fields._current = (struct ServantEntity_o *)v253.fields._current;
      *(_OWORD *)&v52->fields.__7__wrap3.fields._list = v53;
      sub_1C6B9AC(p__7__wrap3, 0, v55, v56);
      v57 = v260;
      v260->fields.__1__state = -3;
      goto LABEL_28;
    case 1:
      v4->fields.__1__state = -3;
      goto LABEL_70;
    case 2:
      _7__wrap12 = v4->fields.__7__wrap12;
      v4->fields.__1__state = -4;
      v59 = _7__wrap12 + 1;
      v4->fields.__7__wrap12 = _7__wrap12 + 1;
      goto LABEL_126;
    case 3:
      v4->fields.__8__2 = 0;
      p__8__2 = (CGThumbnailListItem_o *)&v4->fields.__8__2;
      LODWORD(p__8__2[-1].fields.viewObject) = -3;
      sub_1C6B9AC(p__8__2, 0, v2, v3);
      v61 = v260;
      v260->fields._svtVoiceEntitys_5__6 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v61->fields._svtVoiceEntitys_5__6, 0, v62, v63);
      v64 = v260;
      v260->fields._svtEntity_5__5 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v64->fields._svtEntity_5__5, 0, v65, v66);
      v57 = v260;
LABEL_28:
      v70 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v57->fields.__7__wrap3,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__MoveNext__);
      v71 = v260;
      if ( v70 )
      {
        current = v260->fields.__7__wrap3.fields._current;
        v260->fields._svtEntity_5__5 = current;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v71->fields._svtEntity_5__5, (int32_t)current, v68, v69);
        v73 = (Il2CppObject *)sub_1C6BC54(SoundCheckMenu___c__DisplayClass22_1_TypeInfo);
        System_Object___ctor(v73, 0);
        v74 = v260;
        v260->fields.__8__2 = (struct SoundCheckMenu___c__DisplayClass22_1_o *)v73;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v74->fields.__8__2, (int32_t)v73, v75, v76);
        _8__2 = v260->fields.__8__2;
        if ( !_8__2 )
          sub_1C6BC60(0, v77);
        v81 = v260->fields.__8__1;
        _8__2->fields.CS___8__locals1 = v81;
        sub_1C6B9AC((CGThumbnailListItem_o *)&_8__2->fields.CS___8__locals1, (int32_t)v81, v78, v79);
        svtEntity_5__5 = v260->fields._svtEntity_5__5;
        if ( !svtEntity_5__5 )
          sub_1C6BC60(v82, v83);
        svtVoiceMst_5__2 = v260->fields._svtVoiceMst_5__2;
        v87 = *(_QWORD *)&svtEntity_5__5->fields.id.fields.currentCryptoKey;
        v86 = *(_QWORD *)&svtEntity_5__5->fields.id.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v261.fields.currentCryptoKey = v87;
        *(_QWORD *)&v261.fields.fakeValue = v86;
        v88 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v261, 0);
        if ( !svtVoiceMst_5__2 )
          sub_1C6BC60(v88, (unsigned int)v88);
        Entity_43058520 = ServantVoiceMaster__getEntity_43058520(svtVoiceMst_5__2, v88, 0, 0);
        v90 = v260;
        v260->fields._svtVoiceEntitys_5__6 = Entity_43058520;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v90->fields._svtVoiceEntitys_5__6, (int32_t)Entity_43058520, v91, v92);
        v95 = v260->fields._svtEntity_5__5;
        if ( !v95 )
          sub_1C6BC60(v93, v94);
        svtLimitAddMst_5__3 = v260->fields._svtLimitAddMst_5__3;
        v97 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v95->fields.id, 0);
        if ( !svtLimitAddMst_5__3 )
          sub_1C6BC60(v97, (unsigned int)v97);
        VoiceId = ServantLimitAddMaster__getVoiceId(svtLimitAddMst_5__3, v97, 0, 0);
        v259 = VoiceId;
        v100 = v260->fields.__8__2;
        if ( !v100 )
          sub_1C6BC60(VoiceId, v99);
        CS___8__locals1 = v100->fields.CS___8__locals1;
        if ( !CS___8__locals1 )
          sub_1C6BC60(VoiceId, v99);
        voiceDataPath = CS___8__locals1->fields.voiceDataPath;
        if ( !voiceDataPath )
          sub_1C6BC60(VoiceId, v99);
        v103 = voiceDataPath->fields._size;
        v104 = voiceDataPath->fields._version + 1;
        voiceDataPath->fields._size = 0;
        voiceDataPath->fields._version = v104;
        if ( v103 >= 1 )
        {
          System_Array__Clear((System_Array_o *)voiceDataPath->fields._items, 0, v103, 0);
          v100 = v260->fields.__8__2;
          if ( !v100 )
            sub_1C6BC60(VoiceId, v99);
        }
        v105 = v100->fields.CS___8__locals1;
        if ( !v105 )
          sub_1C6BC60(VoiceId, v99);
        v106 = (System_Collections_Generic_List_object__o *)v105->fields.voiceDataPath;
        v107 = System_Int32__ToString((int32_t)&v259, 0);
        v108 = (Il2CppObject *)System_String__Concat_63966792((System_String_o *)StringLiteral_4414/*"ChrVoice_"*/, v107, 0);
        v111 = v108;
        if ( !v106 )
          sub_1C6BC60(v108, v108);
        v112 = v106->fields._items;
        v113 = Method_System_Collections_Generic_List_string__Add__;
        ++v106->fields._version;
        if ( !v112 )
          sub_1C6BC60(v108, v108);
        v114 = v106->fields._size;
        if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v106,
            v108,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
        }
        else
        {
          v115 = &v112->obj.klass + v114;
          v106->fields._size = v114 + 1;
          v115[4] = (Il2CppClass *)v111;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v115 + 4), (int32_t)v111, v109, v110);
        }
        v122 = v260->fields.__8__2;
        if ( !v122 )
          sub_1C6BC60(v116, v117);
        v123 = v122->fields.CS___8__locals1;
        if ( !v123 )
          sub_1C6BC60(v116, v117);
        v124 = (System_Collections_Generic_List_object__o *)v123->fields.voiceDataPath;
        v125 = System_Int32__ToString((int32_t)&v259, 0);
        v126 = (Il2CppObject *)System_String__Concat_63966792((System_String_o *)StringLiteral_12765/*"Servants_"*/, v125, 0);
        v129 = v126;
        if ( !v124 )
          sub_1C6BC60(v126, v126);
        v130 = v124->fields._items;
        v131 = Method_System_Collections_Generic_List_string__Add__;
        ++v124->fields._version;
        if ( !v130 )
          sub_1C6BC60(v126, v126);
        v132 = v124->fields._size;
        if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v124,
            v126,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
        }
        else
        {
          v133 = &v130->obj.klass + v132;
          v124->fields._size = v132 + 1;
          v133[4] = (Il2CppClass *)v129;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v133 + 4), (int32_t)v129, v127, v128);
        }
        v136 = v260->fields.__8__2;
        if ( !v136 )
          sub_1C6BC60(v134, v135);
        v137 = v136->fields.CS___8__locals1;
        if ( !v137 )
          sub_1C6BC60(v134, v135);
        v138 = (System_Collections_Generic_List_object__o *)v137->fields.voiceDataPath;
        v139 = System_Int32__ToString((int32_t)&v259, 0);
        v140 = (Il2CppObject *)System_String__Concat_63966792((System_String_o *)StringLiteral_9515/*"NoblePhantasm_"*/, v139, 0);
        v143 = v140;
        if ( !v138 )
          sub_1C6BC60(v140, v140);
        v144 = v138->fields._items;
        v145 = Method_System_Collections_Generic_List_string__Add__;
        ++v138->fields._version;
        if ( !v144 )
          sub_1C6BC60(v140, v140);
        v146 = v138->fields._size;
        if ( (unsigned int)v146 >= LODWORD(v144->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v138,
            v140,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
        }
        else
        {
          v147 = &v144->obj.klass + v146;
          v138->fields._size = v146 + 1;
          v147[4] = (Il2CppClass *)v143;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v147 + 4), (int32_t)v143, v141, v142);
        }
        v150 = v260->fields.__8__2;
        if ( !v150 )
          sub_1C6BC60(v148, v149);
        v150->fields.DataCnt = 0;
        v150->fields.isLoadEnd = 0;
        v151 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
        v153 = v260->fields.__8__2;
        if ( !v153 )
          sub_1C6BC60(v151, v152);
        v154 = v153->fields.CS___8__locals1;
        if ( !v154 )
          sub_1C6BC60(v151, v152);
        DataCnt = (unsigned int)v153->fields.DataCnt;
        v156 = (SoundManager_o *)v151;
        v157 = (System_Collections_Generic_List_object__o *)v154->fields.voiceDataPath;
        v153->fields.DataCnt = DataCnt + 1;
        if ( !v157 )
          sub_1C6BC60(0, DataCnt);
        Item = System_Collections_Generic_List_object___get_Item(
                 v157,
                 DataCnt,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
        v159 = (Il2CppObject *)v260->fields.__8__2;
        v160 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(v160, v159, Method_SoundCheckMenu___c__DisplayClass22_1__svtVoiceCheck_b__0__, 0);
        if ( !v156 )
          sub_1C6BC60(v161, v162);
        SoundManager__LoadAudioAssetStorage(v156, (System_String_o *)Item, v160, 1, 0);
        v4 = v260;
LABEL_70:
        v163 = v4->fields.__8__2;
        if ( !v163 )
          sub_1C6BC60(this, method);
        if ( !v163->fields.isLoadEnd )
        {
          v4->fields.__2__current = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__2__current, 0, v2, v3);
          result = 1;
          v260->fields.__1__state = 1;
          return result;
        }
        svtVoiceEntitys_5__6 = v4->fields._svtVoiceEntitys_5__6;
        v4->fields.__7__wrap6 = svtVoiceEntitys_5__6;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__7__wrap6, (int32_t)svtVoiceEntitys_5__6, v2, v3);
        v169 = v260;
        v170 = 0;
        v260->fields.__7__wrap7 = 0;
        while ( 1 )
        {
          _7__wrap6 = v169->fields.__7__wrap6;
          if ( !_7__wrap6 )
            sub_1C6BC60(v165, v166);
          v191 = _7__wrap6->max_length;
          if ( v170 >= v191 )
            break;
          if ( v170 >= (unsigned int)v191 )
            sub_1C6BC68(v165);
          v171 = _7__wrap6->m_Items[v170];
          v169->fields._svtVoiceEntity_5__9 = v171;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v169->fields._svtVoiceEntity_5__9, (int32_t)v171, v167, v168);
          v169 = v260;
          if ( v260->fields._svtVoiceEntity_5__9 )
          {
            for ( j = 1; ; j = (unsigned int)(v169->fields._ii_5__10 + 1) )
            {
              p_svtVoiceEntity_5__9 = (CGThumbnailListItem_o *)&v169->fields._svtVoiceEntity_5__9;
              v169->fields._ii_5__10 = j;
              if ( (int)j >= 25 )
                break;
              klass = (ServantVoiceEntity_o *)p_svtVoiceEntity_5__9->klass;
              if ( !klass )
                sub_1C6BC60(0, j);
              VoiceList = ServantVoiceEntity__getVoiceList(klass, j, 0);
              if ( VoiceList )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v253,
                  (System_Collections_Generic_List_object__o *)VoiceList,
                  (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ServantVoiceData____GetEnumerator__);
                v175 = v260;
                v176 = *(_OWORD *)&v253.fields._list;
                p__7__wrap10 = (CGThumbnailListItem_o *)&v260->fields.__7__wrap10;
                v254 = v253;
                v260->fields.__7__wrap10.fields._current = (struct ServantVoiceData_array *)v253.fields._current;
                *(_OWORD *)&v175->fields.__7__wrap10.fields._list = v176;
                sub_1C6B9AC(p__7__wrap10, 0, v178, v179);
                v180 = v260;
                v260->fields.__1__state = -4;
                while ( 1 )
                {
                  v187 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           (System_Collections_Generic_List_Enumerator_object__o *)&v180->fields.__7__wrap10,
                           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____MoveNext__);
                  v188 = v260;
                  if ( !v187 )
                    break;
                  v181 = v260->fields.__7__wrap10.fields._current;
                  v260->fields.__7__wrap11 = v181;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&v188->fields.__7__wrap11, (int32_t)v181, v185, v186);
                  v4 = v260;
                  v59 = 0;
                  v260->fields.__7__wrap12 = 0;
LABEL_126:
                  _7__wrap11 = v4->fields.__7__wrap11;
                  if ( !_7__wrap11 )
                    sub_1C6BC60(this, method);
                  v183 = _7__wrap11->max_length;
                  if ( v59 < (int)v183 )
                  {
                    if ( v59 >= v183 )
                      sub_1C6BC68(this);
                    v200 = v4->fields.__8__2;
                    if ( !v200 )
                      sub_1C6BC60(this, method);
                    v201 = v200->fields.CS___8__locals1;
                    if ( !v201 )
                      sub_1C6BC60(this, method);
                    v202 = (System_Collections_Generic_List_object__o *)v201->fields.voiceDataPath;
                    if ( !v202 )
                      sub_1C6BC60(0, method);
                    v203 = _7__wrap11->m_Items[v59];
                    System_Collections_Generic_List_object___GetEnumerator(
                      (System_Collections_Generic_List_Enumerator_T__o *)&v254,
                      v202,
                      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
                    v258 = v254;
                    do
                    {
                      v204 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                               &v258,
                               (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
                      if ( !v204 )
                        break;
                      v205 = v258.fields._current;
                      v206 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                      if ( !v203 )
                        sub_1C6BC60(v206, v207);
                      if ( !v206 )
                        sub_1C6BC60(0, v207);
                    }
                    while ( !SoundManager__IsExistsSound(
                               (SoundManager_o *)v206,
                               (System_String_o *)v205,
                               v203->fields.id,
                               0) );
                    System_Collections_Generic_List_Enumerator_object___Dispose(
                      &v258,
                      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
                    v208 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
                    if ( !v203 )
                      sub_1C6BC60(v208, v209);
                    if ( !v208 )
                      sub_1C6BC60(0, v209);
                    IsExistsSound = SoundManager__IsExistsSound(
                                      (SoundManager_o *)v208,
                                      (System_String_o *)StringLiteral_3076/*"Battle"*/,
                                      v203->fields.id,
                                      0);
                    v212 = v260->fields._svtEntity_5__5;
                    if ( !v212 )
                      sub_1C6BC60(IsExistsSound, v211);
                    v213 = IsExistsSound;
                    v215 = *(_QWORD *)&v212->fields.id.fields.currentCryptoKey;
                    v214 = *(_QWORD *)&v212->fields.id.fields.fakeValue;
                    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    *(_QWORD *)&v262.fields.currentCryptoKey = v215;
                    *(_QWORD *)&v262.fields.fakeValue = v214;
                    v216 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v262, 0);
                    if ( !_4__this )
                      sub_1C6BC60(v216, (unsigned int)v216);
                    if ( (((v204 || v213) | SoundCheckMenu__isExceptionCheck(_4__this, v216, v203->fields.id, 0)) & 1) == 0 )
                    {
                      v219 = sub_1C6BAB0(string___TypeInfo, 5);
                      v223 = v219;
                      if ( !v219 )
                        sub_1C6BC60(0, v220);
                      if ( !*(_DWORD *)(v219 + 24) )
                        sub_1C6BC68(v219);
                      v224 = StringLiteral_22379/*"not exist : "*/;
                      *(_QWORD *)(v219 + 32) = StringLiteral_22379/*"not exist : "*/;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v219 + 32), v224, v221, v222);
                      if ( *(_DWORD *)(v223 + 24) <= 1u )
                        sub_1C6BC68(v225);
                      id = v203->fields.id;
                      *(_QWORD *)(v223 + 40) = id;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v223 + 40), (int32_t)id, v226, v227);
                      if ( *(_DWORD *)(v223 + 24) <= 2u )
                        sub_1C6BC68(v229);
                      v232 = StringLiteral_80/*"\ntarget : "*/;
                      *(_QWORD *)(v223 + 48) = StringLiteral_80/*"\ntarget : "*/;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v223 + 48), v232, v230, v231);
                      v236 = v260->fields._svtEntity_5__5;
                      if ( !v236 )
                        sub_1C6BC60(v233, v234);
                      v257 = v236->fields.id;
                      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                      *(_QWORD *)&v263.fields.currentCryptoKey = &v257;
                      *(_QWORD *)&v263.fields.fakeValue = 0;
                      v237 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v263, v235);
                      if ( *(_DWORD *)(v223 + 24) <= 3u )
                        sub_1C6BC68(v237);
                      *(_QWORD *)(v223 + 56) = v237;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v223 + 56), (int32_t)v237, v238, v239);
                      if ( *(_DWORD *)(v223 + 24) <= 4u )
                        sub_1C6BC68(v240);
                      v243 = StringLiteral_43/*"\n"*/;
                      *(_QWORD *)(v223 + 64) = StringLiteral_43/*"\n"*/;
                      sub_1C6B9AC((CGThumbnailListItem_o *)(v223 + 64), v243, v241, v242);
                      v244 = System_String__Concat_64007324((System_String_array *)v223, 0);
                      SoundCheckMenu__ErrorOutput(_4__this, v244, 0);
                    }
                    v245 = v260;
                    v260->fields.__2__current = 0;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&v245->fields.__2__current, 0, v217, v218);
                    v246 = v260;
                    v247 = 2;
                    goto LABEL_173;
                  }
                  v4->fields.__7__wrap11 = 0;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__7__wrap11, 0, v2, v3);
                  v180 = v260;
                }
                SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(v260, v184);
                v169 = v260;
                v260->fields.__7__wrap10.fields._list = 0;
                *(_QWORD *)&v169->fields.__7__wrap10.fields._index = 0;
                v169->fields.__7__wrap10.fields._current = 0;
              }
              else
              {
                v169 = v260;
              }
            }
            p_svtVoiceEntity_5__9->klass = 0;
            sub_1C6B9AC(p_svtVoiceEntity_5__9, 0, v167, v168);
            v169 = v260;
          }
          v170 = v169->fields.__7__wrap7 + 1;
          v169->fields.__7__wrap7 = v170;
        }
        v169->fields.__7__wrap6 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v169->fields.__7__wrap6, 0, v167, v168);
        v194 = v260->fields.__8__2;
        if ( !v194 )
          sub_1C6BC60(v192, v193);
        v195 = v194->fields.CS___8__locals1;
        if ( !v195 )
          sub_1C6BC60(v192, v193);
        v196 = (System_Collections_Generic_List_object__o *)v195->fields.voiceDataPath;
        if ( !v196 )
          sub_1C6BC60(0, v193);
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v254,
          v196,
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
        v258 = v254;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v258,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
        {
          v197 = v258.fields._current;
          v198 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
          if ( !v198 )
            sub_1C6BC60(0, v199);
          SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)v198, (System_String_o *)v197, 0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v258,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
        if ( !_4__this )
          sub_1C6BC60(v248, v249);
        ++_4__this->fields.checkCnt;
        v252 = v260;
        v260->fields.__2__current = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v252->fields.__2__current, 0, v250, v251);
        v246 = v260;
        v247 = 3;
LABEL_173:
        v246->fields.__1__state = v247;
        return 1;
      }
      SoundCheckMenu__svtVoiceCheck_d__22____m__Finally1(v260, v67);
      v120 = v260;
      v260->fields.__7__wrap3.fields._list = 0;
      *(_QWORD *)&v120->fields.__7__wrap3.fields._index = 0;
      v120->fields.__7__wrap3.fields._current = 0;
      if ( !_4__this )
        sub_1C6BC60(v118, v119);
      result = 0;
      _4__this->fields.nextCheck = 0;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *SoundCheckMenu__svtVoiceCheck_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundCheckMenu__svtVoiceCheck_d__22__System_Collections_IEnumerator_Reset(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SoundCheckMenu__svtVoiceCheck_d__22_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *SoundCheckMenu__svtVoiceCheck_d__22__System_Collections_IEnumerator_get_Current(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundCheckMenu__svtVoiceCheck_d__22__System_IDisposable_Dispose(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  unsigned int v2; // w8
  int v3; // w8

  v2 = this->fields.__1__state + 4;
  if ( v2 <= 7 )
  {
    v3 = 1 << v2;
    if ( (v3 & 0xA2) == 0 )
    {
      if ( (v3 & 0x41) == 0 )
        return;
      SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(this, method);
    }
    SoundCheckMenu__svtVoiceCheck_d__22____m__Finally1(this, method);
  }
}


void SoundCheckMenu__svtVoiceCheck_d__22____m__Finally1(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB39D6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
    byte_4CB39D6 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantEntity__Dispose__);
}


void SoundCheckMenu__svtVoiceCheck_d__22____m__Finally2(
        SoundCheckMenu__svtVoiceCheck_d__22_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB39D7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
    byte_4CB39D7 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap10,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ServantVoiceData____Dispose__);
}