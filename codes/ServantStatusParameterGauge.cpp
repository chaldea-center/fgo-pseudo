void __fastcall ServantStatusParameterGauge___ctor(ServantStatusParameterGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C1F8F6 & 1) == 0 )
  {
    sub_1C3B764(&UISprite___TypeInfo, method);
    byte_4C1F8F6 = 1;
  }
  v3 = (struct UISprite_array *)sub_1C3B80C(UISprite___TypeInfo, 5LL);
  this->fields.gaugeSpriteList = v3;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.gaugeSpriteList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterGauge__Set(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x23
  __int64 v21; // x24
  unsigned __int64 v22; // x25
  System_String_o *v23; // x21
  __int64 *v24; // x8
  int v25; // w8
  System_String_o *v26; // x20
  char v27; // w27
  float v28; // s8
  float v29; // s9
  char v30; // w26
  char v31; // w22
  __int64 *v32; // x8
  __int64 *v33; // x8
  UISprite_o *evaluationSprite; // x0
  unsigned __int64 i; // x20
  struct UISprite_array *gaugeSpriteList; // x8
  System_String_o *v37; // x8
  System_String_o *v38; // x1
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1F8F4 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20783/*"line_whiteAlpha"*/, *(_QWORD *)&kind);
    sub_1C3B764(&StringLiteral_20798/*"listframes0"*/, v7);
    sub_1C3B764(&StringLiteral_20799/*"listframes00_bg"*/, v8);
    sub_1C3B764(&StringLiteral_20790/*"linkbad_svt_material"*/, v9);
    sub_1C3B764(&StringLiteral_20782/*"lineSpacingMax"*/, v10);
    sub_1C3B764(&StringLiteral_20784/*"line_whiteAlpha_Noblur"*/, v11);
    sub_1C3B764(&StringLiteral_20797/*"listcframes3_bg"*/, v12);
    sub_1C3B764(&StringLiteral_20792/*"linklost_svt_material"*/, v13);
    sub_1C3B764(&StringLiteral_20781/*"lineSpacing"*/, v14);
    sub_1C3B764(&StringLiteral_20796/*"listcframes2_bg"*/, v15);
    sub_1C3B764(&StringLiteral_20793/*"linux"*/, v16);
    sub_1C3B764(&StringLiteral_20785/*"linear"*/, v17);
    sub_1C3B764(&StringLiteral_20786/*"linear | <timing-function>"*/, v18);
    byte_4C1F8F4 = 1;
  }
  ServantStatusParameterGauge__SetParameterTitleSprite(this, kind, *(const MethodInfo **)&rank);
  v20 = StringLiteral_20796/*"listcframes2_bg"*/;
  v21 = StringLiteral_20798/*"listframes0"*/;
  v22 = 0LL;
  v23 = 0LL;
  switch ( rank )
  {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      v24 = &StringLiteral_20781/*"lineSpacing"*/;
      v22 = 5LL;
      goto LABEL_9;
    case 17:
    case 18:
    case 19:
    case 20:
    case 27:
    case 28:
    case 29:
    case 30:
    case 37:
    case 38:
    case 39:
    case 40:
    case 47:
    case 48:
    case 49:
    case 50:
    case 57:
    case 58:
    case 59:
    case 60:
      goto LABEL_10;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
      v24 = &StringLiteral_20782/*"lineSpacingMax"*/;
      v22 = 4LL;
      goto LABEL_9;
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
      v24 = &StringLiteral_20783/*"line_whiteAlpha"*/;
      v22 = 3LL;
      goto LABEL_9;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
      v24 = &StringLiteral_20784/*"line_whiteAlpha_Noblur"*/;
      v22 = 2LL;
      goto LABEL_9;
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      v24 = &StringLiteral_20785/*"linear"*/;
      v22 = 1LL;
LABEL_9:
      v23 = (System_String_o *)*v24;
      goto LABEL_10;
    case 61:
      v26 = 0LL;
      v20 = StringLiteral_20797/*"listcframes3_bg"*/;
      v21 = StringLiteral_20799/*"listframes00_bg"*/;
      v23 = (System_String_o *)StringLiteral_20786/*"linear | <timing-function>"*/;
      v27 = 1;
      v28 = 0.0;
      v29 = 16.0;
      v22 = 5LL;
LABEL_15:
      v30 = 1;
LABEL_19:
      v31 = 1;
LABEL_20:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      UISprite__set_spriteName(evaluationSprite, v23, 0LL);
      if ( !v23 )
        goto LABEL_24;
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
        evaluationSprite,
        evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
LABEL_24:
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      if ( (v27 & 1) != 0 )
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      else
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_67;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_67;
        v39.fields.y = 0.0;
        v39.fields.z = 0.0;
        v39.fields.x = v28;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v39, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_67;
        UISprite__set_spriteName(evaluationSprite, v26, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_67;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      if ( (v30 & 1) != 0 )
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      else
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_67;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_67;
        v40.fields.x = v29 + v28;
        v40.fields.y = 0.0;
        v40.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v40, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_67;
        UISprite__set_spriteName(evaluationSprite, v26, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_67;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      if ( (v31 & 1) == 0 )
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( evaluationSprite )
        {
          evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)evaluationSprite,
                                             0LL);
          if ( evaluationSprite )
          {
            v41.fields.x = v28 + (float)(v29 + v29);
            v41.fields.y = 0.0;
            v41.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v41, 0LL);
            evaluationSprite = this->fields.evaluationAdd3Sprite;
            if ( evaluationSprite )
            {
              UISprite__set_spriteName(evaluationSprite, v26, 0LL);
              evaluationSprite = this->fields.evaluationAdd3Sprite;
              if ( evaluationSprite )
              {
                evaluationSprite = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
                                                   evaluationSprite,
                                                   evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
                goto LABEL_48;
              }
            }
          }
        }
