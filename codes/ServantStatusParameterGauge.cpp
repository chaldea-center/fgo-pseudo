void __fastcall ServantStatusParameterGauge___ctor(ServantStatusParameterGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B42A2 & 1) == 0 )
  {
    sub_B52984(&UISprite___TypeInfo);
    byte_42B42A2 = 1;
  }
  v3 = (struct UISprite_array *)sub_B5299C(UISprite___TypeInfo, 5LL);
  this->fields.gaugeSpriteList = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.gaugeSpriteList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  __int64 v8; // x23
  __int64 v9; // x24
  unsigned __int64 v10; // x25
  System_String_o *v11; // x21
  __int64 *v12; // x8
  System_String_o *v13; // x20
  unsigned int v14; // w26
  float v15; // s8
  float v16; // s9
  __int64 *v17; // x8
  __int64 *v18; // x8
  UISprite_o *evaluationSprite; // x0
  unsigned __int64 v20; // x20
  struct UISprite_array *gaugeSpriteList; // x8
  System_String_o *v22; // x8
  System_String_o *v23; // x1
  __int64 v25; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B42A0 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_19690/*"img_parameter_C"*/);
    sub_B52984(&StringLiteral_19705/*"img_parametergage_edge"*/);
    sub_B52984(&StringLiteral_19706/*"img_parametergage_edge_ex"*/);
    sub_B52984(&StringLiteral_19697/*"img_parameter_minus"*/);
    sub_B52984(&StringLiteral_19689/*"img_parameter_B"*/);
    sub_B52984(&StringLiteral_19691/*"img_parameter_D"*/);
    sub_B52984(&StringLiteral_19704/*"img_parametergage_bar_ex"*/);
    sub_B52984(&StringLiteral_19699/*"img_parameter_plus"*/);
    sub_B52984(&StringLiteral_19688/*"img_parameter_A"*/);
    sub_B52984(&StringLiteral_19703/*"img_parametergage_bar"*/);
    sub_B52984(&StringLiteral_19700/*"img_parameter_question"*/);
    sub_B52984(&StringLiteral_19692/*"img_parameter_E"*/);
    sub_B52984(&StringLiteral_19693/*"img_parameter_EX"*/);
    byte_42B42A0 = 1;
  }
  ServantStatusParameterGauge__SetParameterTitleSprite(this, kind, *(const MethodInfo **)&rank);
  v8 = StringLiteral_19703/*"img_parametergage_bar"*/;
  v9 = StringLiteral_19705/*"img_parametergage_edge"*/;
  v10 = 0LL;
  v11 = 0LL;
  switch ( rank )
  {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      v12 = &StringLiteral_19688/*"img_parameter_A"*/;
      v10 = 5LL;
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
      v12 = &StringLiteral_19689/*"img_parameter_B"*/;
      v10 = 4LL;
      goto LABEL_9;
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
      v12 = &StringLiteral_19690/*"img_parameter_C"*/;
      v10 = 3LL;
      goto LABEL_9;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
      v12 = &StringLiteral_19691/*"img_parameter_D"*/;
      v10 = 2LL;
      goto LABEL_9;
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      v12 = &StringLiteral_19692/*"img_parameter_E"*/;
      v10 = 1LL;
LABEL_9:
      v11 = (System_String_o *)*v12;
      goto LABEL_10;
    case 61:
      v14 = 0;
      v8 = StringLiteral_19704/*"img_parametergage_bar_ex"*/;
      v9 = StringLiteral_19706/*"img_parametergage_edge_ex"*/;
      v11 = (System_String_o *)StringLiteral_19693/*"img_parameter_EX"*/;
      v13 = 0LL;
      v15 = 0.0;
      v16 = 16.0;
      v10 = 5LL;
      goto LABEL_18;
    default:
      v10 = 0LL;
      if ( rank == 98 )
        v11 = (System_String_o *)StringLiteral_19700/*"img_parameter_question"*/;
      else
        v11 = 0LL;
LABEL_10:
      v13 = 0LL;
      v14 = 0;
      v15 = 0.0;
      v16 = 16.0;
      switch ( rank )
      {
        case 12:
        case 22:
        case 32:
        case 42:
        case 52:
          v17 = &StringLiteral_19699/*"img_parameter_plus"*/;
          goto LABEL_14;
        case 13:
        case 23:
        case 33:
        case 43:
        case 53:
          v18 = &StringLiteral_19699/*"img_parameter_plus"*/;
          v14 = 2;
          goto LABEL_17;
        case 14:
        case 24:
        case 34:
        case 44:
        case 54:
          v17 = &StringLiteral_19697/*"img_parameter_minus"*/;
LABEL_14:
          v13 = (System_String_o *)*v17;
          v14 = 1;
          break;
        case 15:
        case 25:
        case 35:
        case 45:
        case 55:
          v18 = &StringLiteral_19699/*"img_parameter_plus"*/;
          v14 = 3;
          v15 = -2.0;
          v16 = 10.0;
          goto LABEL_17;
        case 16:
        case 26:
        case 36:
        case 46:
        case 56:
          v18 = &StringLiteral_19700/*"img_parameter_question"*/;
          v14 = 1;
          v15 = 5.0;
LABEL_17:
          v13 = (System_String_o *)*v18;
          break;
        default:
          break;
      }
LABEL_18:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      UISprite__set_spriteName(evaluationSprite, v11, 0LL);
      if ( !v11 )
        goto LABEL_22;
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
        evaluationSprite,
        evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
LABEL_22:
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      if ( v14 )
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        v26.fields.y = 0.0;
        v26.fields.z = 0.0;
        v26.fields.x = v15;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v26, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        UISprite__set_spriteName(evaluationSprite, v13, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      if ( v14 >= 2 )
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_66;
        v27.fields.x = v16 + v15;
        v27.fields.y = 0.0;
        v27.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v27, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        UISprite__set_spriteName(evaluationSprite, v13, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_66;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_66;
      if ( v14 != 3 )
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
        goto LABEL_46;
      }
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite )
        goto LABEL_66;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite
        || (v28.fields.x = v15 + (float)(v16 + v16),
            v28.fields.y = 0.0,
            v28.fields.z = 0.0,
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v28, 0LL),
            (evaluationSprite = this->fields.evaluationAdd3Sprite) == 0LL)
        || (UISprite__set_spriteName(evaluationSprite, v13, 0LL),
            (evaluationSprite = this->fields.evaluationAdd3Sprite) == 0LL) )
      {
LABEL_66:
        sub_B52A5C(evaluationSprite, v7);
      }
      evaluationSprite = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
                                         evaluationSprite,
                                         evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
