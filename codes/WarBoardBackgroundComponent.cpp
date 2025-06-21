void __fastcall WarBoardBackgroundComponent___ctor(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B19D26 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo, v3);
    byte_4B19D26 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
  this->fields.bgAnimationObjDic = (struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *)v4;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.bgAnimationObjDic, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBackgroundComponent__ChangeColorDarkness(
        WarBoardBackgroundComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(this, 0.5, immediate, method);
}


void __fastcall WarBoardBackgroundComponent__ChangeColorNormal(
        WarBoardBackgroundComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(this, 0.0, immediate, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(
        WarBoardBackgroundComponent_o *this,
        float alpha,
        bool immediate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v9; // x1
  struct UISprite_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UICommonButtonColor_c *v12; // x8
  TweenAlpha_o *v13; // x0
  UnityEngine_Object_o *v14; // x20

  if ( (byte_4B19D22 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, immediate);
    sub_1BCAFF8(&UICommonButtonColor_TypeInfo, v7);
    byte_4B19D22 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v10 = this->fields.maskSprite;
    if ( !v10 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    v12 = UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      v12 = UICommonButtonColor_TypeInfo;
    }
    v13 = TweenAlpha__Begin(gameObject, v12->static_fields->duration, alpha, 0LL);
    if ( immediate )
    {
      v14 = (UnityEngine_Object_o *)v13;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)v10 & 1) != 0 )
      {
        if ( v14 )
        {
          TweenAlpha__set_value((TweenAlpha_o *)v14, alpha, 0LL);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14, 0, 0LL);
          return;
        }
LABEL_16:
        sub_1BCB254(v10, v9);
      }
    }
  }
}


WarBoardBGEffectComponent_o *__fastcall WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardBGEffectComponent_o *result; // x0
  UnityEngine_Object_o *v10; // x21
  bool v11; // w8
  Il2CppObject *Component_object; // x21
  bool v13; // w8

  if ( (byte_4B19D23 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__, objName);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B19D23 = 1;
  }
  result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
  if ( !result )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)result,
         (Il2CppObject *)objName,
         (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__) )
  {
    result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
    if ( result )
      return (WarBoardBGEffectComponent_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)result,
                                              (Il2CppObject *)objName,
                                              (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
LABEL_17:
    sub_1BCB254(result, objName);
  }
  v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(objName, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  result = 0LL;
  if ( !v11 )
  {
    if ( !v10 )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v10,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    result = 0LL;
    if ( !v13 )
    {
      result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
      if ( !result )
        goto LABEL_17;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)result,
        (Il2CppObject *)objName,
        Component_object,
        (const MethodInfo_3385D78 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
      return (WarBoardBGEffectComponent_o *)Component_object;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WarBoardBackgroundComponent__GetBgDiffByIndex(
        WarBoardBackgroundComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *Item; // x0
  __int64 v8; // x1

  if ( (byte_4B19D20 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Count__,
      *(_QWORD *)&idx);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__, v5);
    byte_4B19D20 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.bgDiffList;
  if ( result )
  {
    if ( SLODWORD(result[1].klass) >= idx + 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)result,
               idx,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__);
      if ( !Item )
        sub_1BCB254(0LL, v8);
      return (UnityEngine_GameObject_o *)Item[1].klass;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


void __fastcall WarBoardBackgroundComponent__InitBgDiff(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *bgDiffList; // x9
  WarBoardCommonReleaseMaster_o *v11; // x19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppClass *klass; // x20
  _BOOL8 IsOpen; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19D1F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__,
      v4);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__,
      v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Current__,
      v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__,
      v7);
    byte_4B19D1F = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.bgDiffList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    bgDiffList = (System_Collections_Generic_List_object__o *)this->fields.bgDiffList;
    if ( !bgDiffList )
      sub_1BCB254(Master_object, v9);
    v11 = (WarBoardCommonReleaseMaster_o *)Master_object;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      bgDiffList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
      if ( !v12 )
        break;
      if ( !v17.fields._current )
        sub_1BCB254(v12, v13);
      if ( !v11 )
        sub_1BCB254(v12, v13);
      klass = v17.fields._current[1].klass;
      IsOpen = WarBoardCommonReleaseMaster__IsOpen(v11, (int32_t)v17.fields._current[1].monitor, 0LL);
      if ( !klass )
        sub_1BCB254(IsOpen, v16);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, !IsOpen, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
  }
}


void __fastcall WarBoardBackgroundComponent__PlayBgAnimation(
        WarBoardBackgroundComponent_o *this,
        WarBoardEventScriptEntity_o *entity,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *ObjectName; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  WarBoardBGEffectComponent_o *WarBoardBGEffectComponent; // x20
  int32_t IsStop; // w22
  WarBoardData_o *bgAnimationObjDic; // x21
  bool v13; // zf
  WarBoardBackgroundComponent_o *v14; // x22
  const MethodInfo *v15; // x2
  System_String_o *AnimationName; // x21
  const MethodInfo *v17; // x3

  v4 = this;
  if ( (byte_4B19D24 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, entity);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    this = (WarBoardBackgroundComponent_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v6);
    byte_4B19D24 = 1;
  }
  if ( !entity )
    goto LABEL_18;
  ObjectName = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
  {
    v8 = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
    WarBoardBGEffectComponent = WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(v4, v8, v9);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)WarBoardBGEffectComponent, 0LL, 0LL) )
    {
      IsStop = WarBoardEventScriptEntity__GetIsStop(entity, 0LL);
      this = (WarBoardBackgroundComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        bgAnimationObjDic = (WarBoardData_o *)this[6].fields.bgAnimationObjDic;
        this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
        v13 = IsStop == 1;
        v14 = this;
        if ( v13 )
        {
          if ( bgAnimationObjDic )
          {
            WarBoardData__SetBgAnimationInfo(
              bgAnimationObjDic,
              (System_String_o *)this,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__StopAnimation(WarBoardBGEffectComponent, 0, v15);
              return;
            }
          }
        }
        else
        {
          this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
          if ( bgAnimationObjDic )
          {
            WarBoardData__SetBgAnimationInfo(bgAnimationObjDic, (System_String_o *)v14, (System_String_o *)this, 0LL);
            AnimationName = WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
            this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(entity, 0LL);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__PlayAnimation(WarBoardBGEffectComponent, AnimationName, (_DWORD)this == 1, v17);
              return;
            }
          }
        }
      }
LABEL_18:
      sub_1BCB254(this, entity);
    }
  }
}


