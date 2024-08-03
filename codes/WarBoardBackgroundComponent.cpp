void __fastcall WarBoardBackgroundComponent___ctor(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49F9EFE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo, v4);
    byte_49F9EFE = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo,
                                                                    method,
                                                                    v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
  this->fields.bgAnimationObjDic = (struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgAnimationObjDic, (int32_t)v5, v6, v7);
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
  struct UISprite_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UICommonButtonColor_c *v11; // x8
  TweenAlpha_o *v12; // x0
  UnityEngine_Object_o *v13; // x20

  if ( (byte_49F9EFA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, immediate);
    sub_1B640C8(&UICommonButtonColor_TypeInfo, v7);
    byte_49F9EFA = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v9 = this->fields.maskSprite;
    if ( !v9 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
    v11 = UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      v11 = UICommonButtonColor_TypeInfo;
    }
    v12 = TweenAlpha__Begin(gameObject, v11->static_fields->duration, alpha, 0LL);
    if ( immediate )
    {
      v13 = (UnityEngine_Object_o *)v12;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        if ( v13 )
        {
          TweenAlpha__set_value((TweenAlpha_o *)v13, alpha, 0LL);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 0, 0LL);
          return;
        }
LABEL_16:
        sub_1B64324(v9);
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

  if ( (byte_49F9EFB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__, objName);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49F9EFB = 1;
  }
  result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
  if ( !result )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)result,
         (Il2CppObject *)objName,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__) )
  {
    result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
    if ( result )
      return (WarBoardBGEffectComponent_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)result,
                                              (Il2CppObject *)objName,
                                              (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
LABEL_17:
    sub_1B64324(result);
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
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
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
        (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
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

  if ( (byte_49F9EF8 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Count__,
      *(_QWORD *)&idx);
    sub_1B640C8(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__, v5);
    byte_49F9EF8 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.bgDiffList;
  if ( result )
  {
    if ( SLODWORD(result[1].klass) >= idx + 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)result,
               idx,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__);
      if ( !Item )
        sub_1B64324(0LL);
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
  System_Collections_Generic_List_object__o *bgDiffList; // x9
  WarBoardCommonReleaseMaster_o *v10; // x19
  _BOOL8 v11; // x0
  Il2CppClass *klass; // x20
  _BOOL8 IsOpen; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49F9EF7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Current__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__,
      v7);
    byte_49F9EF7 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( this->fields.bgDiffList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    bgDiffList = (System_Collections_Generic_List_object__o *)this->fields.bgDiffList;
    if ( !bgDiffList )
      sub_1B64324(Master_object);
    v10 = (WarBoardCommonReleaseMaster_o *)Master_object;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      bgDiffList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
      if ( !v11 )
        break;
      if ( !v14.fields._current )
        sub_1B64324(v11);
      if ( !v10 )
        sub_1B64324(v11);
      klass = v14.fields._current[1].klass;
      IsOpen = WarBoardCommonReleaseMaster__IsOpen(v10, (int32_t)v14.fields._current[1].monitor, 0LL);
      if ( !klass )
        sub_1B64324(IsOpen);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, !IsOpen, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
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
  if ( (byte_49F9EFC & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, entity);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    this = (WarBoardBackgroundComponent_o *)sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49F9EFC = 1;
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
      this = (WarBoardBackgroundComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1B64324(this);
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
  const MethodInfo *v9; // x2

  if ( (byte_49F9EFD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, objName);
    byte_49F9EFD = 1;
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
      sub_1B64324(v8);
    WarBoardBGEffectComponent__ResumeAnimation((WarBoardBGEffectComponent_o *)WarBoardBGEffectComponent, animName, v9);
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
  Il2CppObject *Component_object; // x21
  System_String_o **v13; // x8
  System_String_o *v14; // x19

  if ( (byte_49F9EF9 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, *(_QWORD *)&idx);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_24507/*"wall_0"*/, v8);
    sub_1B640C8(&StringLiteral_24508/*"wall_1"*/, v9);
    byte_49F9EF9 = 1;
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
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v11 )
    {
      v13 = (System_String_o **)&StringLiteral_24508/*"wall_1"*/;
      if ( !isDisp )
        v13 = (System_String_o **)&StringLiteral_24507/*"wall_0"*/;
      if ( Component_object )
      {
        v14 = *v13;
        SimpleAnimation__Rewind_63515320((SimpleAnimation_o *)Component_object, *v13, 0LL);
        SimpleAnimation__Play_63513060((SimpleAnimation_o *)Component_object, v14, 0LL);
        return;
      }
LABEL_15:
      sub_1B64324(v11);
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