LABEL_46:
      v20 = 0LL;
      do
      {
        gaugeSpriteList = this->fields.gaugeSpriteList;
        if ( !gaugeSpriteList )
          goto LABEL_66;
        if ( v20 >= gaugeSpriteList->max_length )
        {
          v25 = sub_B52A88(evaluationSprite);
          sub_B52A28(v25, 0LL);
        }
        evaluationSprite = gaugeSpriteList->m_Items[v20];
        if ( v20 >= v10 )
        {
          if ( !evaluationSprite )
            goto LABEL_66;
          v23 = 0LL;
        }
        else
        {
          if ( !evaluationSprite )
            goto LABEL_66;
          if ( v20 >= 4 )
            v22 = (System_String_o *)v9;
          else
            v22 = (System_String_o *)v8;
          if ( v20 )
            v23 = v22;
          else
            v23 = (System_String_o *)v9;
        }
        UISprite__set_spriteName(evaluationSprite, v23, 0LL);
      }
      while ( v20++ < 4 );
      return;
  }
}


void __fastcall ServantStatusParameterGauge__SetParameterTitleSprite(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parameterTitleSprite; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_42B42A1 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_19696/*"img_parameter_magic"*/);
    sub_B52984(&StringLiteral_19698/*"img_parameter_np"*/);
    sub_B52984(&StringLiteral_19702/*"img_parameter_strength"*/);
    sub_B52984(&StringLiteral_19695/*"img_parameter_luck"*/);
    sub_B52984(&StringLiteral_19694/*"img_parameter_endurance"*/);
    sub_B52984(&StringLiteral_19701/*"img_parameter_speed"*/);
    byte_42B42A1 = 1;
  }
  parameterTitleSprite = (UnityEngine_Object_o *)this->fields.parameterTitleSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(parameterTitleSprite, 0LL, 0LL) )
  {
    switch ( kind )
    {
      case 0:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_21;
        v8 = &StringLiteral_19702/*"img_parameter_strength"*/;
        goto LABEL_20;
      case 1:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_21;
        v8 = &StringLiteral_19694/*"img_parameter_endurance"*/;
        goto LABEL_20;
      case 2:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_21;
        v8 = &StringLiteral_19701/*"img_parameter_speed"*/;
        goto LABEL_20;
      case 3:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_21;
        v8 = &StringLiteral_19696/*"img_parameter_magic"*/;
        goto LABEL_20;
      case 4:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_21;
        v8 = &StringLiteral_19695/*"img_parameter_luck"*/;
        goto LABEL_20;
      case 5:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
LABEL_21:
          sub_B52A5C(v7, v6);
        v8 = &StringLiteral_19698/*"img_parameter_np"*/;
LABEL_20:
        UISprite__set_spriteName(v7, (System_String_o *)*v8, 0LL);
        break;
      default:
        return;
    }
  }
}