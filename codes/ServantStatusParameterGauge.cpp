void __fastcall ServantStatusParameterGauge___ctor(ServantStatusParameterGauge_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13CF8 & 1) == 0 )
  {
    sub_1BCA7E0(&UISprite___TypeInfo, method, v2);
    byte_4B13CF8 = 1;
  }
  v4 = (struct UISprite_array *)sub_1BCA888(UISprite___TypeInfo, 5LL);
  this->fields.gaugeSpriteList = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.gaugeSpriteList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x23
  __int64 v33; // x24
  unsigned __int64 v34; // x25
  System_String_o *v35; // x21
  __int64 *v36; // x8
  int v37; // w8
  System_String_o *v38; // x20
  char v39; // w27
  float v40; // s8
  float v41; // s9
  char v42; // w26
  char v43; // w22
  __int64 *v44; // x8
  __int64 *v45; // x8
  UISprite_o *evaluationSprite; // x0
  unsigned __int64 i; // x20
  struct UISprite_array *gaugeSpriteList; // x8
  System_String_o *v49; // x8
  System_String_o *v50; // x1
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B13CF6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20591/*"img_parameter_C"*/, *(_QWORD *)&kind, *(_QWORD *)&rank);
    sub_1BCA7E0(&StringLiteral_20606/*"img_parametergage_edge"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20607/*"img_parametergage_edge_ex"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20598/*"img_parameter_minus"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20590/*"img_parameter_B"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20592/*"img_parameter_D"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_20605/*"img_parametergage_bar_ex"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_20600/*"img_parameter_plus"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_20589/*"img_parameter_A"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_20604/*"img_parametergage_bar"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_20601/*"img_parameter_question"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_20593/*"img_parameter_E"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_20594/*"img_parameter_EX"*/, v29, v30);
    byte_4B13CF6 = 1;
  }
  ServantStatusParameterGauge__SetParameterTitleSprite(this, kind, *(const MethodInfo **)&rank);
  v32 = StringLiteral_20604/*"img_parametergage_bar"*/;
  v33 = StringLiteral_20606/*"img_parametergage_edge"*/;
  v34 = 0LL;
  v35 = 0LL;
  switch ( rank )
  {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      v36 = &StringLiteral_20589/*"img_parameter_A"*/;
      v34 = 5LL;
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
      v36 = &StringLiteral_20590/*"img_parameter_B"*/;
      v34 = 4LL;
      goto LABEL_9;
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
      v36 = &StringLiteral_20591/*"img_parameter_C"*/;
      v34 = 3LL;
      goto LABEL_9;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
      v36 = &StringLiteral_20592/*"img_parameter_D"*/;
      v34 = 2LL;
      goto LABEL_9;
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      v36 = &StringLiteral_20593/*"img_parameter_E"*/;
      v34 = 1LL;
LABEL_9:
      v35 = (System_String_o *)*v36;
      goto LABEL_10;
    case 61:
      v38 = 0LL;
      v32 = StringLiteral_20605/*"img_parametergage_bar_ex"*/;
      v33 = StringLiteral_20607/*"img_parametergage_edge_ex"*/;
      v35 = (System_String_o *)StringLiteral_20594/*"img_parameter_EX"*/;
      v39 = 1;
      v40 = 0.0;
      v41 = 16.0;
      v34 = 5LL;
LABEL_15:
      v42 = 1;
LABEL_19:
      v43 = 1;
LABEL_20:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      UISprite__set_spriteName(evaluationSprite, v35, 0LL);
      if ( !v35 )
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
      if ( (v39 & 1) != 0 )
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
        v51.fields.y = 0.0;
        v51.fields.z = 0.0;
        v51.fields.x = v40;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v51, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_67;
        UISprite__set_spriteName(evaluationSprite, v38, 0LL);
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
      if ( (v42 & 1) != 0 )
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
        v52.fields.x = v41 + v40;
        v52.fields.y = 0.0;
        v52.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v52, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_67;
        UISprite__set_spriteName(evaluationSprite, v38, 0LL);
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
      if ( (v43 & 1) == 0 )
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
            v53.fields.x = v40 + (float)(v41 + v41);
            v53.fields.y = 0.0;
            v53.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v53, 0LL);
            evaluationSprite = this->fields.evaluationAdd3Sprite;
            if ( evaluationSprite )
            {
              UISprite__set_spriteName(evaluationSprite, v38, 0LL);
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
        sub_1BCAA3C(evaluationSprite, v31);
      }
      UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