LABEL_67:
        sub_1C3B9C0(evaluationSprite, v19);
      }
      UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
LABEL_48:
      for ( i = 0LL; i != 5; ++i )
      {
        gaugeSpriteList = this->fields.gaugeSpriteList;
        if ( !gaugeSpriteList )
          goto LABEL_67;
        if ( i >= gaugeSpriteList->max_length )
          sub_1C3B9C8(evaluationSprite, v19);
        evaluationSprite = gaugeSpriteList->m_Items[i];
        if ( i >= v22 )
        {
          if ( !evaluationSprite )
            goto LABEL_67;
          v38 = 0LL;
        }
        else
        {
          if ( !evaluationSprite )
            goto LABEL_67;
          if ( i >= 4 )
            v37 = (System_String_o *)v21;
          else
            v37 = (System_String_o *)v20;
          if ( i )
            v38 = v37;
          else
            v38 = (System_String_o *)v21;
        }
        UISprite__set_spriteName(evaluationSprite, v38, 0LL);
      }
      return;
    default:
      v22 = 0LL;
      if ( rank == 98 )
        v23 = (System_String_o *)StringLiteral_20793/*"linux"*/;
      else
        v23 = 0LL;
LABEL_10:
      v25 = rank - 12;
      v26 = 0LL;
      v27 = 1;
      v28 = 0.0;
      v29 = 16.0;
      v30 = 1;
      v31 = 1;
      switch ( v25 )
      {
        case 0:
        case 10:
        case 20:
        case 30:
        case 40:
          v32 = &StringLiteral_20792/*"linklost_svt_material"*/;
          goto LABEL_14;
        case 1:
        case 11:
        case 21:
        case 31:
        case 41:
          v33 = &StringLiteral_20792/*"linklost_svt_material"*/;
          v27 = 0;
          v30 = 0;
          goto LABEL_18;
        case 2:
        case 12:
        case 22:
        case 32:
        case 42:
          v32 = &StringLiteral_20790/*"linkbad_svt_material"*/;
LABEL_14:
          v27 = 0;
          v26 = (System_String_o *)*v32;
          goto LABEL_15;
        case 3:
        case 13:
        case 23:
        case 33:
        case 43:
          v27 = 0;
          v30 = 0;
          v31 = 0;
          v26 = (System_String_o *)StringLiteral_20792/*"linklost_svt_material"*/;
          v28 = -2.0;
          v29 = 10.0;
          goto LABEL_20;
        case 4:
        case 14:
        case 24:
        case 34:
        case 44:
          v33 = &StringLiteral_20793/*"linux"*/;
          v27 = 0;
          v30 = 1;
          v28 = 5.0;
LABEL_18:
          v26 = (System_String_o *)*v33;
          goto LABEL_19;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
          goto LABEL_20;
        default:
          goto LABEL_15;
      }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterGauge__SetParameterTitleSprite(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *parameterTitleSprite; // x21
  __int64 v12; // x1
  UISprite_o *v13; // x0
  __int64 *v14; // x8

  if ( (byte_4C1F8F5 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&StringLiteral_20789/*"linkUrl"*/, v5);
    sub_1C3B764(&StringLiteral_20791/*"linkedAt"*/, v6);
    sub_1C3B764(&StringLiteral_20795/*"listcframes1_bg"*/, v7);
    sub_1C3B764(&StringLiteral_20788/*"linen"*/, v8);
    sub_1C3B764(&StringLiteral_20787/*"linear-gradient"*/, v9);
    sub_1C3B764(&StringLiteral_20794/*"list"*/, v10);
    byte_4C1F8F5 = 1;
  }
  parameterTitleSprite = (UnityEngine_Object_o *)this->fields.parameterTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(parameterTitleSprite, 0LL, 0LL) )
  {
    switch ( kind )
    {
      case 0:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
          goto LABEL_20;
        v14 = &StringLiteral_20795/*"listcframes1_bg"*/;
        goto LABEL_19;
      case 1:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
          goto LABEL_20;
        v14 = &StringLiteral_20787/*"linear-gradient"*/;
        goto LABEL_19;
      case 2:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
          goto LABEL_20;
        v14 = &StringLiteral_20794/*"list"*/;
        goto LABEL_19;
      case 3:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
          goto LABEL_20;
        v14 = &StringLiteral_20789/*"linkUrl"*/;
        goto LABEL_19;
      case 4:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
          goto LABEL_20;
        v14 = &StringLiteral_20788/*"linen"*/;
        goto LABEL_19;
      case 5:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
LABEL_20:
          sub_1C3B9C0(v13, v12);
        v14 = &StringLiteral_20791/*"linkedAt"*/;
LABEL_19:
        UISprite__set_spriteName(v13, (System_String_o *)*v14, 0LL);
        break;
      default:
        return;
    }
  }
}