void __fastcall WarBoardBackgroundComponent__ResumeBgAnimation(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        System_String_o *animName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *WarBoardBGEffectComponent; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B19D25 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, objName);
    byte_4B19D25 = 1;
  }
  WarBoardBGEffectComponent = (UnityEngine_Object_o *)WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
                                                        this,
                                                        objName,
                                                        (const MethodInfo *)animName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(WarBoardBGEffectComponent, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !WarBoardBGEffectComponent )
      sub_1BCB254(v8, v9);
    WarBoardBGEffectComponent__ResumeAnimation((WarBoardBGEffectComponent_o *)WarBoardBGEffectComponent, animName, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackgroundComponent__SetDispBgDiff(
        WarBoardBackgroundComponent_o *this,
        int32_t idx,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *BgDiffByIndex; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x21
  System_String_o **v14; // x8
  System_String_o *v15; // x19

  if ( (byte_4B19D21 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, *(_QWORD *)&idx);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_24508/*"wall_0"*/, v8);
    sub_1BCAFF8(&StringLiteral_24509/*"wall_1"*/, v9);
    byte_4B19D21 = 1;
  }
  BgDiffByIndex = (UnityEngine_Object_o *)WarBoardBackgroundComponent__GetBgDiffByIndex(
                                            this,
                                            idx,
                                            (const MethodInfo *)isDisp);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(BgDiffByIndex, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !BgDiffByIndex )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)BgDiffByIndex,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v11 )
    {
      v14 = (System_String_o **)&StringLiteral_24509/*"wall_1"*/;
      if ( !isDisp )
        v14 = (System_String_o **)&StringLiteral_24508/*"wall_0"*/;
      if ( Component_object )
      {
        v15 = *v14;
        SimpleAnimation__Rewind_65398004((SimpleAnimation_o *)Component_object, *v14, 0LL);
        SimpleAnimation__Play_65395744((SimpleAnimation_o *)Component_object, v15, 0LL);
        return;
      }
LABEL_15:
      sub_1BCB254(v11, v12);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BgDiffByIndex, isDisp, 0LL);
  }
}


UITexture_o *__fastcall WarBoardBackgroundComponent__get_BoardBackground(
        WarBoardBackgroundComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.boardBg;
}


void __fastcall WarBoardBackgroundComponent_BackgroundDiffInfo___ctor(
        WarBoardBackgroundComponent_BackgroundDiffInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}