LABEL_48:
      for ( i = 0LL; i != 5; ++i )
      {
        gaugeSpriteList = this->fields.gaugeSpriteList;
        if ( !gaugeSpriteList )
          goto LABEL_67;
        if ( i >= gaugeSpriteList->max_length )
          sub_1BCAA44(evaluationSprite, v31);
        evaluationSprite = gaugeSpriteList->m_Items[i];
        if ( i >= v34 )
        {
          if ( !evaluationSprite )
            goto LABEL_67;
          v50 = 0LL;
        }
        else
        {
          if ( !evaluationSprite )
            goto LABEL_67;
          if ( i >= 4 )
            v49 = (System_String_o *)v33;
          else
            v49 = (System_String_o *)v32;
          if ( i )
            v50 = v49;
          else
            v50 = (System_String_o *)v33;
        }
        UISprite__set_spriteName(evaluationSprite, v50, 0LL);
      }
      return;
    default:
      v34 = 0LL;
      if ( rank == 98 )
        v35 = (System_String_o *)StringLiteral_20601/*"img_parameter_question"*/;
      else
        v35 = 0LL;
LABEL_10:
      v37 = rank - 12;
      v38 = 0LL;
      v39 = 1;
      v40 = 0.0;
      v41 = 16.0;
      v42 = 1;
      v43 = 1;
      switch ( v37 )
      {
        case 0:
        case 10:
        case 20:
        case 30:
        case 40:
          v44 = &StringLiteral_20600/*"img_parameter_plus"*/;
          goto LABEL_14;
        case 1:
        case 11:
        case 21:
        case 31:
        case 41:
          v45 = &StringLiteral_20600/*"img_parameter_plus"*/;
          v39 = 0;
          v42 = 0;
          goto LABEL_18;
        case 2:
        case 12:
        case 22:
        case 32:
        case 42:
          v44 = &StringLiteral_20598/*"img_parameter_minus"*/;
LABEL_14:
          v39 = 0;
          v38 = (System_String_o *)*v44;
          goto LABEL_15;
        case 3:
        case 13:
        case 23:
        case 33:
        case 43:
          v39 = 0;
          v42 = 0;
          v43 = 0;
          v38 = (System_String_o *)StringLiteral_20600/*"img_parameter_plus"*/;
          v40 = -2.0;
          v41 = 10.0;
          goto LABEL_20;
        case 4:
        case 14:
        case 24:
        case 34:
        case 44:
          v45 = &StringLiteral_20601/*"img_parameter_question"*/;
          v39 = 0;
          v42 = 1;
          v40 = 5.0;
LABEL_18:
          v38 = (System_String_o *)*v45;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *parameterTitleSprite; // x21
  __int64 v18; // x1
  UISprite_o *v19; // x0
  __int64 *v20; // x8

  if ( (byte_4B13CF7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&StringLiteral_20597/*"img_parameter_magic"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_20599/*"img_parameter_np"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_20603/*"img_parameter_strength"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20596/*"img_parameter_luck"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20595/*"img_parameter_endurance"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20602/*"img_parameter_speed"*/, v15, v16);
    byte_4B13CF7 = 1;
  }
  parameterTitleSprite = (UnityEngine_Object_o *)this->fields.parameterTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
  if ( !UnityEngine_Object__op_Equality(parameterTitleSprite, 0LL, 0LL) )
  {
    switch ( kind )
    {
      case 0:
        v19 = this->fields.parameterTitleSprite;
        if ( !v19 )
          goto LABEL_20;
        v20 = &StringLiteral_20603/*"img_parameter_strength"*/;
        goto LABEL_19;
      case 1:
        v19 = this->fields.parameterTitleSprite;
        if ( !v19 )
          goto LABEL_20;
        v20 = &StringLiteral_20595/*"img_parameter_endurance"*/;
        goto LABEL_19;
      case 2:
        v19 = this->fields.parameterTitleSprite;
        if ( !v19 )
          goto LABEL_20;
        v20 = &StringLiteral_20602/*"img_parameter_speed"*/;
        goto LABEL_19;
      case 3:
        v19 = this->fields.parameterTitleSprite;
        if ( !v19 )
          goto LABEL_20;
        v20 = &StringLiteral_20597/*"img_parameter_magic"*/;
        goto LABEL_19;
      case 4:
        v19 = this->fields.parameterTitleSprite;
        if ( !v19 )
          goto LABEL_20;
        v20 = &StringLiteral_20596/*"img_parameter_luck"*/;
        goto LABEL_19;
      case 5:
        v19 = this->fields.parameterTitleSprite;
        if ( !v19 )
LABEL_20:
          sub_1BCAA3C(v19, v18);
        v20 = &StringLiteral_20599/*"img_parameter_np"*/;
LABEL_19:
        UISprite__set_spriteName(v19, (System_String_o *)*v20, 0LL);
        break;
      default:
        return;
    }
  }
}